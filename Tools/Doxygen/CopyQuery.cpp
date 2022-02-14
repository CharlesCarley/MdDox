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
#include "CopyQuery.h"
#include "TypeFilter/DoxygenFilter.h"

#include "ParaQuery.h"
#include "Sect1Query.h"
#include "InternalQuery.h"

namespace MdDox::Doxygen
{
    void CopyQuery::visit(Visitors::CopyQueryVisitor *visitor) const
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
            case 90:
                visitor->visitedSect1(Sect1Query(obj));
                break;
            case 52:
                visitor->visitedInternal(InternalQuery(obj));
                break;        
            default:
                break;
            }
        }
    }
    const String& CopyQuery::getLink(const String& notFound) const
    {
        if (_node)
            return _node->attribute("link", notFound);
        return notFound;
    }

	void CopyQuery::getInternal(InternalQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(52);
			if (node)
				dest = InternalQuery(node);
			else
				dest.reset();
		}
	}

	InternalQuery CopyQuery::getInternal() const
	{
		InternalQuery dest;
		getInternal(dest);
		return dest;
	}

    void CopyQuery::foreachParagraph(const ParaQueryFunction& invoke) const
    {
        QueryForEach<ParaQuery, 68>(invoke, _node);
    }

    void CopyQuery::foreachSect1(const Sect1QueryFunction& invoke) const
    {
        QueryForEach<Sect1Query, 90>(invoke, _node);
    }


} // namespace MdDox::Doxygen
