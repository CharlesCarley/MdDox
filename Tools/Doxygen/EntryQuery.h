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
    namespace Visitors
    {
        class EntryQueryVisitor
        {
        public:
            virtual ~EntryQueryVisitor() = default;

            /**
             * \brief Callback for every _text_node
             */
            virtual void visitedText(const String& ) {}
            /**
             * \brief Called when the element <b>para</b> is found.
             * \param query Const reference to the ParaQuery class.
             */
            virtual void visitedParagraph(const ParaQuery& query) {}

        };
    }
    /**
     * \brief Implements the <tt>docEntryType</tt> scaffolding.
     *
     * The following xml provides the source for the <b>docEntryType</b> 
     * scaffolding.
     * \n\n
     * \code{.xml}
     *  <xsd:complexType name="docEntryType">
     *    <xsd:sequence>
     *      <xsd:element minOccurs="0" name="para" type="docParaType" maxOccurs="unbounded"/>
     *    </xsd:sequence>
     *    <xsd:attribute name="thead" type="DoxBool"/>
     *  </xsd:complexType>
     * \endcode
     */
    class EntryQuery : public Query
    {
    public:
        EntryQuery() = default;
        EntryQuery(const EntryQuery& other) = default;

        explicit EntryQuery(Xml::Node* node) :
            Query(node)
        {
        }

        void visit(Visitors::EntryQueryVisitor *) const;
        /**
         * \brief Provides access to the <b>thead</b> element.
         *
         * \return The <b>thead</b> enumerated value or -1 if the value is not found. 
         */
        DoxBoolEnum getThead() const;

        /**
         * \brief Invokes the supplied callback on <b>para</b> elements.
         */
        void foreachParagraph(const ParaQueryFunction& invoke) const;


    };
} // namespace MdDox::Doxygen
