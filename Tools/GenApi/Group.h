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
#pragma once

#include "Object.h"
#include "Types.h"
#include "Utils/String.h"
#include "Xml/Node.h"

namespace MdDox
{
    class PathUtil;
}

namespace MdDox::GenApi
{
    class Group;
    using ElementArray   = std::vector<Element>;
    using AttributeArray = std::vector<Attribute>;
    using GroupArray     = std::vector<Group*>;
    using AttributeMap   = std::unordered_map<String, Attribute>;

    class Group : public Object
    {
    protected:
        Xml::Node* _node;
        String     _tagType;
        
        AttributeMap _stringAttributes;
        AttributeMap _integerAttributes;
        AttributeMap _enumAttributes;
        StringMap    _dependentTypes;
        StringMap    _dependentHeaderTypes;

        ElementArray _textReturns;
        ElementArray _singleReturns;
        ElementArray _elements;
        GroupArray   _groups;

        bool _first{true};
        bool _foreach{true};

        bool canHaveVisitors();

        void writeVisitElement(OStream& out);

        void writeHeader(OStream& out);

        void writeVisitElementSource(OStream& out);

        void writeVisitElementItem(OStream& out, Element& el);

    	void writeVisitElementItemText(OStream& out, Element& el);
    
        void writeVisitElementItems(OStream& out);

        void writeSource(OStream& out);

        void writeStringGettersHeader(OStream& out);
        
        void writeStringGettersSource(OStream& out);

        void writeForeachHeader(OStream& out);

        void writeForeachSource(OStream& out);

        Group* replicate(const String& newName) const;

    public:
        Group(Xml::Node* node, String name, String type);
        Group(const Group& group, String name);
        ~Group() override;

        void setForeach(bool v);

        void addStringAttribute(const Attribute& attr);

        void addIntegerAttribute(const Attribute& attr);

        void addElement(const Element& element);

        void addStringTextElement(const Element& name);

        void addSingleElement(const Element& element);

        void addGroup(Group* group);

        void addEnumAttribute(const Attribute& attr);
    };

}  // namespace MdDox::DoxApi
