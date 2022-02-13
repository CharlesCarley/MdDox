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
#include "ParamListItemQuery.h"
#include "TypeFilter/DoxygenFilter.h"

#include "ParamNameListQuery.h"
#include "DescriptionQuery.h"

namespace MdDox::Doxygen
{
    void ParamListItemQuery::visit(Visitors::ParamListItemQueryVisitor *visitor) const
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

            case 74:
                visitor->visitedParameterNameList(ParamNameListQuery(obj));
                break;
            case 70:
                visitor->visitedParameterDescription(DescriptionQuery(obj));
                break;        
            default:
                break;
            }
        }
    }
	void ParamListItemQuery::getParameterDescription(DescriptionQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(70);
			if (node)
				dest = DescriptionQuery(node);
			else
				dest.reset();
		}
	}

	DescriptionQuery ParamListItemQuery::getParameterDescription() const
	{
		DescriptionQuery dest;
		getParameterDescription(dest);
		return dest;
	}

    void ParamListItemQuery::foreachParameterNameList(const ParamNameListQueryFunction& invoke) const
    {
        QueryForEach<ParamNameListQuery, 74>(invoke, _node);
    }


    const String& ParamListItemQuery::text(const String &def) const
    {
        return _node ? _node->text() : def;
    }
    
    void ParamListItemQuery::sort(const SortMap& childOrder) const
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
