/*
-------------------------------------------------------------------------------
    Copyright (c) Charles Carley.

  This software is provided 'as-is', without any express or implied
  warranty. In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
-------------------------------------------------------------------------------
*/
#include "Generator.h"
#include <functional>
#include <iomanip>
#include <iostream>
#include "Common.h"
#include "Complex.h"
#include "Database.h"
#include "Simple.h"
#include "TypeFilter/DoxygenFilter.h"
#include "Types.h"
#include "Utils/Char.h"
#include "Utils/Exception.h"
#include "Utils/FileSystem.h"
#include "Utils/Path.h"
#include "Xml/Node.h"
#include "Xml/Writer.h"

namespace MdDox::GenApi
{
    using namespace Xml;
    using AllocArray = std::vector<Writer*>;
    using ComplexMap = std::unordered_map<String, Complex*>;
    using GroupMap   = std::unordered_map<String, Group*>;

    class GeneratorImpl
    {
    private:
        Node*    _root;
        String   _header;
        PathUtil _out;

        AllocArray _alloc;

        Database      _complex;
        Database      _simple;
        Database      _attribute;
        Database      _element;
        Database      _group;
        Database      _enums;
        TypeFilterMap _filter;

        bool isGroup(const String& type) const
        {
            return !_group.value(type).empty();
        }

    public:
        explicit GeneratorImpl(Node* root, const PathUtil& out) :
            _root(root),
            _out(out)
        {
        }

        ~GeneratorImpl()
        {
            for (Writer* obj : _alloc)
                delete obj;
        }

        void processEnumeration(Simple* simple, Node* tag) const
        {
            const String value = tag->attribute("value");

            if (_enums.contains(value))
                simple->addEnumValue(value, _enums.value(value));
        }

        void processRestriction(Simple* simple, Node* tag) const
        {
            for (Node* child : tag->children())
            {
                if (child->isTypeOf("xsd:enumeration"))
                    processEnumeration(simple, child);
            }
        }

        void processSimple(Simple* simple, Node* tag) const
        {
            for (Node* child : tag->children())
            {
                if (child->isTypeOf("xsd:restriction"))
                    processRestriction(simple, child);
            }
        }

        void processSimpleTypes()
        {
            for (const auto& [name, node] : _simple)
            {
                Simple* obj = new Simple(node,
                                         _simple.value(name, name),
                                         name,
                                         _header);
                _alloc.push_back(obj);

                processSimple(obj, node);

                _simple.insert(name, obj);
            }

            const ObjectMap& obj = _simple.getObjects();

            for (const auto& [name, node] : obj)
            {
                String op = StringCombine(_out.rootedDir(), _simple.value(name));
                ((Simple*)node)->write(op);
            }
        }

        void processComplexAttribute(Group* complex, Node* tag) const
        {
            const String type = tag->attribute("type");
            const String name = tag->attribute("name");

            if (!name.empty())
            {
                Attribute attr;
                attr.searchTerm = name;
                attr.genName    = _attribute.value(name);
                if (attr.genName.empty())
                    attr.genName = name;

                attr.genName = StringUtils::toUpperFirst(attr.genName);

                if (type == "xsd:string")
                {
                    attr.genType    = "String";
                    attr.isRequired = false;
                    complex->addStringAttribute(attr);
                }
                else if (type == "xsd:integer")
                {
                    attr.genType    = "int64_t";
                    attr.isRequired = false;
                    complex->addIntegerAttribute(attr);
                }
                else if (_simple.contains(type))
                {
                    attr.genType = _simple.value(type);
                    complex->addEnumAttribute(attr);
                }
                else
                {
                    logSkip(tag);
                }
            }
            else
                logSkip(tag);
        }

        int getElementType(Node* tag) const
        {
            const String type = tag->attribute("type");
            int          rc   = BASE_TYPE;
            if (_simple.contains(type))
                rc = SIMPLE_TYPE;
            else if (_complex.contains(type))
                rc = COMPLEX_TYPE;
            else if (_group.contains(type))
                rc = GROUP_TYPE;
            return rc;
        }

