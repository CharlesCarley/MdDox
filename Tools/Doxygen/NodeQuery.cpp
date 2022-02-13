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
#include "NodeQuery.h"
#include "TypeFilter/DoxygenFilter.h"

#include "LinkQuery.h"
#include "ChildNodeQuery.h"

namespace MdDox::Doxygen
{
    void NodeQuery::visit(Visitors::NodeQueryVisitor *visitor) const
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

            case 10:
                visitor->visitedChildNode(ChildNodeQuery(obj));
                break;
            case 59:
                visitor->visitedLink(LinkQuery(obj));
                break;
            case 55:
                visitor->visitedLabel(obj->text());
                break;        
            default:
                break;
            }
        }
    }
    const String& NodeQuery::getId(const String& notFound) const
    {
        if (_node)
            return _node->attribute("id", notFound);
        return notFound;
    }

    const String& NodeQuery::getLabel(const String& notFound) const
    {
        if (_node) {
            Xml::Node *node = _node->firstChildOf(55);
            if (node)
                return node->text();
        }
        return notFound;
    }

	void NodeQuery::getLink(LinkQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(59);
			if (node)
				dest = LinkQuery(node);
			else
				dest.reset();
		}
	}

	LinkQuery NodeQuery::getLink() const
	{
		LinkQuery dest;
		getLink(dest);
		return dest;
	}

    void NodeQuery::foreachChildNode(const ChildNodeQueryFunction& invoke) const
    {
        QueryForEach<ChildNodeQuery, 10>(invoke, _node);
    }


    const String& NodeQuery::text(const String &def) const
    {
        return _node ? _node->text() : def;
    }
    
    void NodeQuery::sort(const SortMap& childOrder) const
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
