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
     * \brief Provides methods for creating URL hash fragments.
     */
    namespace HashUtils
    {
        /**
         * \brief Constructs a line fragment.
         *
    	 * Returns a string formatted as: \c \# \c L \c line
         */
        extern String lineNumber(const uint32_t& line);

        /**
         * \brief Constructs a heading fragment.
         *
         * Returns a string formatted as: \c \# \c title
         * <br/>
         * Where title is sanitized with cleanTitle.
         */
        extern String heading(const String& title);

        /**
         * \brief Cleans the supplied title.
         * 
         * Removes all binary resolution operators.
         * Replaces white space and path separators with a dash.
         * Converts the string to lowercase.
         */
        extern String cleanTitle(const String& title);

        /**
         * \brief Constructs a heading fragment.
         *
         * Returns a string formatted as: \c \# \c id
         * <br/>
         * Assumes that id points to an anchor somewhere in the current document.
         */
        extern String anchor(const String& id);

    }  // namespace HashUtils

}  // namespace MdDox