        void getElement(Element& dest, Node* tag) const
        {
            String max = tag->attribute("maxOccurs");
            if (max.empty())
            {
                Node* par = tag->parent();
                if (par && par->isTypeOf("xsd:sequence"))
                    max = par->attribute("maxOccurs");
            }

            dest             = Element{};
            dest.type        = getElementType(tag);
            dest.isUnbounded = max == "unbounded";
            dest.searchTerm = tag->attribute("name");
            

        	switch (dest.type)
            {
            case BASE_TYPE:
                dest.genType = tag->attribute("type") == "xsd:integer" ? "int64_t" : "String";
                dest.genName = _element.value(tag->attribute("name"));
                break;
            case SIMPLE_TYPE:
                dest.genType = _simple.value(tag->attribute("type"));
                dest.genName = _element.value(tag->attribute("name"));
                break;
            case COMPLEX_TYPE:
                dest.genType = _complex.value(tag->attribute("type"));
                dest.genName = _element.value(tag->attribute("name"));
                break;
            case GROUP_TYPE:
                dest.genType = _group.value(tag->attribute("type"));
                dest.genName = _element.value(tag->attribute("name"));
                break;
            default:
                break;
            }

            dest.isSingle   = !dest.isUnbounded;
            dest.isRequired = tag->attribute("use") != "optional";
            dest.minOccurs  = 0;
            dest.maxOccurs  = 0;

            if (!max.empty())
                dest.maxOccurs = Char::toUint32(max);

            dest.isValid = !dest.genName.empty() && !dest.genType.empty();
        }

        void processComplexElementBase(Group* group, Node* tag) const
        {
            const String elementName = tag->attribute("name");

            const TypeFilterMap::const_iterator it = _filter.find(elementName);
            if (it == _filter.end())
            {
                // not used
                return;
            }

            Element el;
            getElement(el, tag);
            el.typeCode = it->second;

            if (el.isValid)
                group->addStringTextElement(el);
            else
                logSkip(tag);
        }

        void processComplexElementSimple(Group* group, Node* tag) const
        {
            Element el;
            getElement(el, tag);
        }

        void processComplexElementComplex(Group* group, Node* tag) const
        {
            const String elementName = tag->attribute("name");

            const TypeFilterMap::const_iterator it = _filter.find(elementName);
            if (it == _filter.end())
            {
                // not used
                return;
            }

            Element el;
            getElement(el, tag);
            if (el.isValid)
            {
                el.typeCode = it->second;
                if (el.isUnbounded)
                    group->addElement(el);
                else
                    group->addSingleElement(el);
            }
            else
                logSkip(tag);
        }

        void processComplexElementGroup(Group* group, Node* tag) const
        {
            Element el;
            getElement(el, tag);

            if (el.isValid)
            {
                Group* oth = (Group*)_group.object(el.searchTerm);
                if (oth)
                    group->addGroup(oth);
            }
            else
                logSkip(tag);
        }

        void processComplexElement(Group* complex, Node* tag) const
        {
            switch (getElementType(tag))
            {
            case BASE_TYPE:
                processComplexElementBase(complex, tag);
                break;
            case SIMPLE_TYPE:
                processComplexElementSimple(complex, tag);
                break;
            case COMPLEX_TYPE:
                processComplexElementComplex(complex, tag);
                break;
            case GROUP_TYPE:
                processComplexElementGroup(complex, tag);
                break;
            default:
                logSkip(tag);
                break;
            }
        }

        void processComplexSequence(Group* complex, Node* tag) const
        {
            for (Node* child : tag->children())
            {
                if (child->isTypeOf("xsd:element"))
                    processComplexElement(complex, child);
                else if (child->isTypeOf("xsd:sequence"))
                    processComplexSequence(complex, child);
            }
        }

