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
     * The following xml provides the <b>DoxCompoundKind</b> declaration.
     *
     *
     * \code{.xml}
     *  <xsd:simpleType name="DoxCompoundKind">
     *    <xsd:restriction base="xsd:string">
     *      <xsd:enumeration value="class"/>
     *      <xsd:enumeration value="struct"/>
     *      <xsd:enumeration value="union"/>
     *      <xsd:enumeration value="interface"/>
     *      <xsd:enumeration value="protocol"/>
     *      <xsd:enumeration value="category"/>
     *      <xsd:enumeration value="exception"/>
     *      <xsd:enumeration value="service"/>
     *      <xsd:enumeration value="singleton"/>
     *      <xsd:enumeration value="module"/>
     *      <xsd:enumeration value="type"/>
     *      <xsd:enumeration value="file"/>
     *      <xsd:enumeration value="namespace"/>
     *      <xsd:enumeration value="group"/>
     *      <xsd:enumeration value="page"/>
     *      <xsd:enumeration value="example"/>
     *      <xsd:enumeration value="dir"/>
     *    </xsd:restriction>
     *  </xsd:simpleType>
     * \endcode
     */
    enum DoxCompoundKindEnum
    {
        DCK_INVALID=-1,
        /**
         * \brief Definition for the <tt>DoxCompoundKind.class</tt> value.
         */
        DCK_CLASS,
        /**
         * \brief Definition for the <tt>DoxCompoundKind.interface</tt> value.
         */
        DCK_INTERFACE,
        /**
         * \brief Definition for the <tt>DoxCompoundKind.namespace</tt> value.
         */
        DCK_NAMESPACE,
        /**
         * \brief Definition for the <tt>DoxCompoundKind.struct</tt> value.
         */
        DCK_STRUCT,
        /**
         * \brief Definition for the <tt>DoxCompoundKind.service</tt> value.
         */
        DCK_SERVICE,
        /**
         * \brief Definition for the <tt>DoxCompoundKind.union</tt> value.
         */
        DCK_UNION,
        /**
         * \brief Definition for the <tt>DoxCompoundKind.protocol</tt> value.
         */
        DCK_PROTOCOL,
        /**
         * \brief Definition for the <tt>DoxCompoundKind.category</tt> value.
         */
        DCK_CATEGORY,
        /**
         * \brief Definition for the <tt>DoxCompoundKind.page</tt> value.
         */
        DCK_PAGE,
        /**
         * \brief Definition for the <tt>DoxCompoundKind.exception</tt> value.
         */
        DCK_EXCEPTION,
        /**
         * \brief Definition for the <tt>DoxCompoundKind.singleton</tt> value.
         */
        DCK_SINGLETON,
        /**
         * \brief Definition for the <tt>DoxCompoundKind.module</tt> value.
         */
        DCK_MODULE,
        /**
         * \brief Definition for the <tt>DoxCompoundKind.type</tt> value.
         */
        DCK_TYPE,
        /**
         * \brief Definition for the <tt>DoxCompoundKind.file</tt> value.
         */
        DCK_FILE,
        /**
         * \brief Definition for the <tt>DoxCompoundKind.group</tt> value.
         */
        DCK_GROUP,
        /**
         * \brief Definition for the <tt>DoxCompoundKind.example</tt> value.
         */
        DCK_EXAMPLE,
        /**
         * \brief Definition for the <tt>DoxCompoundKind.dir</tt> value.
         */
        DCK_DIR,
        DCK_MAX
    };

    class DoxCompoundKind
    {
    public:
        static DoxCompoundKindEnum get(const String &);
    };
} // namespace MdDox::Doxygen