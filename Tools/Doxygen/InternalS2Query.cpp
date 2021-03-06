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
#include "InternalS2Query.h"
#include "TypeFilter/DoxygenFilter.h"

#include "Sect3Query.h"
#include "ParaQuery.h"

namespace MdDox::Doxygen
{
    void InternalS2Query::visit(Visitors::InternalS2QueryVisitor *visitor) const
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
            default:
                break;
            }
        }
    }
    void InternalS2Query::foreachParagraph(const ParaQueryFunction& invoke) const
    {
        QueryForEach<ParaQuery, 68>(invoke, _node);
    }

    void InternalS2Query::foreachSect3(const Sect3QueryFunction& invoke) const
    {
        QueryForEach<Sect3Query, 92>(invoke, _node);
    }


} // namespace MdDox::Doxygen
