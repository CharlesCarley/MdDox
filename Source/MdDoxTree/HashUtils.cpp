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
#include "MdDoxTree/HashUtils.h"

namespace MdDox::HashUtils
{
    String lineNumber(const uint32_t& line)
    {
        return StringCombine("#L", std::max<uint32_t>(1, line));
    }

    String heading(const String& title)
    {
        return StringCombine("#", cleanTitle(title));
    }

    String cleanTitle(const String& title)
    {
        StringArray lbr;
        StringUtils::split(lbr, title, "::");


        String headingTitle;
        if (!lbr.empty())
            headingTitle = lbr.back();
        else
            headingTitle = title;

        StringUtils::replaceAll(headingTitle, headingTitle, " ", "-");
        StringUtils::replaceAll(headingTitle, headingTitle, "/", "-");
        StringUtils::replaceAll(headingTitle, headingTitle, "\\", "-");
        StringUtils::toLower(headingTitle, headingTitle);
        return headingTitle;
    }

    String anchor(const String& id)
    {
        return StringCombine("#", id);
    }

}  // namespace MdDox::HashUtils
