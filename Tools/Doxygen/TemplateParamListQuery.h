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
        class TemplateParamListQueryVisitor
        {
        public:
            virtual ~TemplateParamListQueryVisitor() = default;

            /**
             * \brief Callback for every _text_node
             */
            virtual void visitedText(const String& ) {}
            /**
             * \brief Called when the element <b>param</b> is found.
             * \param query Const reference to the ParamQuery class.
             */
            virtual void visitedParameter(const ParamQuery& query) {}

        };
    }
    /**
     * \brief Implements the <tt>templateparamlistType</tt> scaffolding.
     *
     * The following xml provides the source for the <b>templateparamlistType</b> 
     * scaffolding.
     *
     * \code{.xml}
     *  <xsd:complexType name="templateparamlistType">
     *    <xsd:sequence>
     *      <xsd:element minOccurs="0" name="param" type="paramType" maxOccurs="unbounded"/>
     *    </xsd:sequence>
     *  </xsd:complexType>
     * \endcode
     */
    class TemplateParamListQuery : public Query
    {
    public:
        TemplateParamListQuery() = default;
        TemplateParamListQuery(const TemplateParamListQuery& other) = default;

        explicit TemplateParamListQuery(Xml::Node* node) :
            Query(node)
        {
        }

        void visit(Visitors::TemplateParamListQueryVisitor *) const;
        /**
         * \brief Invokes the supplied callback on <b>param</b> elements.
         */
        void foreachParameter(const ParamQueryFunction& invoke) const;


    };
} // namespace MdDox::Doxygen
