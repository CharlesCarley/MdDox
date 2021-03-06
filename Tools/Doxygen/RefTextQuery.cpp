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
#include "RefTextQuery.h"
#include "TypeFilter/DoxygenFilter.h"


namespace MdDox::Doxygen
{
    const String& RefTextQuery::getRefId(const String& notFound) const
    {
        if (_node)
            return _node->attribute("refid", notFound);
        return notFound;
    }

    const String& RefTextQuery::getExternal(const String& notFound) const
    {
        if (_node)
            return _node->attribute("external", notFound);
        return notFound;
    }

    const String& RefTextQuery::getTooltip(const String& notFound) const
    {
        if (_node)
            return _node->attribute("tooltip", notFound);
        return notFound;
    }

	DoxRefKindEnum RefTextQuery::getKindRef() const
	{
		if (_node)
			return (DoxRefKindEnum)DoxRefKind::get(_node->attribute("kindref"));
		return (DoxRefKindEnum)-1; 
	}


} // namespace MdDox::Doxygen
