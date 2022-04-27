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
     * \brief Implements the <tt>docIndexEntryType</tt> scaffolding.
     *
     * The following xml provides the source for the <b>docIndexEntryType</b> 
     * scaffolding.
     * \n\n
     * \code{.xml}
     *  <xsd:complexType name="docIndexEntryType">
     *    <xsd:sequence>
     *      <xsd:element name="primaryie" type="xsd:string"/>
     *      <xsd:element name="secondaryie" type="xsd:string"/>
     *    </xsd:sequence>
     *  </xsd:complexType>
     * \endcode
     */
    class IndexEntryQuery : public Query
    {
    public:
        IndexEntryQuery() = default;
        IndexEntryQuery(const IndexEntryQuery& other) = default;

        explicit IndexEntryQuery(Xml::Node* node) :
            Query(node)
        {
        }

    };
} // namespace MdDox::Doxygen
