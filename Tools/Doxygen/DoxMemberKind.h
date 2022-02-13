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
     * The following xml provides the <b>DoxMemberKind</b> declaration.
     *
     *
     * \code{.xml}
     *  <xsd:simpleType name="DoxMemberKind">
     *    <xsd:restriction base="xsd:string">
     *      <xsd:enumeration value="define"/>
     *      <xsd:enumeration value="property"/>
     *      <xsd:enumeration value="event"/>
     *      <xsd:enumeration value="variable"/>
     *      <xsd:enumeration value="typedef"/>
     *      <xsd:enumeration value="enum"/>
     *      <xsd:enumeration value="function"/>
     *      <xsd:enumeration value="signal"/>
     *      <xsd:enumeration value="prototype"/>
     *      <xsd:enumeration value="friend"/>
     *      <xsd:enumeration value="dcop"/>
     *      <xsd:enumeration value="slot"/>
     *      <xsd:enumeration value="interface"/>
     *      <xsd:enumeration value="service"/>
     *    </xsd:restriction>
     *  </xsd:simpleType>
     * \endcode
     */
    enum DoxMemberKindEnum
    {
        DMK_INVALID=-1,
        /**
         * \brief Definition for the <tt>DoxMemberKind.define</tt> value.
         */
        DMK_DEFINE,
        /**
         * \brief Definition for the <tt>DoxMemberKind.enum</tt> value.
         */
        DMK_ENUM,
        /**
         * \brief Definition for the <tt>DoxMemberKind.property</tt> value.
         */
        DMK_PROPERTY,
        /**
         * \brief Definition for the <tt>DoxMemberKind.event</tt> value.
         */
        DMK_EVENT,
        /**
         * \brief Definition for the <tt>DoxMemberKind.variable</tt> value.
         */
        DMK_VARIABLE,
        /**
         * \brief Definition for the <tt>DoxMemberKind.typedef</tt> value.
         */
        DMK_TYPEDEF,
        /**
         * \brief Definition for the <tt>DoxMemberKind.function</tt> value.
         */
        DMK_FUNCTION,
        /**
         * \brief Definition for the <tt>DoxMemberKind.signal</tt> value.
         */
        DMK_SIGNAL,
        /**
         * \brief Definition for the <tt>DoxMemberKind.prototype</tt> value.
         */
        DMK_PROTOTYPE,
        /**
         * \brief Definition for the <tt>DoxMemberKind.friend</tt> value.
         */
        DMK_FRIEND,
        /**
         * \brief Definition for the <tt>DoxMemberKind.dcop</tt> value.
         */
        DMK_DCOP,
        /**
         * \brief Definition for the <tt>DoxMemberKind.slot</tt> value.
         */
        DMK_SLOT,
        /**
         * \brief Definition for the <tt>DoxMemberKind.interface</tt> value.
         */
        DMK_INTERFACE,
        /**
         * \brief Definition for the <tt>DoxMemberKind.service</tt> value.
         */
        DMK_SERVICE,
    };

    class DoxMemberKind
    {
    public:
        static DoxMemberKindEnum get(const String &);
    };
} // namespace MdDox::Doxygen