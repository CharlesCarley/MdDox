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
    namespace Visitors
    {
        class ListingQueryVisitor
        {
        public:
            virtual ~ListingQueryVisitor() = default;

            /**
             * \brief Callback for every _text_node
             */
            virtual void visitedText(const String& ) {}
            /**
             * \brief Called when the element <b>codeline</b> is found.
             * \param query Const reference to the CodeLineQuery class.
             */
            virtual void visitedCodeLine(const CodeLineQuery& query) {}

        };
    }
    /**
     * \brief Implements the <tt>listingType</tt> scaffolding.
     *
     * The following xml provides the source for the <b>listingType</b> 
     * scaffolding.
     *
     * \code{.xml}
     *  <xsd:complexType name="listingType">
     *    <xsd:sequence>
     *      <xsd:element minOccurs="0" name="codeline" type="codelineType" maxOccurs="unbounded"/>
     *    </xsd:sequence>
     *    <xsd:attribute name="filename" type="xsd:string" use="optional"/>
     *  </xsd:complexType>
     * \endcode
     */
    class ListingQuery : public Query
    {
    public:
        ListingQuery() = default;
        ListingQuery(const ListingQuery& other) = default;

        explicit ListingQuery(Xml::Node* node) :
            Query(node)
        {
        }

        void visit(Visitors::ListingQueryVisitor *) const;
        /**
         * \brief Provides access to the <b>filename</b> attribute.
         *
         * \return The <b>filename</b> enumerated value or an empty string 
         *  the value is not found. 
         */
        const String& getFileName(const String& notFound="") const;

        /**
         * \brief Invokes the supplied callback on <b>codeline</b> elements.
         */
        void foreachCodeLine(const CodeLineQueryFunction& invoke) const;


    };
} // namespace MdDox::Doxygen
