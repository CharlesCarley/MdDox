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
        class DoxygenIndexQueryVisitor
        {
        public:
            virtual ~DoxygenIndexQueryVisitor() = default;

            /**
             * \brief Callback for every _text_node
             */
            virtual void visitedText(const String& ) {}
            /**
             * \brief Called when the element <b>compound</b> is found.
             * \param query Const reference to the CompoundIndexQuery class.
             */
            virtual void visitedCompound(const CompoundIndexQuery& query) {}

        };
    }
    /**
     * \brief Implements the <tt>DoxygenIndexType</tt> scaffolding.
     *
     * The following xml provides the source for the <b>DoxygenIndexType</b> 
     * scaffolding.
     * \n\n
     * \code{.xml}
     *  <xsd:complexType name="DoxygenIndexType">
     *    <xsd:sequence>
     *      <xsd:element minOccurs="0" name="compound" type="CompoundIndexType" maxOccurs="unbounded"/>
     *    </xsd:sequence>
     *    <xsd:attribute name="version" type="xsd:string" use="required"/>
     *  </xsd:complexType>
     * \endcode
     */
    class DoxygenIndexQuery : public Query
    {
    public:
        DoxygenIndexQuery() = default;
        DoxygenIndexQuery(const DoxygenIndexQuery& other) = default;

        explicit DoxygenIndexQuery(Xml::Node* node) :
            Query(node)
        {
        }

        void visit(Visitors::DoxygenIndexQueryVisitor *) const;
        /**
         * \brief Provides access to the <b>version</b> attribute.
         *
         * \return The <b>version</b> enumerated value or an empty string 
         *  the value is not found. 
         */
        const String& getVersion(const String& notFound="") const;

        /**
         * \brief Invokes the supplied callback on <b>compound</b> elements.
         */
        void foreachCompound(const CompoundIndexQueryFunction& invoke) const;


    };
} // namespace MdDox::Doxygen
