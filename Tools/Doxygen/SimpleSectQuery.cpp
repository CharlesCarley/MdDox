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
#include "SimpleSectQuery.h"
#include "TypeFilter/DoxygenFilter.h"

#include "TitleQuery.h"
#include "ParaQuery.h"

namespace MdDox::Doxygen
{
    void SimpleSectQuery::visit(Visitors::SimpleSectQueryVisitor *visitor) const
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

            case 68:
                visitor->visitedParagraph(ParaQuery(obj));
                break;
            case 103:
                visitor->visitedTitle(TitleQuery(obj));
                break;        
            default:
                break;
            }
        }
    }
	DoxSimpleSectKindEnum SimpleSectQuery::getKind() const
	{
		if (_node)
			return (DoxSimpleSectKindEnum)DoxSimpleSectKind::get(_node->attribute("kind"));
		return (DoxSimpleSectKindEnum)-1; 
	}

	void SimpleSectQuery::getTitle(TitleQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(103);
			if (node)
				dest = TitleQuery(node);
			else
				dest.reset();
		}
	}

	TitleQuery SimpleSectQuery::getTitle() const
	{
		TitleQuery dest;
		getTitle(dest);
		return dest;
	}

    void SimpleSectQuery::foreachParagraph(const ParaQueryFunction& invoke) const
    {
        QueryForEach<ParaQuery, 68>(invoke, _node);
    }


} // namespace MdDox::Doxygen
