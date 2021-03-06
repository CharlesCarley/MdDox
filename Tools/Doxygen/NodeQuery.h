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
        class NodeQueryVisitor
        {
        public:
            virtual ~NodeQueryVisitor() = default;

            /**
             * \brief Callback for every _text_node
             */
            virtual void visitedText(const String& ) {}
            /**
             * \brief Called when the element <b>childnode</b> is found.
             * \param query Const reference to the ChildNodeQuery class.
             */
            virtual void visitedChildNode(const ChildNodeQuery& query) {}
            /**
             * \brief Called when the element <b>link</b> is found.
             * \param query Const reference to the LinkQuery class.
             */
            virtual void visitedLink(const LinkQuery& query) {}
            /**
             * \brief Called when the element <b>label</b> is found.
             * \param text Const reference to the internal text.
             */
            virtual void visitedLabel(const String& text) {}

        };
    }
    /**
     * \brief Implements the <tt>nodeType</tt> scaffolding.
     *
     * The following xml provides the source for the <b>nodeType</b> 
     * scaffolding.
     * \n\n
     * \code{.xml}
     *  <xsd:complexType name="nodeType">
     *    <xsd:sequence>
     *      <xsd:element name="label"/>
     *      <xsd:element minOccurs="0" name="link" type="linkType"/>
     *      <xsd:element minOccurs="0" name="childnode" type="childnodeType" maxOccurs="unbounded"/>
     *    </xsd:sequence>
     *    <xsd:attribute name="id" type="xsd:string"/>
     *  </xsd:complexType>
     * \endcode
     */
    class NodeQuery : public Query
    {
    public:
        NodeQuery() = default;
        NodeQuery(const NodeQuery& other) = default;

        explicit NodeQuery(Xml::Node* node) :
            Query(node)
        {
        }

        void visit(Visitors::NodeQueryVisitor *) const;
        /**
         * \brief Provides access to the <b>id</b> attribute.
         *
         * \return The <b>id</b> enumerated value or an empty string 
         *  the value is not found. 
         */
        const String& getId(const String& notFound="") const;

        /**
         * \brief Provides access to the <b>label</b> tag's inner text.
         *
         * \return The <b>label's</b> text or the default value if the node is invalid. 
         */
        const String& getLabel(const String& notFound="") const;

        /**
         * \brief Provides access to the <b>link</b> attribute.
         */
        void getLink(LinkQuery &dest) const;

        /**
         * \brief Provides access to the <b>link</b> attribute.
         */
        LinkQuery getLink() const;

        /**
         * \brief Invokes the supplied callback on <b>childnode</b> elements.
         */
        void foreachChildNode(const ChildNodeQueryFunction& invoke) const;


    };
} // namespace MdDox::Doxygen
