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
#include "Sect1Query.h"
#include "TypeFilter/DoxygenFilter.h"

#include "ParaQuery.h"
#include "InternalS1Query.h"
#include "Sect2Query.h"

namespace MdDox::Doxygen
{
    void Sect1Query::visit(Visitors::Sect1QueryVisitor *visitor) const
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
            case 91:
                visitor->visitedSect2(Sect2Query(obj));
                break;
            case 52:
                visitor->visitedInternal(InternalS1Query(obj));
                break;
            case 103:
                visitor->visitedTitle(obj->text());
                break;        
            default:
                break;
            }
        }
    }
    const String& Sect1Query::getId(const String& notFound) const
    {
        if (_node)
            return _node->attribute("id", notFound);
        return notFound;
    }

    const String& Sect1Query::getTitle(const String& notFound) const
    {
        if (_node) {
            Xml::Node *node = _node->firstChildOf(103);
            if (node)
                return node->text();
        }
        return notFound;
    }

	void Sect1Query::getInternal(InternalS1Query &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(52);
			if (node)
				dest = InternalS1Query(node);
			else
				dest.reset();
		}
	}

	InternalS1Query Sect1Query::getInternal() const
	{
		InternalS1Query dest;
		getInternal(dest);
		return dest;
	}

    void Sect1Query::foreachParagraph(const ParaQueryFunction& invoke) const
    {
        QueryForEach<ParaQuery, 68>(invoke, _node);
    }
    void Sect1Query::foreachSect2(const Sect2QueryFunction& invoke) const
    {
        QueryForEach<Sect2Query, 91>(invoke, _node);
    }


    const String& Sect1Query::text(const String &def) const
    {
        return _node ? _node->text() : def;
    }
    
    void Sect1Query::sort(const SortMap& childOrder) const
    {
        if (_node) {
            _node->sort(
                [childOrder](Xml::Node *a, Xml::Node* b){
                    // This gives unmapped sections a higher index so that
                    // they are pushed to the end.
                    int va = 100000;
                    int vb = 100000;

                    const SortMap::const_iterator findA = childOrder.find((int)a->getTypeCode());
                    if (findA != childOrder.end())
                        va = findA->second;

                    const SortMap::const_iterator findB = childOrder.find((int)b->getTypeCode());
                    if (findB != childOrder.end())
                        vb = findB->second;
                    // sort less
                    return va < vb;
            });
        }
    }

} // namespace MdDox::Doxygen
