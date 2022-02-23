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
#include "MdDoxTree/ReferenceIdentifiers.h"
#include "SiteBuilder.h"

namespace MdDox
{
    CompoundReference* MemberReference::findParent() const
    {
        const SiteBuilder& builder = SiteBuilder::get();

        CompoundReference* pref;

        const size_t pos = _ref.find_last_of('_');
        if (pos != String::npos)
            pref = builder.getCompoundRef(_ref.substr(0, pos));
        else
            pref = builder.getCompoundRef(_ref);

    	return pref;
    }

}  // namespace MdDox
