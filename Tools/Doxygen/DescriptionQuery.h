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
        class DescriptionQueryVisitor
        {
        public:
            virtual ~DescriptionQueryVisitor() = default;

            /**
             * \brief Callback for every _text_node
             */
            virtual void visitedText(const String& ) {}
            /**
             * \brief Called when the element <b>para</b> is found.
             * \param query Const reference to the ParaQuery class.
             */
            virtual void visitedParagraph(const ParaQuery& query) {}
            /**
             * \brief Called when the element <b>sect1</b> is found.
             * \param query Const reference to the Sect1Query class.
             */
            virtual void visitedSect1(const Sect1Query& query) {}
            /**
             * \brief Called when the element <b>internal</b> is found.
             * \param query Const reference to the InternalQuery class.
             */
            virtual void visitedInternal(const InternalQuery& query) {}
            /**
             * \brief Called when the element <b>title</b> is found.
             * \param text Const reference to the internal text.
             */
            virtual void visitedTitle(const String& text) {}

        };
    }
    /**
     * \brief Implements the <tt>descriptionType</tt> scaffolding.
     *
     * The following xml provides the source for the <b>descriptionType</b> 
     * scaffolding.
     * \n\n
     * \code{.xml}
     *  <xsd:complexType name="descriptionType" mixed="true">
     *    <xsd:sequence>
     *      <xsd:element minOccurs="0" name="title" type="xsd:string"/>
     *      <xsd:element minOccurs="0" name="para" type="docParaType" maxOccurs="unbounded"/>
     *      <xsd:element minOccurs="0" name="sect1" type="docSect1Type" maxOccurs="unbounded"/>
     *      <xsd:element minOccurs="0" name="internal" type="docInternalType"/>
     *    </xsd:sequence>
     *  </xsd:complexType>
     * \endcode
     */
    class DescriptionQuery : public Query
    {
    public:
        DescriptionQuery() = default;
        DescriptionQuery(const DescriptionQuery& other) = default;

        explicit DescriptionQuery(Xml::Node* node) :
            Query(node)
        {
        }

        void visit(Visitors::DescriptionQueryVisitor *) const;
        /**
         * \brief Provides access to the <b>title</b> tag's inner text.
         *
         * \return The <b>title's</b> text or the default value if the node is invalid. 
         */
        const String& getTitle(const String& notFound="") const;

        /**
         * \brief Provides access to the <b>internal</b> attribute.
         */
        void getInternal(InternalQuery &dest) const;

        /**
         * \brief Provides access to the <b>internal</b> attribute.
         */
        InternalQuery getInternal() const;

        /**
         * \brief Invokes the supplied callback on <b>para</b> elements.
         */
        void foreachParagraph(const ParaQueryFunction& invoke) const;

        /**
         * \brief Invokes the supplied callback on <b>sect1</b> elements.
         */
        void foreachSect1(const Sect1QueryFunction& invoke) const;


    };
} // namespace MdDox::Doxygen
