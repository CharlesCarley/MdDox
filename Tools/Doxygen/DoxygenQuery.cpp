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
#include "DoxygenQuery.h"
#include "TypeFilter/DoxygenFilter.h"

#include "CompoundDefQuery.h"

namespace MdDox::Doxygen
{
    void DoxygenQuery::visit(Visitors::DoxygenQueryVisitor *visitor) const
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

            case 13:
                visitor->visitedCompoundDef(CompoundDefQuery(obj));
                break;        
            default:
                break;
            }
        }
    }
	DoxVersionNumberEnum DoxygenQuery::getVersion() const
	{
		if (_node)
			return (DoxVersionNumberEnum)DoxVersionNumber::get(_node->attribute("version"));
		return (DoxVersionNumberEnum)-1; 
	}

    void DoxygenQuery::foreachCompoundDef(const CompoundDefQueryFunction& invoke) const
    {
        QueryForEach<CompoundDefQuery, 13>(invoke, _node);
    }


} // namespace MdDox::Doxygen
