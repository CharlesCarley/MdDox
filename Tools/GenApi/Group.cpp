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
#include "Group.h"
#include <utility>
#include "Resources.h"
#include "Utils/Char.h"
#include "Utils/String.h"
#include "Xml/Writer.h"

namespace MdDox::GenApi
{
    Group::Group(Xml::Node* node, String name, String type) :
        Object(std::move(name)),
        _node(node),
        _tagType(std::move(type))
    {
    }

    Group::Group(const Group& group, String name) :
        Object(std::move(name)),
        _node(group._node),
        _tagType(group._tagType)
    {
        _elements          = group._elements;
        _singleReturns     = group._singleReturns;
        _textReturns       = group._textReturns;
        _stringAttributes  = group._stringAttributes;
        _integerAttributes = group._integerAttributes;
        _dependentTypes    = group._dependentTypes;

        for (Group* ng : group._groups)
            _groups.push_back(new Group(*ng, _name));
    }

    Group::~Group()
    {
        for (auto* group : _groups)
            delete group;
    }

    void Group::setForeach(bool v)
    {
        _foreach = v;
    }

    void Group::addStringAttribute(const Attribute& attr)
    {
        if (_stringAttributes.find(attr.searchTerm) == _stringAttributes.end())
            _stringAttributes[attr.searchTerm] = attr;
    }

    void Group::addIntegerAttribute(const Attribute& attr)
    {
        if (_integerAttributes.find(attr.searchTerm) == _integerAttributes.end())
            _integerAttributes[attr.searchTerm] = attr;
    }

    void Group::addEnumAttribute(const Attribute& attr)
    {
        if (_dependentHeaderTypes.find(attr.genType) == _dependentHeaderTypes.end())
            _dependentHeaderTypes[attr.genType] = (attr.genType);

        if (_enumAttributes.find(attr.searchTerm) == _enumAttributes.end())
            _enumAttributes[attr.searchTerm] = attr;
    }

    void Group::addElement(const Element& element)
    {
        if (_dependentTypes.find(element.genType) == _dependentTypes.end())
            _dependentTypes[element.genType] = (element.genType);

        if (std::find(_elements.begin(),  // bad
                      _elements.end(),
                      element) == _elements.end())
        {
            _elements.push_back(element);
        }
    }

    void Group::addStringTextElement(const Element& name)
    {
        _textReturns.push_back(name);
    }

    void Group::addSingleElement(const Element& element)
    {
        if (_dependentTypes.find(element.genType) == _dependentTypes.end())
            _dependentTypes[element.genType] = element.genType;

        if (std::find(_singleReturns.begin(),  // bad
                      _singleReturns.end(),
                      element) == _singleReturns.end())
        {
            _singleReturns.push_back(element);
        }
    }

    void Group::addGroup(Group* group)
    {
        if (!group)
            return;

        Group* gr = group->replicate(_name);

        for (auto& [key, val] : gr->_dependentTypes)
        {
            if (_dependentTypes.find(val) == _dependentTypes.end())
                _dependentTypes[val] = val;
        }

        _groups.push_back(gr);
    }

    void Group::writeStringGettersHeader(OStream& out)
    {
        for (auto& [lookup, name] : _enumAttributes)
        {
            String dest;
            Resources::Resource::getEnumAttributeHeader(dest);

            StringUtils::replaceAll(dest, dest, "${searchTerm}", lookup);
            StringUtils::replaceAll(dest, dest, "${type}", name.genType);
            StringUtils::replaceAll(dest, dest, "${name}", name.genName);
            out << dest << std::endl;
        }

        for (auto& [lookup, name] : _stringAttributes)
        {
            String dest;
            Resources::Resource::getStringAttributeHeader(dest);

            StringUtils::replaceAll(dest, dest, "${searchTerm}", lookup);
            StringUtils::replaceAll(dest, dest, "${name}", name.genName);
            out << dest << std::endl;
        }

        for (auto& element : _textReturns)
        {
            String dest;
            Resources::Resource::getElementTextHeader(dest);

            StringUtils::replaceAll(dest, dest, "${searchTerm}", element.searchTerm);
            StringUtils::replaceAll(dest, dest, "${name}", element.genName);
            out << dest << std::endl;
        }

        for (auto& element : _singleReturns)
        {
            String dest;
            Resources::Resource::getSingleElementHeader(dest);

            StringUtils::replaceAll(dest, dest, "${searchTerm}", element.searchTerm);
            StringUtils::replaceAll(dest, dest, "${name}", element.genName);
            StringUtils::replaceAll(dest, dest, "${type}", element.genType);
            out << dest << std::endl;
        }

        for (auto& [lookup, name] : _integerAttributes)
        {
            String dest;
            Resources::Resource::getIntegerAttributeHeader(dest);

            StringUtils::replaceAll(dest, dest, "${searchTerm}", lookup);
            StringUtils::replaceAll(dest, dest, "${name}", name.genName);
            out << dest << std::endl;
        }

        for (Group* group : _groups)
            group->writeStringGettersHeader(out);
    }

