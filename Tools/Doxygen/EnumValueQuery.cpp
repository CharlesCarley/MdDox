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
#include "EnumValueQuery.h"
#include "TypeFilter/DoxygenFilter.h"

#include "LinkedTextQuery.h"
#include "DescriptionQuery.h"

namespace MdDox::Doxygen
{
    void EnumValueQuery::visit(Visitors::EnumValueQueryVisitor *visitor) const
    {
        if (!_node || !visitor)
            return;
        const Xml::NodeArray& objects = _node->children();
        for (Xml::Node* obj : objects) {
            switch (obj->getTypeCode()) {
            case DoxTextNode:
                if (obj->hasText())
                    visitor->visitedText(obj->text());
                break;

            case 44:
                visitor->visitedInitializer(LinkedTextQuery(obj));
                break;
            case 7:
                visitor->visitedBriefDescription(DescriptionQuery(obj));
                break;
            case 23:
                visitor->visitedDetailedDescription(DescriptionQuery(obj));
                break;
            case 65:
                visitor->visitedName(obj->text());
                break;        
            default:
                break;
            }
        }
    }
    const String& EnumValueQuery::getId(const String& notFound) const
    {
        if (_node)
            return _node->attribute("id", notFound);
        return notFound;
    }

	DoxProtectionKindEnum EnumValueQuery::getProt() const
	{
		if (_node)
			return (DoxProtectionKindEnum)DoxProtectionKind::get(_node->attribute("prot"));
		return (DoxProtectionKindEnum)-1; 
	}

    const String& EnumValueQuery::getName(const String& notFound) const
    {
        if (_node) {
            Xml::Node *node = _node->firstChildOf(65);
            if (node) return node->text();
        }
        return notFound;
    }

	void EnumValueQuery::getInitializer(LinkedTextQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(44);
			if (node)
				dest = LinkedTextQuery(node);
			else
				dest.reset();
		}
	}

	LinkedTextQuery EnumValueQuery::getInitializer() const
	{
		LinkedTextQuery dest;
		getInitializer(dest);
		return dest;
	}

	void EnumValueQuery::getBriefDescription(DescriptionQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(7);
			if (node)
				dest = DescriptionQuery(node);
			else
				dest.reset();
		}
	}

	DescriptionQuery EnumValueQuery::getBriefDescription() const
	{
		DescriptionQuery dest;
		getBriefDescription(dest);
		return dest;
	}

	void EnumValueQuery::getDetailedDescription(DescriptionQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(23);
			if (node)
				dest = DescriptionQuery(node);
			else
				dest.reset();
		}
	}

	DescriptionQuery EnumValueQuery::getDetailedDescription() const
	{
		DescriptionQuery dest;
		getDetailedDescription(dest);
		return dest;
	}


} // namespace MdDox::Doxygen
