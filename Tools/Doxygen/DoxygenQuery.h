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

#include "DoxVersionNumber.h"

namespace MdDox::Doxygen
{
    namespace Visitors
    {
        class DoxygenQueryVisitor
        {
        public:
            virtual ~DoxygenQueryVisitor() = default;

            /**
             * \brief Callback for every _text_node
             */
            virtual void visitedText(const String& ) {}
            /**
             * \brief Called when the element <b>compounddef</b> is found.
             * \param query Const reference to the CompoundDefQuery class.
             */
            virtual void visitedCompoundDef(const CompoundDefQuery& query) {}

        };
    }
    /**
     * \brief Implements the <tt>DoxygenType</tt> scaffolding.
     *
     * The following xml provides the source for the <b>DoxygenType</b> 
     * scaffolding.
     * \n\n
     * \code{.xml}
     *  <xsd:complexType name="DoxygenType">
     *    <xsd:sequence maxOccurs="unbounded">
     *      <xsd:element minOccurs="0" name="compounddef" type="compounddefType"/>
     *    </xsd:sequence>
     *    <xsd:attribute name="version" type="DoxVersionNumber" use="required"/>
     *  </xsd:complexType>
     * \endcode
     */
    class DoxygenQuery : public Query
    {
    public:
        DoxygenQuery() = default;
        DoxygenQuery(const DoxygenQuery& other) = default;

        explicit DoxygenQuery(Xml::Node* node) :
            Query(node)
        {
        }

        void visit(Visitors::DoxygenQueryVisitor *) const;
        /**
         * \brief Provides access to the <b>version</b> element.
         *
         * \return The <b>version</b> enumerated value or -1 if the value is not found. 
         */
        DoxVersionNumberEnum getVersion() const;

        /**
         * \brief Invokes the supplied callback on <b>compounddef</b> elements.
         */
        void foreachCompoundDef(const CompoundDefQueryFunction& invoke) const;


    };
} // namespace MdDox::Doxygen
