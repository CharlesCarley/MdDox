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
#include "TocListQuery.h"
#include "TypeFilter/DoxygenFilter.h"

#include "TocItemQuery.h"

namespace MdDox::Doxygen
{
    void TocListQuery::visit(Visitors::TocListQueryVisitor *visitor) const
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

            case 100:
                visitor->visitedTocItem(TocItemQuery(obj));
                break;        
            default:
                break;
            }
        }
    }
    void TocListQuery::foreachTocItem(const TocItemQueryFunction& invoke) const
    {
        QueryForEach<TocItemQuery, 100>(invoke, _node);
    }


    const String& TocListQuery::text(const String &def) const
    {
        return _node ? _node->text() : def;
    }
    
    void TocListQuery::sort(const SortMap& childOrder) const
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