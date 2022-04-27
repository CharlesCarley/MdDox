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

#include "DoxSectionKind.h"

namespace MdDox::Doxygen
{
    namespace Visitors
    {
        class SectionDefQueryVisitor
        {
        public:
            virtual ~SectionDefQueryVisitor() = default;

            /**
             * \brief Callback for every _text_node
             */
            virtual void visitedText(const String& ) {}
            /**
             * \brief Called when the element <b>memberdef</b> is found.
             * \param query Const reference to the MemberDefQuery class.
             */
            virtual void visitedMemberDef(const MemberDefQuery& query) {}
            /**
             * \brief Called when the element <b>description</b> is found.
             * \param query Const reference to the DescriptionQuery class.
             */
            virtual void visitedDescription(const DescriptionQuery& query) {}
            /**
             * \brief Called when the element <b>header</b> is found.
             * \param text Const reference to the internal text.
             */
            virtual void visitedHeader(const String& text) {}

        };
    }
    /**
     * \brief Implements the <tt>sectiondefType</tt> scaffolding.
     *
     * The following xml provides the source for the <b>sectiondefType</b> 
     * scaffolding.
     * \n\n
     * \code{.xml}
     *  <xsd:complexType name="sectiondefType">
     *    <xsd:sequence>
     *      <xsd:element minOccurs="0" name="header" type="xsd:string"/>
     *      <xsd:element minOccurs="0" name="description" type="descriptionType"/>
     *      <xsd:element name="memberdef" type="memberdefType" maxOccurs="unbounded"/>
     *    </xsd:sequence>
     *    <xsd:attribute name="kind" type="DoxSectionKind"/>
     *  </xsd:complexType>
     * \endcode
     */
    class SectionDefQuery : public Query
    {
    public:
        SectionDefQuery() = default;
        SectionDefQuery(const SectionDefQuery& other) = default;

        explicit SectionDefQuery(Xml::Node* node) :
            Query(node)
        {
        }

        void visit(Visitors::SectionDefQueryVisitor *) const;
        /**
         * \brief Provides access to the <b>kind</b> element.
         *
         * \return The <b>kind</b> enumerated value or -1 if the value is not found. 
         */
        DoxSectionKindEnum getKind() const;

        /**
         * \brief Provides access to the <b>header</b> tag's inner text.
         *
         * \return The <b>header's</b> text or the default value if the node is invalid. 
         */
        const String& getHeader(const String& notFound="") const;

        /**
         * \brief Provides access to the <b>description</b> attribute.
         */
        void getDescription(DescriptionQuery &dest) const;

        /**
         * \brief Provides access to the <b>description</b> attribute.
         */
        DescriptionQuery getDescription() const;

        /**
         * \brief Invokes the supplied callback on <b>memberdef</b> elements.
         */
        void foreachMemberDef(const MemberDefQueryFunction& invoke) const;


    };
} // namespace MdDox::Doxygen
