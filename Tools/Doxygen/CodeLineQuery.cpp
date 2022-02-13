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
#include "CodeLineQuery.h"
#include "TypeFilter/DoxygenFilter.h"

#include "HighlightQuery.h"

namespace MdDox::Doxygen
{
    void CodeLineQuery::visit(Visitors::CodeLineQueryVisitor *visitor) const
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

            case 35:
                visitor->visitedHighlight(HighlightQuery(obj));
                break;        
            default:
                break;
            }
        }
    }
    const String& CodeLineQuery::getRefId(const String& notFound) const
    {
        if (_node)
            return _node->attribute("refid", notFound);
        return notFound;
    }

    int64_t CodeLineQuery::getLineNo(int64_t def) const
    {
        return _node ? _node->integer("lineno") : def;
    }

	DoxRefKindEnum CodeLineQuery::getRefKind() const
	{
		if (_node)
			return (DoxRefKindEnum)DoxRefKind::get(_node->attribute("refkind"));
		return (DoxRefKindEnum)-1; 
	}

	DoxBoolEnum CodeLineQuery::getExternal() const
	{
		if (_node)
			return (DoxBoolEnum)DoxBool::get(_node->attribute("external"));
		return (DoxBoolEnum)-1; 
	}

    void CodeLineQuery::foreachHighlight(const HighlightQueryFunction& invoke) const
    {
        QueryForEach<HighlightQuery, 35>(invoke, _node);
    }


    const String& CodeLineQuery::text(const String &def) const
    {
        return _node ? _node->text() : def;
    }
    
    void CodeLineQuery::sort(const SortMap& childOrder) const
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
