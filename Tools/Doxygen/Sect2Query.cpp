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
#include "Sect2Query.h"
#include "TypeFilter/DoxygenFilter.h"

#include "Sect3Query.h"
#include "ParaQuery.h"
#include "InternalS2Query.h"

namespace MdDox::Doxygen
{
    void Sect2Query::visit(Visitors::Sect2QueryVisitor *visitor) const
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
            case 92:
                visitor->visitedSect3(Sect3Query(obj));
                break;
            case 52:
                visitor->visitedInternal(InternalS2Query(obj));
                break;
            case 103:
                visitor->visitedTitle(obj->text());
                break;        
            default:
                break;
            }
        }
    }
    const String& Sect2Query::getId(const String& notFound) const
    {
        if (_node)
            return _node->attribute("id", notFound);
        return notFound;
    }

    const String& Sect2Query::getTitle(const String& notFound) const
    {
        if (_node) {
            Xml::Node *node = _node->firstChildOf(103);
            if (node) return node->text();
        }
        return notFound;
    }

	void Sect2Query::getInternal(InternalS2Query &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(52);
			if (node)
				dest = InternalS2Query(node);
			else
				dest.reset();
		}
	}

	InternalS2Query Sect2Query::getInternal() const
	{
		InternalS2Query dest;
		getInternal(dest);
		return dest;
	}

    void Sect2Query::foreachParagraph(const ParaQueryFunction& invoke) const
    {
        QueryForEach<ParaQuery, 68>(invoke, _node);
    }

    void Sect2Query::foreachSect3(const Sect3QueryFunction& invoke) const
    {
        QueryForEach<Sect3Query, 92>(invoke, _node);
    }


} // namespace MdDox::Doxygen
