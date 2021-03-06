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
        class ParamQueryVisitor
        {
        public:
            virtual ~ParamQueryVisitor() = default;

            /**
             * \brief Callback for every _text_node
             */
            virtual void visitedText(const String& ) {}
            /**
             * \brief Called when the element <b>type</b> is found.
             * \param query Const reference to the LinkedTextQuery class.
             */
            virtual void visitedType(const LinkedTextQuery& query) {}
            /**
             * \brief Called when the element <b>defval</b> is found.
             * \param query Const reference to the LinkedTextQuery class.
             */
            virtual void visitedDefVal(const LinkedTextQuery& query) {}
            /**
             * \brief Called when the element <b>briefdescription</b> is found.
             * \param query Const reference to the DescriptionQuery class.
             */
            virtual void visitedBriefDescription(const DescriptionQuery& query) {}
            /**
             * \brief Called when the element <b>declname</b> is found.
             * \param text Const reference to the internal text.
             */
            virtual void visitedDeclName(const String& text) {}
            /**
             * \brief Called when the element <b>defname</b> is found.
             * \param text Const reference to the internal text.
             */
            virtual void visitedDefName(const String& text) {}
            /**
             * \brief Called when the element <b>array</b> is found.
             * \param text Const reference to the internal text.
             */
            virtual void visitedArray(const String& text) {}

        };
    }
    /**
     * \brief Implements the <tt>paramType</tt> scaffolding.
     *
     * The following xml provides the source for the <b>paramType</b> 
     * scaffolding.
     * \n\n
     * \code{.xml}
     *  <xsd:complexType name="paramType">
     *    <xsd:sequence>
     *      <xsd:element minOccurs="0" name="type" type="linkedTextType"/>
     *      <xsd:element minOccurs="0" name="declname"/>
     *      <xsd:element minOccurs="0" name="defname"/>
     *      <xsd:element minOccurs="0" name="array"/>
     *      <xsd:element minOccurs="0" name="defval" type="linkedTextType"/>
     *      <xsd:element minOccurs="0" name="typeconstraint" type="linkedTextType"/>
     *      <xsd:element minOccurs="0" name="briefdescription" type="descriptionType"/>
     *    </xsd:sequence>
     *  </xsd:complexType>
     * \endcode
     */
    class ParamQuery : public Query
    {
    public:
        ParamQuery() = default;
        ParamQuery(const ParamQuery& other) = default;

        explicit ParamQuery(Xml::Node* node) :
            Query(node)
        {
        }

        void visit(Visitors::ParamQueryVisitor *) const;
        /**
         * \brief Provides access to the <b>declname</b> tag's inner text.
         *
         * \return The <b>declname's</b> text or the default value if the node is invalid. 
         */
        const String& getDeclName(const String& notFound="") const;

        /**
         * \brief Provides access to the <b>defname</b> tag's inner text.
         *
         * \return The <b>defname's</b> text or the default value if the node is invalid. 
         */
        const String& getDefName(const String& notFound="") const;

        /**
         * \brief Provides access to the <b>array</b> tag's inner text.
         *
         * \return The <b>array's</b> text or the default value if the node is invalid. 
         */
        const String& getArray(const String& notFound="") const;

        /**
         * \brief Provides access to the <b>type</b> attribute.
         */
        void getType(LinkedTextQuery &dest) const;

        /**
         * \brief Provides access to the <b>type</b> attribute.
         */
        LinkedTextQuery getType() const;

        /**
         * \brief Provides access to the <b>defval</b> attribute.
         */
        void getDefVal(LinkedTextQuery &dest) const;

        /**
         * \brief Provides access to the <b>defval</b> attribute.
         */
        LinkedTextQuery getDefVal() const;

        /**
         * \brief Provides access to the <b>briefdescription</b> attribute.
         */
        void getBriefDescription(DescriptionQuery &dest) const;

        /**
         * \brief Provides access to the <b>briefdescription</b> attribute.
         */
        DescriptionQuery getBriefDescription() const;


    };
} // namespace MdDox::Doxygen
