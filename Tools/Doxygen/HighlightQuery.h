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

#include "DoxHighlightClass.h"

namespace MdDox::Doxygen
{
    namespace Visitors
    {
        class HighlightQueryVisitor
        {
        public:
            virtual ~HighlightQueryVisitor() = default;

            /**
             * \brief Callback for every _text_node
             */
            virtual void visitedText(const String& ) {}
            /**
             * \brief Called when the element <b>sp</b> is found.
             * \param query Const reference to the SpQuery class.
             */
            virtual void visitedSp(const SpQuery& query) {}
            /**
             * \brief Called when the element <b>ref</b> is found.
             * \param query Const reference to the RefTextQuery class.
             */
            virtual void visitedRef(const RefTextQuery& query) {}

        };
    }
    /**
     * \brief Implements the <tt>highlightType</tt> scaffolding.
     *
     * The following xml provides the source for the <b>highlightType</b> 
     * scaffolding.
     *
     * \code{.xml}
     *  <xsd:complexType name="highlightType" mixed="true">
     *    <xsd:choice minOccurs="0" maxOccurs="unbounded">
     *      <xsd:element name="sp" type="spType"/>
     *      <xsd:element name="ref" type="refTextType"/>
     *    </xsd:choice>
     *    <xsd:attribute name="class" type="DoxHighlightClass"/>
     *  </xsd:complexType>
     * \endcode
     */
    class HighlightQuery : public Query
    {
    public:
        HighlightQuery() = default;
        HighlightQuery(const HighlightQuery& other) = default;

        explicit HighlightQuery(Xml::Node* node) :
            Query(node)
        {
        }

        void visit(Visitors::HighlightQueryVisitor *) const;
        /**
         * \brief Provides access to the <b>class</b> element.
         *
         * \return The <b>class</b> enumerated value or -1 if the value is not found. 
         */
        DoxHighlightClassEnum getClass() const;

        /**
         * \brief Provides access to the <b>sp</b> attribute.
         */
        void getSp(SpQuery &dest) const;

        /**
         * \brief Provides access to the <b>sp</b> attribute.
         */
        SpQuery getSp() const;

        /**
         * \brief Provides access to the <b>ref</b> attribute.
         */
        void getRef(RefTextQuery &dest) const;

        /**
         * \brief Provides access to the <b>ref</b> attribute.
         */
        RefTextQuery getRef() const;


    };
} // namespace MdDox::Doxygen
