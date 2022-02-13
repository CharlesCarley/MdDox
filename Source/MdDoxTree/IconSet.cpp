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

#include "IconSet.h"

namespace MdDox
{
    String IconSet::fileName(const IconId id)
    {
        switch (id)
        {
        case ICO_BACK:
            return "back18px.svg";
        case ICO_DEBUG:
            return "debug24px.svg";
        case ICO_FILE:
            return "file24px.svg";
        case ICO_FOLDER:
            return "folder18px.svg";
        case ICO_HOME:
            return "home18px.svg";
        case ICO_H_SPACE_12:
            return "horSpace12px.svg";
        case ICO_H_SPACE_24:
            return "horSpace24px.svg";
        case ICO_JUMP_TO_TOP:
            return "jumpToTop18px.svg";
        case ICO_LINK:
            return "link24px.svg";
        case ICO_LINK_SM:
            return "link18px.svg";
        case ICO_CODE_BEHIND:
            return "lookInside24px.svg";
        case ICO_ENUM:
            return "enum24px.svg";
        case ICO_ISO_BAR:
            return "sideBar.svg";
        case ICO_SEP_BAR:
            return "sectionBar.svg";
        case ICO_CLASS:
            return "class24px.svg";
        case ICO_VAR_PRIVATE:
            return "var24px.svg";
        case ICO_NAMESPACE:
            return "namespace24px.svg";
        case ICO_NONE:
        default:
            return "error18.svg";
        }
    }

}  // namespace MdDox
