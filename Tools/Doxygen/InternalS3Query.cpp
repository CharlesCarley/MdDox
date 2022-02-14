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
#include "InternalS3Query.h"
#include "TypeFilter/DoxygenFilter.h"

#include "ParaQuery.h"
#include "Sect4Query.h"

namespace MdDox::Doxygen
{
    void InternalS3Query::visit(Visitors::InternalS3QueryVisitor *visitor) const
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
                visitor->visitedSect3(Sect4Query(obj));
                break;        
            default:
                break;
            }
        }
    }
    void InternalS3Query::foreachParagraph(const ParaQueryFunction& invoke) const
    {
        QueryForEach<ParaQuery, 68>(invoke, _node);
    }

    void InternalS3Query::foreachSect3(const Sect4QueryFunction& invoke) const
    {
        QueryForEach<Sect4Query, 92>(invoke, _node);
    }


} // namespace MdDox::Doxygen
