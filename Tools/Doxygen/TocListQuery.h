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
        class TocListQueryVisitor
        {
        public:
            virtual ~TocListQueryVisitor() = default;

            /**
             * \brief Callback for every _text_node
             */
            virtual void visitedText(const String& ) {}
            /**
             * \brief Called when the element <b>tocitem</b> is found.
             * \param query Const reference to the TocItemQuery class.
             */
            virtual void visitedTocItem(const TocItemQuery& query) {}

        };
    }
    /**
     * \brief Implements the <tt>docTocListType</tt> scaffolding.
     *
     * The following xml provides the source for the <b>docTocListType</b> 
     * scaffolding.
     * \n\n
     * \code{.xml}
     *  <xsd:complexType name="docTocListType">
     *    <xsd:sequence>
     *      <xsd:element minOccurs="0" name="tocitem" type="docTocItemType" maxOccurs="unbounded"/>
     *    </xsd:sequence>
     *  </xsd:complexType>
     * \endcode
     */
    class TocListQuery : public Query
    {
    public:
        TocListQuery() = default;
        TocListQuery(const TocListQuery& other) = default;

        explicit TocListQuery(Xml::Node* node) :
            Query(node)
        {
        }

        void visit(Visitors::TocListQueryVisitor *) const;
        /**
         * \brief Invokes the supplied callback on <b>tocitem</b> elements.
         */
        void foreachTocItem(const TocItemQueryFunction& invoke) const;


    };
} // namespace MdDox::Doxygen
