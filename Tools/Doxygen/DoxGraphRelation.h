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
     * The following xml provides the <b>DoxGraphRelation</b> declaration.
     *
     *
     * \code{.xml}
     *  <xsd:simpleType name="DoxGraphRelation">
     *    <xsd:restriction base="xsd:string">
     *      <xsd:enumeration value="include"/>
     *      <xsd:enumeration value="usage"/>
     *      <xsd:enumeration value="template-instance"/>
     *      <xsd:enumeration value="public-inheritance"/>
     *      <xsd:enumeration value="protected-inheritance"/>
     *      <xsd:enumeration value="private-inheritance"/>
     *      <xsd:enumeration value="type-constraint"/>
     *    </xsd:restriction>
     *  </xsd:simpleType>
     * \endcode
     */
    enum DoxGraphRelationEnum
    {
        DGR_INVALID=-1,
        /**
         * \brief Definition for the <tt>DoxGraphRelation.type-constraint</tt> value.
         */
        DGR_TYPE_CONSTRAINT,
        /**
         * \brief Definition for the <tt>DoxGraphRelation.include</tt> value.
         */
        DGR_INCLUDE,
        /**
         * \brief Definition for the <tt>DoxGraphRelation.usage</tt> value.
         */
        DGR_USAGE,
        /**
         * \brief Definition for the <tt>DoxGraphRelation.private-inheritance</tt> value.
         */
        DGR_PRIVATE_INHERITANCE,
        /**
         * \brief Definition for the <tt>DoxGraphRelation.template-instance</tt> value.
         */
        DGR_TEMPLATE_INSTANCE,
        /**
         * \brief Definition for the <tt>DoxGraphRelation.public-inheritance</tt> value.
         */
        DGR_PUBLIC_INHERITANCE,
        /**
         * \brief Definition for the <tt>DoxGraphRelation.protected-inheritance</tt> value.
         */
        DGR_PROTECTED_INHERITANCE,
        DGR_MAX
    };

    class DoxGraphRelation
    {
    public:
        static DoxGraphRelationEnum get(const String &);
    };
} // namespace MdDox::Doxygen