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
     * \brief Implements the <tt>referenceType</tt> scaffolding.
     *
     * The following xml provides the source for the <b>referenceType</b> 
     * scaffolding.
     * \n\n
     * \code{.xml}
     *  <xsd:complexType name="referenceType" mixed="true">
     *    <xsd:attribute name="refid" type="xsd:string"/>
     *    <xsd:attribute name="compoundref" type="xsd:string" use="optional"/>
     *    <xsd:attribute name="startline" type="xsd:integer"/>
     *    <xsd:attribute name="endline" type="xsd:integer"/>
     *  </xsd:complexType>
     * \endcode
     */
    class ReferenceQuery : public Query
    {
    public:
        ReferenceQuery() = default;
        ReferenceQuery(const ReferenceQuery& other) = default;

        explicit ReferenceQuery(Xml::Node* node) :
            Query(node)
        {
        }
        /**
         * \brief Provides access to the <b>refid</b> attribute.
         *
         * \return The <b>refid</b> enumerated value or an empty string 
         *  the value is not found. 
         */
        const String& getRefId(const String& notFound="") const;

        /**
         * \brief Provides access to the <b>compoundref</b> attribute.
         *
         * \return The <b>compoundref</b> enumerated value or an empty string 
         *  the value is not found. 
         */
        const String& getCompoundRef(const String& notFound="") const;

        /**
         * \brief Provides access to the <b>startline</b> attribute.
         */
        int64_t getStartLine(int64_t def = -1) const;

        /**
         * \brief Provides access to the <b>endline</b> attribute.
         */
        int64_t getEndline(int64_t def = -1) const;


    };
} // namespace MdDox::Doxygen