    void Group::writeStringGettersSource(OStream& out)
    {
        for (auto& [lookup, name] : _stringAttributes)
        {
            String dest;
            Resources::Resource::getStringAttributeSource(dest);

            StringUtils::replaceAll(dest, dest, "${searchTerm}", lookup);
            StringUtils::replaceAll(dest, dest, "${name}", name.genName);
            StringUtils::replaceAll(dest, dest, "${className}", _name);
            out << dest << std::endl;
        }

        for (auto& [lookup, name] : _integerAttributes)
        {
            String dest;
            Resources::Resource::getIntegerAttributeSource(dest);

            StringUtils::replaceAll(dest, dest, "${searchTerm}", lookup);
            StringUtils::replaceAll(dest, dest, "${name}", name.genName);
            StringUtils::replaceAll(dest, dest, "${className}", _name);
            out << dest << std::endl;
        }

        for (auto& [lookup, name] : _enumAttributes)
        {
            String dest;
            Resources::Resource::getEnumAttributeSource(dest);

            StringUtils::replaceAll(dest, dest, "${searchTerm}", lookup);
            StringUtils::replaceAll(dest, dest, "${name}", name.genName);
            StringUtils::replaceAll(dest, dest, "${className}", _name);
            StringUtils::replaceAll(dest, dest, "${type}", name.genType);
            out << dest << std::endl;
        }

        for (auto& element : _textReturns)
        {
            String dest;
            Resources::Resource::getElementTextSource(dest);

            StringUtils::replaceAll(dest, dest, "${searchTerm}", element.searchTerm);
            StringUtils::replaceAll(dest, dest, "${name}", element.genName);
            StringUtils::replaceAll(dest, dest, "${className}", _name);
            StringUtils::replaceAll(dest, dest, "${typeCode}", Char::toString(element.typeCode));
            out << dest << std::endl;
        }

        for (auto& element : _singleReturns)
        {
            String dest;
            Resources::Resource::getSingleElementSource(dest);

            StringUtils::replaceAll(dest, dest, "${searchTerm}", element.searchTerm);
            StringUtils::replaceAll(dest, dest, "${name}", element.genName);
            StringUtils::replaceAll(dest, dest, "${className}", _name);
            StringUtils::replaceAll(dest, dest, "${typeCode}", Char::toString(element.typeCode));
            StringUtils::replaceAll(dest, dest, "${type}", element.genType);
            out << dest << std::endl;
        }

        for (Group* group : _groups)
            group->writeStringGettersSource(out);
    }

    void Group::writeForeachHeader(OStream& out)
    {
        if (!_foreach)
            return;

        for (const Element& element : _elements)
        {
            if (element.isUnbounded)
            {
                String dest;
                Resources::Resource::getForeachElementHeader(dest);
                StringUtils::replaceAll(dest, dest, "${type}", element.genType);
                StringUtils::replaceAll(dest, dest, "${name}", element.genName);
                StringUtils::replaceAll(dest, dest, "${searchTerm}", element.searchTerm);
                out << dest << std::endl;
            }
        }

        for (Group* group : _groups)
            group->writeForeachHeader(out);
    }

    void Group::writeForeachSource(OStream& out)
    {
        if (!_foreach)
            return;

        for (const Element& element : _elements)
        {
            if (element.isUnbounded)
            {
                String dest;
                Resources::Resource::getForeachElementSource(dest);

                StringUtils::replaceAll(dest, dest, "${type}", element.genType);
                StringUtils::replaceAll(dest, dest, "${name}", element.genName);
                StringUtils::replaceAll(dest, dest, "${typeCode}", Char::toString(element.typeCode));
                StringUtils::replaceAll(dest, dest, "${className}", _name);
                out << dest << std::endl;
            }
        }

        for (Group* group : _groups)
            group->writeForeachSource(out);
    }

    Group* Group::replicate(const String& newName) const
    {
        return new Group(*this, newName);
    }

    bool Group::canHaveVisitors()
    {
        bool res = !_elements.empty();
        if (!res)
            res = !_singleReturns.empty();

        if (!res)
        {
            for (Group* group : _groups)
            {
                res = group->canHaveVisitors();
                if (res)
                    break;
            }
        }
        return res;
    }

