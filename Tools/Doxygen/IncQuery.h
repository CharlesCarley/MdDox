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

#include "DoxBool.h"

namespace MdDox::Doxygen
{

    /**
     * \brief Implements the <tt>incType</tt> scaffolding.
     *
     * The following xml provides the source for the <b>incType</b> 
     * scaffolding.
     * \n\n
     * \code{.xml}
     *  <xsd:complexType name="incType">
     *    <xsd:simpleContent>
     *      <xsd:extension base="xsd:string">
     *        <xsd:attribute name="refid" type="xsd:string"/>
     *        <xsd:attribute name="local" type="DoxBool"/>
     *      </xsd:extension>
     *    </xsd:simpleContent>
     *  </xsd:complexType>
     * \endcode
     */
    class IncQuery : public Query
    {
    public:
        IncQuery() = default;
        IncQuery(const IncQuery& other) = default;

        explicit IncQuery(Xml::Node* node) :
            Query(node)
        {
        }
        /**
         * \brief Provides access to the <b>local</b> element.
         *
         * \return The <b>local</b> enumerated value or -1 if the value is not found. 
         */
        DoxBoolEnum getLocal() const;

        /**
         * \brief Provides access to the <b>refid</b> attribute.
         *
         * \return The <b>refid</b> enumerated value or an empty string 
         *  the value is not found. 
         */
        const String& getRefId(const String& notFound="") const;


    };
} // namespace MdDox::Doxygen
