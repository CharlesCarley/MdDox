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
#pragma once
#include "Utils/String.h"

namespace MdDox
{
    /**
     * \brief internal icons to this system
     */
    enum IconId
    {
        ICO_NONE,
        ICO_BACK,
        ICO_DEBUG,
        ICO_FILE,
        ICO_FOLDER,
        ICO_HOME,
        ICO_H_SPACE_12,
        ICO_H_SPACE_24,
        ICO_JUMP_TO_TOP,
        ICO_LINK,
        ICO_LINK_SM,
        ICO_CODE_BEHIND,
        ICO_ISO_BAR,
        ICO_CLASS,
        ICO_ENUM,
        ICO_VAR_PRIVATE,
        ICO_NAMESPACE,
        ICO_SEP_BAR,
    };

    /**
     * \brief Is a static class to access predefined navigation icons
     *
     * \see \ref Image
     */
    class IconSet
    {
    public:
        /**
         * \brief Provides access to the icon associated with the supplied id.
         * \param id should be one of the IconIds values
         * \return The base file name of the requested on success or the error icon file name
         * if the id is not handled or one of IconIds values
         */
        static String fileName(IconId id);
    };


}  // namespace MdDoc
