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
     * The following xml provides the <b>DoxLanguage</b> declaration.
     *
     *
     * \code{.xml}
     *  <xsd:simpleType name="DoxLanguage">
     *    <xsd:restriction base="xsd:string">
     *      <xsd:enumeration value="Unknown"/>
     *      <xsd:enumeration value="IDL"/>
     *      <xsd:enumeration value="Java"/>
     *      <xsd:enumeration value="C#"/>
     *      <xsd:enumeration value="D"/>
     *      <xsd:enumeration value="PHP"/>
     *      <xsd:enumeration value="Objective-C"/>
     *      <xsd:enumeration value="C++"/>
     *      <xsd:enumeration value="Javascript"/>
     *      <xsd:enumeration value="Python"/>
     *      <xsd:enumeration value="Fortran"/>
     *      <xsd:enumeration value="VHDL"/>
     *      <xsd:enumeration value="XML"/>
     *      <xsd:enumeration value="SQL"/>
     *      <xsd:enumeration value="Tcl"/>
     *      <xsd:enumeration value="Markdown"/>
     *    </xsd:restriction>
     *  </xsd:simpleType>
     * \endcode
     */
    enum DoxLanguageEnum
    {
        DL_INVALID=-1,
        /**
         * \brief Definition for the <tt>DoxLanguage.Unknown</tt> value.
         */
        DL_UNKNOWN,
        /**
         * \brief Definition for the <tt>DoxLanguage.Tcl</tt> value.
         */
        DL_TCL,
        /**
         * \brief Definition for the <tt>DoxLanguage.IDL</tt> value.
         */
        DL_IDL,
        /**
         * \brief Definition for the <tt>DoxLanguage.Objective-C</tt> value.
         */
        DL_OBJECTIVE_C,
        /**
         * \brief Definition for the <tt>DoxLanguage.Java</tt> value.
         */
        DL_JAVA,
        /**
         * \brief Definition for the <tt>DoxLanguage.D</tt> value.
         */
        DL_D,
        /**
         * \brief Definition for the <tt>DoxLanguage.C#</tt> value.
         */
        DL_CSHARP,
        /**
         * \brief Definition for the <tt>DoxLanguage.PHP</tt> value.
         */
        DL_PHP,
        /**
         * \brief Definition for the <tt>DoxLanguage.C++</tt> value.
         */
        DL_CPLUSPLUS,
        /**
         * \brief Definition for the <tt>DoxLanguage.Javascript</tt> value.
         */
        DL_JAVASCRIPT,
        /**
         * \brief Definition for the <tt>DoxLanguage.Python</tt> value.
         */
        DL_PYTHON,
        /**
         * \brief Definition for the <tt>DoxLanguage.Fortran</tt> value.
         */
        DL_FORTRAN,
        /**
         * \brief Definition for the <tt>DoxLanguage.VHDL</tt> value.
         */
        DL_VHDL,
        /**
         * \brief Definition for the <tt>DoxLanguage.XML</tt> value.
         */
        DL_XML,
        /**
         * \brief Definition for the <tt>DoxLanguage.SQL</tt> value.
         */
        DL_SQL,
        /**
         * \brief Definition for the <tt>DoxLanguage.Markdown</tt> value.
         */
        DL_MARKDOWN,
        DL_MAX
    };

    class DoxLanguage
    {
    public:
        static DoxLanguageEnum get(const String &);
    };
} // namespace MdDox::Doxygen