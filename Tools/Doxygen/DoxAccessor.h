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
     * The following xml provides the <b>DoxAccessor</b> declaration.
     *
     *
     * \code{.xml}
     *  <xsd:simpleType name="DoxAccessor">
     *    <xsd:restriction base="xsd:string">
     *      <xsd:enumeration value="retain"/>
     *      <xsd:enumeration value="copy"/>
     *      <xsd:enumeration value="assign"/>
     *      <xsd:enumeration value="weak"/>
     *      <xsd:enumeration value="strong"/>
     *      <xsd:enumeration value="unretained"/>
     *    </xsd:restriction>
     *  </xsd:simpleType>
     * \endcode
     */
    enum DoxAccessorEnum
    {
        DA_INVALID=-1,
        /**
         * \brief Definition for the <tt>DoxAccessor.assign</tt> value.
         */
        DA_ASSIGN,
        /**
         * \brief Definition for the <tt>DoxAccessor.copy</tt> value.
         */
        DA_COPY,
        /**
         * \brief Definition for the <tt>DoxAccessor.retain</tt> value.
         */
        DA_RETAIN,
        /**
         * \brief Definition for the <tt>DoxAccessor.weak</tt> value.
         */
        DA_WEAK,
        /**
         * \brief Definition for the <tt>DoxAccessor.strong</tt> value.
         */
        DA_STRONG,
        /**
         * \brief Definition for the <tt>DoxAccessor.unretained</tt> value.
         */
        DA_UNRETAINED,
        DA_MAX
    };

    class DoxAccessor
    {
    public:
        static DoxAccessorEnum get(const String &);
    };
} // namespace MdDox::Doxygen