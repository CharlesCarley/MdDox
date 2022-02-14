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

#include "DoxProtectionKind.h"

namespace MdDox::Doxygen
{
    namespace Visitors
    {
        class EnumValueQueryVisitor
        {
        public:
            virtual ~EnumValueQueryVisitor() = default;

            /**
             * \brief Callback for every _text_node
             */
            virtual void visitedText(const String& ) {}
            /**
             * \brief Called when the element <b>initializer</b> is found.
             * \param query Const reference to the LinkedTextQuery class.
             */
            virtual void visitedInitializer(const LinkedTextQuery& query) {}
            /**
             * \brief Called when the element <b>briefdescription</b> is found.
             * \param query Const reference to the DescriptionQuery class.
             */
            virtual void visitedBriefDescription(const DescriptionQuery& query) {}
            /**
             * \brief Called when the element <b>detaileddescription</b> is found.
             * \param query Const reference to the DescriptionQuery class.
             */
            virtual void visitedDetailedDescription(const DescriptionQuery& query) {}
            /**
             * \brief Called when the element <b>name</b> is found.
             * \param text Const reference to the internal text.
             */
            virtual void visitedName(const String& text) {}

        };
    }
    /**
     * \brief Implements the <tt>enumvalueType</tt> scaffolding.
     *
     * The following xml provides the source for the <b>enumvalueType</b> 
     * scaffolding.
     *
     * \code{.xml}
     *  <xsd:complexType name="enumvalueType" mixed="true">
     *    <xsd:sequence>
     *      <xsd:element name="name"/>
     *      <xsd:element minOccurs="0" name="initializer" type="linkedTextType"/>
     *      <xsd:element minOccurs="0" name="briefdescription" type="descriptionType"/>
     *      <xsd:element minOccurs="0" name="detaileddescription" type="descriptionType"/>
     *    </xsd:sequence>
     *    <xsd:attribute name="id" type="xsd:string"/>
     *    <xsd:attribute name="prot" type="DoxProtectionKind"/>
     *  </xsd:complexType>
     * \endcode
     */
    class EnumValueQuery : public Query
    {
    public:
        EnumValueQuery() = default;
        EnumValueQuery(const EnumValueQuery& other) = default;

        explicit EnumValueQuery(Xml::Node* node) :
            Query(node)
        {
        }

        void visit(Visitors::EnumValueQueryVisitor *) const;
        /**
         * \brief Provides access to the <b>prot</b> element.
         *
         * \return The <b>prot</b> enumerated value or -1 if the value is not found. 
         */
        DoxProtectionKindEnum getProt() const;

        /**
         * \brief Provides access to the <b>id</b> attribute.
         *
         * \return The <b>id</b> enumerated value or an empty string 
         *  the value is not found. 
         */
        const String& getId(const String& notFound="") const;

        /**
         * \brief Provides access to the <b>name</b> tag's inner text.
         *
         * \return The <b>name's</b> text or the default value if the node is invalid. 
         */
        const String& getName(const String& notFound="") const;

        /**
         * \brief Provides access to the <b>initializer</b> attribute.
         */
        void getInitializer(LinkedTextQuery &dest) const;

        /**
         * \brief Provides access to the <b>initializer</b> attribute.
         */
        LinkedTextQuery getInitializer() const;

        /**
         * \brief Provides access to the <b>briefdescription</b> attribute.
         */
        void getBriefDescription(DescriptionQuery &dest) const;

        /**
         * \brief Provides access to the <b>briefdescription</b> attribute.
         */
        DescriptionQuery getBriefDescription() const;

        /**
         * \brief Provides access to the <b>detaileddescription</b> attribute.
         */
        void getDetailedDescription(DescriptionQuery &dest) const;

        /**
         * \brief Provides access to the <b>detaileddescription</b> attribute.
         */
        DescriptionQuery getDetailedDescription() const;


    };
} // namespace MdDox::Doxygen
