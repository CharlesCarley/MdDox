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
     * The following xml provides the <b>DoxSimpleSectKind</b> declaration.
     *
     *
     * \code{.xml}
     *  <xsd:simpleType name="DoxSimpleSectKind">
     *    <xsd:restriction base="xsd:string">
     *      <xsd:enumeration value="see"/>
     *      <xsd:enumeration value="return"/>
     *      <xsd:enumeration value="author"/>
     *      <xsd:enumeration value="authors"/>
     *      <xsd:enumeration value="version"/>
     *      <xsd:enumeration value="since"/>
     *      <xsd:enumeration value="date"/>
     *      <xsd:enumeration value="note"/>
     *      <xsd:enumeration value="warning"/>
     *      <xsd:enumeration value="pre"/>
     *      <xsd:enumeration value="post"/>
     *      <xsd:enumeration value="copyright"/>
     *      <xsd:enumeration value="invariant"/>
     *      <xsd:enumeration value="remark"/>
     *      <xsd:enumeration value="attention"/>
     *      <xsd:enumeration value="par"/>
     *      <xsd:enumeration value="rcs"/>
     *    </xsd:restriction>
     *  </xsd:simpleType>
     * \endcode
     */
    enum DoxSimpleSectKindEnum
    {
        DSSK_INVALID=-1,
        /**
         * \brief Definition for the <tt>DoxSimpleSectKind.see</tt> value.
         */
        DSSK_SEE,
        /**
         * \brief Definition for the <tt>DoxSimpleSectKind.version</tt> value.
         */
        DSSK_VERSION,
        /**
         * \brief Definition for the <tt>DoxSimpleSectKind.return</tt> value.
         */
        DSSK_RETURN,
        /**
         * \brief Definition for the <tt>DoxSimpleSectKind.authors</tt> value.
         */
        DSSK_AUTHORS,
        /**
         * \brief Definition for the <tt>DoxSimpleSectKind.author</tt> value.
         */
        DSSK_AUTHOR,
        /**
         * \brief Definition for the <tt>DoxSimpleSectKind.since</tt> value.
         */
        DSSK_SINCE,
        /**
         * \brief Definition for the <tt>DoxSimpleSectKind.note</tt> value.
         */
        DSSK_NOTE,
        /**
         * \brief Definition for the <tt>DoxSimpleSectKind.attention</tt> value.
         */
        DSSK_ATTENTION,
        /**
         * \brief Definition for the <tt>DoxSimpleSectKind.date</tt> value.
         */
        DSSK_DATE,
        /**
         * \brief Definition for the <tt>DoxSimpleSectKind.warning</tt> value.
         */
        DSSK_WARNING,
        /**
         * \brief Definition for the <tt>DoxSimpleSectKind.pre</tt> value.
         */
        DSSK_PRE,
        /**
         * \brief Definition for the <tt>DoxSimpleSectKind.post</tt> value.
         */
        DSSK_POST,
        /**
         * \brief Definition for the <tt>DoxSimpleSectKind.copyright</tt> value.
         */
        DSSK_COPYRIGHT,
        /**
         * \brief Definition for the <tt>DoxSimpleSectKind.invariant</tt> value.
         */
        DSSK_INVARIANT,
        /**
         * \brief Definition for the <tt>DoxSimpleSectKind.remark</tt> value.
         */
        DSSK_REMARK,
        /**
         * \brief Definition for the <tt>DoxSimpleSectKind.par</tt> value.
         */
        DSSK_PAR,
        /**
         * \brief Definition for the <tt>DoxSimpleSectKind.rcs</tt> value.
         */
        DSSK_RCS,
    };

    class DoxSimpleSectKind
    {
    public:
        static DoxSimpleSectKindEnum get(const String &);
    };
} // namespace MdDox::Doxygen