        void processComplex(Group* complex, Node* tag) const
        {
            for (Node* child : tag->children())
            {
                if (child->isTypeOf("xsd:attribute"))
                    processComplexAttribute(complex, child);
                else if (child->isTypeOf("xsd:sequence"))
                    processComplexSequence(complex, child);
                else if (child->isTypeOf("xsd:group"))
                {
                    String ref = child->attribute("ref");

                    Object* obj = _group.object(ref);
                    if (obj != nullptr)
                        complex->addGroup((Group*)obj);
                }
                else if (child->isTypeOf("xsd:simpleContent"))
                {
                    if (child->hasChildren())
                    {
                        if (child->at(0)->isTypeOf("xsd:extension"))
                        {
                            Node* ext = child->at(0);
                            processComplex(complex, ext);
                        }
                    }
                }
                else if (child->isTypeOf("xsd:element"))
                    processComplexElement(complex, child);
                else if (child->isTypeOf("xsd:choice"))
                    processComplex(complex, child);
            }
        }

        void processGroup(Group* complex, Node* tag) const
        {
            for (Node* child : tag->children())
            {
                if (child->isTypeOf("xsd:choice"))
                    processComplex(complex, child);
            }
        }

        void processComplexTypes()
        {
            for (const auto& [name, node] : _complex)
            {
                Complex* obj = new Complex(node,
                                           _complex.value(name, name),
                                           name);
                _alloc.push_back(obj);

                processComplex(obj, node);

                _complex.insert(name, obj);
            }

            const ObjectMap& obj = _complex.getObjects();

            for (const auto& [name, node] : obj)
            {
                String op = StringCombine(_out.rootedDir(), _complex.value(name));
                ((Complex*)node)->write(op);
            }
        }

        void processCommon()
        {
            Common c(_header);
            c.addInclude("Xml/Node.h");
            c.addInclude("Utils/String.h");
            c.addInclude("Utils/Exception.h");

            for (const auto& [tagName, obj] : _complex)
                c.addForward(_complex.value(tagName));

            c.write(PathUtil(StringCombine(_out.rootedDir(), "Doxygen")));
        }

        void processGroupTypes()
        {
            for (const auto& [name, node] : _group)
            {
                Group* group = new Group(node,
                                         _group.value(name, name),
                                         name);
                processComplex(group, node);

                _group.insert(name, group);
                _alloc.push_back(group);
            }
        }

        void logSkip(Node* tag) const
        {
            Console::writeLine("Note: unhandled tag ", tag->name());
            Xml::Writer w(tag);
            w.setIndent(4);
            w.setWriteXml(false);
            w.write(std::cout);
        }

        void writeSchema(Node* schema)
        {
            const NodeArray& tags = schema->children();

            for (Node* tag : tags)
            {
                if (tag->isTypeOf("xsd:complexType"))
                {
                    String name = tag->attribute("name");
                    if (!name.empty())
                        _complex.insert(name, tag);
                }
                else if (tag->isTypeOf("xsd:group"))
                {
                    String name = tag->attribute("name");
                    if (!name.empty())
                        _group.insert(name, tag);
                }
                else if (tag->isTypeOf("xsd:simpleType"))
                {
                    String name = tag->attribute("name");
                    if (!name.empty())
                        _simple.insert(name, tag);
                }
                else
                    logSkip(tag);
            }

            processGroupTypes();
            processSimpleTypes();
            processComplexTypes();
            processCommon();
        }

        void readSubstitutions()
        {
            makeTypeFilter(_filter, Doxygen::getFilter(), Doxygen::getFilterSize());

            _complex.read("Complex.txt");
            _simple.read("Simple.txt");
            _attribute.read("Attributes.txt");
            _element.read("Elements.txt");
            _group.read("Groups.txt");
            _enums.read("Enums.txt");

            {  // read the header
                InputFileStream    header("Header.txt");
                OutputStringStream oss;

                String str;
                while (getline(header, str))
                    oss << str << std::endl;
                _header = oss.str();
                header.close();
            }
        }

        void write()
        {
            readSubstitutions();

            const NodeArray& nodes = _root->children();

            for (Node* node : nodes)
            {
                if (node->isTypeOf("xsd:schema"))
                    writeSchema(node);
            }
        }
    };

    Generator::Generator(Node* root) :
        _root(root)
    {
    }

    void Generator::write(const PathUtil& out) const
    {
        GeneratorImpl impl(_root, out);
        impl.write();
    }

}  // namespace MdDox::DoxApi
