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
#include "Doxygen.h"


namespace MdDox::Doxygen
{
    /**
     * The following xml provides the <b>DoxVirtualKind</b> declaration.
     *
     *
     * \code{.xml}
     *  <xsd:simpleType name="DoxVirtualKind">
     *    <xsd:restriction base="xsd:string">
     *      <xsd:enumeration value="non-virtual"/>
     *      <xsd:enumeration value="virtual"/>
     *      <xsd:enumeration value="pure-virtual"/>
     *    </xsd:restriction>
     *  </xsd:simpleType>
     * \endcode
     */
    enum DoxVirtualKindEnum
    {
        DVK_INVALID=-1,
        /**
         * \brief Definition for the <tt>DoxVirtualKind.non-virtual</tt> value.
         */
        DVK_NON_VIRTUAL,
        /**
         * \brief Definition for the <tt>DoxVirtualKind.virtual</tt> value.
         */
        DVK_VIRTUAL,
        /**
         * \brief Definition for the <tt>DoxVirtualKind.pure-virtual</tt> value.
         */
        DVK_PURE_VIRTUAL,
    };

    class DoxVirtualKind
    {
    public:
        static DoxVirtualKindEnum get(const String &);
    };
} // namespace MdDox::Doxygen