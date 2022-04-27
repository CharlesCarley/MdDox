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
     * \brief Implements the <tt>locationType</tt> scaffolding.
     *
     * The following xml provides the source for the <b>locationType</b> 
     * scaffolding.
     * \n\n
     * \code{.xml}
     *  <xsd:complexType name="locationType">
     *    <xsd:attribute name="file" type="xsd:string"/>
     *    <xsd:attribute name="line" type="xsd:integer"/>
     *    <xsd:attribute name="column" type="xsd:integer" use="optional"/>
     *    <xsd:attribute name="bodyfile" type="xsd:string"/>
     *    <xsd:attribute name="bodystart" type="xsd:integer"/>
     *    <xsd:attribute name="bodyend" type="xsd:integer"/>
     *  </xsd:complexType>
     * \endcode
     */
    class LocationQuery : public Query
    {
    public:
        LocationQuery() = default;
        LocationQuery(const LocationQuery& other) = default;

        explicit LocationQuery(Xml::Node* node) :
            Query(node)
        {
        }
        /**
         * \brief Provides access to the <b>bodyfile</b> attribute.
         *
         * \return The <b>bodyfile</b> enumerated value or an empty string 
         *  the value is not found. 
         */
        const String& getBodyFile(const String& notFound="") const;

        /**
         * \brief Provides access to the <b>file</b> attribute.
         *
         * \return The <b>file</b> enumerated value or an empty string 
         *  the value is not found. 
         */
        const String& getFile(const String& notFound="") const;

        /**
         * \brief Provides access to the <b>bodystart</b> attribute.
         */
        int64_t getBodyStart(int64_t def = -1) const;

        /**
         * \brief Provides access to the <b>column</b> attribute.
         */
        int64_t getColumn(int64_t def = -1) const;

        /**
         * \brief Provides access to the <b>line</b> attribute.
         */
        int64_t getLine(int64_t def = -1) const;

        /**
         * \brief Provides access to the <b>bodyend</b> attribute.
         */
        int64_t getBodyEnd(int64_t def = -1) const;


    };
} // namespace MdDox::Doxygen
