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
        class RowQueryVisitor
        {
        public:
            virtual ~RowQueryVisitor() = default;

            /**
             * \brief Callback for every _text_node
             */
            virtual void visitedText(const String& ) {}
            /**
             * \brief Called when the element <b>entry</b> is found.
             * \param query Const reference to the EntryQuery class.
             */
            virtual void visitedEntry(const EntryQuery& query) {}

        };
    }
    /**
     * \brief Implements the <tt>docRowType</tt> scaffolding.
     *
     * The following xml provides the source for the <b>docRowType</b> 
     * scaffolding.
     * \n\n
     * \code{.xml}
     *  <xsd:complexType name="docRowType">
     *    <xsd:sequence>
     *      <xsd:element minOccurs="0" name="entry" type="docEntryType" maxOccurs="unbounded"/>
     *    </xsd:sequence>
     *  </xsd:complexType>
     * \endcode
     */
    class RowQuery : public Query
    {
    public:
        RowQuery() = default;
        RowQuery(const RowQuery& other) = default;

        explicit RowQuery(Xml::Node* node) :
            Query(node)
        {
        }

        void visit(Visitors::RowQueryVisitor *) const;
        /**
         * \brief Invokes the supplied callback on <b>entry</b> elements.
         */
        void foreachEntry(const EntryQueryFunction& invoke) const;


    };
} // namespace MdDox::Doxygen
