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
#include "TableQuery.h"
#include "TypeFilter/DoxygenFilter.h"

#include "CaptionQuery.h"

namespace MdDox::Doxygen
{
    void TableQuery::visit(Visitors::TableQueryVisitor *visitor) const
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

            case 8:
                visitor->visitedCaption(CaptionQuery(obj));
                break;        
            default:
                break;
            }
        }
    }
    int64_t TableQuery::getRows(int64_t def) const
    {
        return _node ? _node->integer("rows") : def;
    }

    int64_t TableQuery::getCols(int64_t def) const
    {
        return _node ? _node->integer("cols") : def;
    }

	void TableQuery::getCaption(CaptionQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(8);
			if (node)
				dest = CaptionQuery(node);
			else
				dest.reset();
		}
	}

	CaptionQuery TableQuery::getCaption() const
	{
		CaptionQuery dest;
		getCaption(dest);
		return dest;
	}


} // namespace MdDox::Doxygen
