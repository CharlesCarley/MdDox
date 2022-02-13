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
     * The following xml provides the <b>DoxSectionKind</b> declaration.
     *
     *
     * \code{.xml}
     *  <xsd:simpleType name="DoxSectionKind">
     *    <xsd:restriction base="xsd:string">
     *      <xsd:enumeration value="user-defined"/>
     *      <xsd:enumeration value="public-type"/>
     *      <xsd:enumeration value="public-func"/>
     *      <xsd:enumeration value="public-attrib"/>
     *      <xsd:enumeration value="public-slot"/>
     *      <xsd:enumeration value="signal"/>
     *      <xsd:enumeration value="dcop-func"/>
     *      <xsd:enumeration value="property"/>
     *      <xsd:enumeration value="event"/>
     *      <xsd:enumeration value="public-static-func"/>
     *      <xsd:enumeration value="public-static-attrib"/>
     *      <xsd:enumeration value="protected-type"/>
     *      <xsd:enumeration value="protected-func"/>
     *      <xsd:enumeration value="protected-attrib"/>
     *      <xsd:enumeration value="protected-slot"/>
     *      <xsd:enumeration value="protected-static-func"/>
     *      <xsd:enumeration value="protected-static-attrib"/>
     *      <xsd:enumeration value="package-type"/>
     *      <xsd:enumeration value="package-func"/>
     *      <xsd:enumeration value="package-attrib"/>
     *      <xsd:enumeration value="package-static-func"/>
     *      <xsd:enumeration value="package-static-attrib"/>
     *      <xsd:enumeration value="private-type"/>
     *      <xsd:enumeration value="private-func"/>
     *      <xsd:enumeration value="private-attrib"/>
     *      <xsd:enumeration value="private-slot"/>
     *      <xsd:enumeration value="private-static-func"/>
     *      <xsd:enumeration value="private-static-attrib"/>
     *      <xsd:enumeration value="friend"/>
     *      <xsd:enumeration value="related"/>
     *      <xsd:enumeration value="define"/>
     *      <xsd:enumeration value="prototype"/>
     *      <xsd:enumeration value="typedef"/>
     *      <xsd:enumeration value="enum"/>
     *      <xsd:enumeration value="func"/>
     *      <xsd:enumeration value="var"/>
     *    </xsd:restriction>
     *  </xsd:simpleType>
     * \endcode
     */
    enum DoxSectionKindEnum
    {
        DSK_INVALID=-1,
        /**
         * \brief Definition for the <tt>DoxSectionKind.private-static-func</tt> value.
         */
        DSK_PRIVATE_STATIC_FUNC,
        /**
         * \brief Definition for the <tt>DoxSectionKind.user-defined</tt> value.
         */
        DSK_USER_DEFINED,
        /**
         * \brief Definition for the <tt>DoxSectionKind.public-type</tt> value.
         */
        DSK_PUBLIC_TYPE,
        /**
         * \brief Definition for the <tt>DoxSectionKind.package-static-func</tt> value.
         */
        DSK_PACKAGE_STATIC_FUNC,
        /**
         * \brief Definition for the <tt>DoxSectionKind.public-func</tt> value.
         */
        DSK_PUBLIC_FUNC,
        /**
         * \brief Definition for the <tt>DoxSectionKind.public-slot</tt> value.
         */
        DSK_PUBLIC_SLOT,
        /**
         * \brief Definition for the <tt>DoxSectionKind.package-static-attrib</tt> value.
         */
        DSK_PACKAGE_STATIC_ATTRIB,
        /**
         * \brief Definition for the <tt>DoxSectionKind.protected-static-func</tt> value.
         */
        DSK_PROTECTED_STATIC_FUNC,
        /**
         * \brief Definition for the <tt>DoxSectionKind.public-attrib</tt> value.
         */
        DSK_PUBLIC_ATTRIB,
        /**
         * \brief Definition for the <tt>DoxSectionKind.signal</tt> value.
         */
        DSK_SIGNAL,
        /**
         * \brief Definition for the <tt>DoxSectionKind.property</tt> value.
         */
        DSK_PROPERTY,
        /**
         * \brief Definition for the <tt>DoxSectionKind.dcop-func</tt> value.
         */
        DSK_DCOP_FUNC,
        /**
         * \brief Definition for the <tt>DoxSectionKind.private-slot</tt> value.
         */
        DSK_PRIVATE_SLOT,
        /**
         * \brief Definition for the <tt>DoxSectionKind.event</tt> value.
         */
        DSK_EVENT,
        /**
         * \brief Definition for the <tt>DoxSectionKind.public-static-func</tt> value.
         */
        DSK_PUBLIC_STATIC_FUNC,
        /**
         * \brief Definition for the <tt>DoxSectionKind.typedef</tt> value.
         */
        DSK_TYPEDEF,
        /**
         * \brief Definition for the <tt>DoxSectionKind.package-func</tt> value.
         */
        DSK_PACKAGE_FUNC,
        /**
         * \brief Definition for the <tt>DoxSectionKind.public-static-attrib</tt> value.
         */
        DSK_PUBLIC_STATIC_ATTRIB,
        /**
         * \brief Definition for the <tt>DoxSectionKind.related</tt> value.
         */
        DSK_RELATED,
        /**
         * \brief Definition for the <tt>DoxSectionKind.protected-type</tt> value.
         */
        DSK_PROTECTED_TYPE,
        /**
         * \brief Definition for the <tt>DoxSectionKind.protected-func</tt> value.
         */
        DSK_PROTECTED_FUNC,
        /**
         * \brief Definition for the <tt>DoxSectionKind.protected-attrib</tt> value.
         */
        DSK_PROTECTED_ATTRIB,
        /**
         * \brief Definition for the <tt>DoxSectionKind.protected-slot</tt> value.
         */
        DSK_PROTECTED_SLOT,
        /**
         * \brief Definition for the <tt>DoxSectionKind.protected-static-attrib</tt> value.
         */
        DSK_PROTECTED_STATIC_ATTRIB,
        /**
         * \brief Definition for the <tt>DoxSectionKind.define</tt> value.
         */
        DSK_DEFINE,
        /**
         * \brief Definition for the <tt>DoxSectionKind.package-type</tt> value.
         */
        DSK_PACKAGE_TYPE,
        /**
         * \brief Definition for the <tt>DoxSectionKind.package-attrib</tt> value.
         */
        DSK_PACKAGE_ATTRIB,
        /**
         * \brief Definition for the <tt>DoxSectionKind.private-type</tt> value.
         */
        DSK_PRIVATE_TYPE,
        /**
         * \brief Definition for the <tt>DoxSectionKind.private-func</tt> value.
         */
        DSK_PRIVATE_FUNC,
        /**
         * \brief Definition for the <tt>DoxSectionKind.func</tt> value.
         */
        DSK_FUNC,
        /**
         * \brief Definition for the <tt>DoxSectionKind.private-attrib</tt> value.
         */
        DSK_PRIVATE_ATTRIB,
        /**
         * \brief Definition for the <tt>DoxSectionKind.private-static-attrib</tt> value.
         */
        DSK_PRIVATE_STATIC_ATTRIB,
        /**
         * \brief Definition for the <tt>DoxSectionKind.friend</tt> value.
         */
        DSK_FRIEND,
        /**
         * \brief Definition for the <tt>DoxSectionKind.prototype</tt> value.
         */
        DSK_PROTOTYPE,
        /**
         * \brief Definition for the <tt>DoxSectionKind.enum</tt> value.
         */
        DSK_ENUM,
        /**
         * \brief Definition for the <tt>DoxSectionKind.var</tt> value.
         */
        DSK_VAR,
    };

    class DoxSectionKind
    {
    public:
        static DoxSectionKindEnum get(const String &);
    };
} // namespace MdDox::Doxygen