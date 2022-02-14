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
#include "Sect3Query.h"
#include "TypeFilter/DoxygenFilter.h"

#include "ParaQuery.h"
#include "Sect4Query.h"
#include "InternalS3Query.h"

namespace MdDox::Doxygen
{
    void Sect3Query::visit(Visitors::Sect3QueryVisitor *visitor) const
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
            case 93:
                visitor->visitedSect4(Sect4Query(obj));
                break;
            case 52:
                visitor->visitedInternal(InternalS3Query(obj));
                break;
            case 103:
                visitor->visitedTitle(obj->text());
                break;        
            default:
                break;
            }
        }
    }
    const String& Sect3Query::getId(const String& notFound) const
    {
        if (_node)
            return _node->attribute("id", notFound);
        return notFound;
    }

    const String& Sect3Query::getTitle(const String& notFound) const
    {
        if (_node) {
            Xml::Node *node = _node->firstChildOf(103);
            if (node) return node->text();
        }
        return notFound;
    }

	void Sect3Query::getInternal(InternalS3Query &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(52);
			if (node)
				dest = InternalS3Query(node);
			else
				dest.reset();
		}
	}

	InternalS3Query Sect3Query::getInternal() const
	{
		InternalS3Query dest;
		getInternal(dest);
		return dest;
	}

    void Sect3Query::foreachParagraph(const ParaQueryFunction& invoke) const
    {
        QueryForEach<ParaQuery, 68>(invoke, _node);
    }

    void Sect3Query::foreachSect4(const Sect4QueryFunction& invoke) const
    {
        QueryForEach<Sect4Query, 93>(invoke, _node);
    }


} // namespace MdDox::Doxygen
