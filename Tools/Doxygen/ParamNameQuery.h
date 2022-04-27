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

#include "DoxParamDir.h"

namespace MdDox::Doxygen
{
    namespace Visitors
    {
        class ParamNameQueryVisitor
        {
        public:
            virtual ~ParamNameQueryVisitor() = default;

            /**
             * \brief Callback for every _text_node
             */
            virtual void visitedText(const String& ) {}
            /**
             * \brief Called when the element <b>ref</b> is found.
             * \param query Const reference to the RefTextQuery class.
             */
            virtual void visitedRef(const RefTextQuery& query) {}

        };
    }
    /**
     * \brief Implements the <tt>docParamName</tt> scaffolding.
     *
     * The following xml provides the source for the <b>docParamName</b> 
     * scaffolding.
     * \n\n
     * \code{.xml}
     *  <xsd:complexType name="docParamName" mixed="true">
     *    <xsd:sequence>
     *      <xsd:element minOccurs="0" name="ref" type="refTextType" maxOccurs="1"/>
     *    </xsd:sequence>
     *    <xsd:attribute name="direction" type="DoxParamDir" use="optional"/>
     *  </xsd:complexType>
     * \endcode
     */
    class ParamNameQuery : public Query
    {
    public:
        ParamNameQuery() = default;
        ParamNameQuery(const ParamNameQuery& other) = default;

        explicit ParamNameQuery(Xml::Node* node) :
            Query(node)
        {
        }

        void visit(Visitors::ParamNameQueryVisitor *) const;
        /**
         * \brief Provides access to the <b>direction</b> element.
         *
         * \return The <b>direction</b> enumerated value or -1 if the value is not found. 
         */
        DoxParamDirEnum getDirection() const;

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
