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
     * The following xml provides the <b>DoxHighlightClass</b> declaration.
     *
     *
     * \code{.xml}
     *  <xsd:simpleType name="DoxHighlightClass">
     *    <xsd:restriction base="xsd:string">
     *      <xsd:enumeration value="comment"/>
     *      <xsd:enumeration value="normal"/>
     *      <xsd:enumeration value="preprocessor"/>
     *      <xsd:enumeration value="keyword"/>
     *      <xsd:enumeration value="keywordtype"/>
     *      <xsd:enumeration value="keywordflow"/>
     *      <xsd:enumeration value="stringliteral"/>
     *      <xsd:enumeration value="charliteral"/>
     *    </xsd:restriction>
     *  </xsd:simpleType>
     * \endcode
     */
    enum DoxHighlightClassEnum
    {
        DHC_INVALID=-1,
        /**
         * \brief Definition for the <tt>DoxHighlightClass.comment</tt> value.
         */
        DHC_COMMENT,
        /**
         * \brief Definition for the <tt>DoxHighlightClass.preprocessor</tt> value.
         */
        DHC_PREPROCESSOR,
        /**
         * \brief Definition for the <tt>DoxHighlightClass.normal</tt> value.
         */
        DHC_NORMAL,
        /**
         * \brief Definition for the <tt>DoxHighlightClass.charliteral</tt> value.
         */
        DHC_CHAR_LITERAL,
        /**
         * \brief Definition for the <tt>DoxHighlightClass.keywordflow</tt> value.
         */
        DHC_KEYWORD_FLOW,
        /**
         * \brief Definition for the <tt>DoxHighlightClass.keywordtype</tt> value.
         */
        DHC_KEYWORD_TYPE,
        /**
         * \brief Definition for the <tt>DoxHighlightClass.keyword</tt> value.
         */
        DHC_KEYWORD,
        /**
         * \brief Definition for the <tt>DoxHighlightClass.stringliteral</tt> value.
         */
        DHC_STRINGLITERAL,
    };

    class DoxHighlightClass
    {
    public:
        static DoxHighlightClassEnum get(const String &);
    };
} // namespace MdDox::Doxygen