    void Group::writeVisitElement(OStream& out)
    {
        for (const Element& element : _elements)
        {
            if (element.isUnbounded)
            {
                String dest;
                Resources::Resource::getVisitElementDecl(dest);

                StringUtils::replaceAll(dest, dest, "${type}", element.genType);
                StringUtils::replaceAll(dest, dest, "${name}", element.genName);
                StringUtils::replaceAll(dest, dest, "${searchTerm}", element.searchTerm);
                out << dest;
            }
        }

        for (const Element& element : _singleReturns)
        {
            String dest;
            Resources::Resource::getVisitElementDecl(dest);

            StringUtils::replaceAll(dest, dest, "${type}", element.genType);
            StringUtils::replaceAll(dest, dest, "${name}", element.genName);
            StringUtils::replaceAll(dest, dest, "${searchTerm}", element.searchTerm);
            out << dest;
        }

        for (const Element& element : _textReturns)
        {
            String dest;
            Resources::Resource::getVisitTextDecl(dest);
            StringUtils::replaceAll(dest, dest, "${name}", element.genName);
            StringUtils::replaceAll(dest, dest, "${searchTerm}", element.searchTerm);
            out << dest;
        }

        for (Group* group : _groups)
            group->writeVisitElement(out);
    }

    void Group::writeVisitElementSource(OStream& out)
    {
        OutputStringStream select;
        writeVisitElementItems(select);

        String dest;
        Resources::Resource::getVisitElementSource(dest);

        StringUtils::replaceAll(dest, dest, "${className}", _name);
        StringUtils::replaceAll(dest, dest, "${select}", select.str());
        out << dest;
    }

    void Group::writeVisitElementItem(OStream& out, Element& el)
    {
        text(out, 0x0C, "case ", el.typeCode, ":");
        text(out, 0x10, "visitor->visited", el.genName, "(", el.genType, "(obj));");
        text(out, 0x10, "break;");
    }

    void Group::writeVisitElementItemText(OStream& out, Element& el)
    {
        text(out, 0x0C, "case ", el.typeCode, ":");
        text(out, 0x10, "visitor->visited", el.genName, "(obj->text());");
        text(out, 0x10, "break;");
    }

    void Group::writeVisitElementItems(OStream& out)
    {
        for (auto& element : _elements)
            writeVisitElementItem(out, element);
        for (auto& element : _singleReturns)
            writeVisitElementItem(out, element);
        for (auto& element : _textReturns)
            writeVisitElementItemText(out, element);

        for (Group* group : _groups)
            group->writeVisitElementItems(out);
    }

    void Group::writeHeader(OStream& out)
    {
        OutputStringStream inc, visit, xmlCode, tmp, swapCode;

        for (const auto& [key, value] : _dependentHeaderTypes)
            text(inc, 0x00, "#include \"", value, ".h\"");

        if (canHaveVisitors())
        {
            OutputStringStream decl;
            String             dest;
            Resources::Resource::getVisitHeader(dest);
            writeVisitElement(decl);

            StringUtils::replaceAll(dest, dest, "${className}", _name);
            StringUtils::replaceAll(dest, dest, "${visitors}", decl.str());
            visit << dest;
        }

        Xml::Writer w(_node);
        w.setIndent(0x02);
        w.setWriteXml(false);
        w.write(tmp);

        StringArray lines;
        StringUtils::split(lines, tmp.str(), '\n');
        for (auto& line : lines)
            text(xmlCode, 0x05, "* ", line);

        if (canHaveVisitors())
        {
            text(swapCode, 0x08, "void visit(Visitors::", _name, "Visitor *) const;");
            newLine(swapCode, 1);
        }
        writeStringGettersHeader(swapCode);
        writeForeachHeader(swapCode);

        String header;
        Resources::Resource::getHeader(header);

        StringUtils::replaceAll(header, header, "${tagName}", _tagType);
        StringUtils::replaceAll(header, header, "${className}", _name);
        StringUtils::replaceAll(header, header, "${includes}", inc.str());
        StringUtils::replaceAll(header, header, "${visitor}", visit.str());
        StringUtils::replaceAll(header, header, "${xmlSource}", xmlCode.str());
        StringUtils::replaceAll(header, header, "${xmlSource}", xmlCode.str());
        StringUtils::replaceAll(header, header, "${swapCode}", swapCode.str());

        out << header;
    }

    void Group::writeSource(OStream& out)
    {
        OutputStringStream inc, swap;
        for (const auto& [key, value] : _dependentTypes)
            text(inc, 0x00, "#include \"", value, ".h\"");

        if (canHaveVisitors())
            writeVisitElementSource(swap);

        writeStringGettersSource(swap);
        writeForeachSource(swap);

        String source;
        Resources::Resource::getSource(source);
        StringUtils::replaceAll(source, source, "${swapCode}", swap.str());
        StringUtils::replaceAll(source, source, "${includes}", inc.str());
        StringUtils::replaceAll(source, source, "${className}", _name);

        out << source;
    }

}  // namespace MdDox::GenApi
