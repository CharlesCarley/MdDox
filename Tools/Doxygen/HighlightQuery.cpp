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
#include "HighlightQuery.h"
#include "TypeFilter/DoxygenFilter.h"

#include "SpQuery.h"
#include "RefTextQuery.h"

namespace MdDox::Doxygen
{
    void HighlightQuery::visit(Visitors::HighlightQueryVisitor *visitor) const
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

            case 97:
                visitor->visitedSp(SpQuery(obj));
                break;
            case 82:
                visitor->visitedRef(RefTextQuery(obj));
                break;        
            default:
                break;
            }
        }
    }
	DoxHighlightClassEnum HighlightQuery::getClass() const
	{
		if (_node)
			return (DoxHighlightClassEnum)DoxHighlightClass::get(_node->attribute("class"));
		return (DoxHighlightClassEnum)-1; 
	}

	void HighlightQuery::getSp(SpQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(97);
			if (node)
				dest = SpQuery(node);
			else
				dest.reset();
		}
	}

	SpQuery HighlightQuery::getSp() const
	{
		SpQuery dest;
		getSp(dest);
		return dest;
	}

	void HighlightQuery::getRef(RefTextQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(82);
			if (node)
				dest = RefTextQuery(node);
			else
				dest.reset();
		}
	}

	RefTextQuery HighlightQuery::getRef() const
	{
		RefTextQuery dest;
		getRef(dest);
		return dest;
	}


} // namespace MdDox::Doxygen
