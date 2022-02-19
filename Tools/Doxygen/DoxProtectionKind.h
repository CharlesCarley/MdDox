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
     * The following xml provides the <b>DoxProtectionKind</b> declaration.
     *
     *
     * \code{.xml}
     *  <xsd:simpleType name="DoxProtectionKind">
     *    <xsd:restriction base="xsd:string">
     *      <xsd:enumeration value="public"/>
     *      <xsd:enumeration value="protected"/>
     *      <xsd:enumeration value="private"/>
     *      <xsd:enumeration value="package"/>
     *    </xsd:restriction>
     *  </xsd:simpleType>
     * \endcode
     */
    enum DoxProtectionKindEnum
    {
        DPK_INVALID=-1,
        /**
         * \brief Definition for the <tt>DoxProtectionKind.public</tt> value.
         */
        DPK_PUBLIC,
        /**
         * \brief Definition for the <tt>DoxProtectionKind.protected</tt> value.
         */
        DPK_PROTECTED,
        /**
         * \brief Definition for the <tt>DoxProtectionKind.private</tt> value.
         */
        DPK_PRIVATE,
        /**
         * \brief Definition for the <tt>DoxProtectionKind.package</tt> value.
         */
        DPK_PACKAGE,
        DPK_MAX
    };

    class DoxProtectionKind
    {
    public:
        static DoxProtectionKindEnum get(const String &);
    };
} // namespace MdDox::Doxygen