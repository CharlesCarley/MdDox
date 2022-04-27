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
        class InternalS3QueryVisitor
        {
        public:
            virtual ~InternalS3QueryVisitor() = default;

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
             * \brief Called when the element <b>sect3</b> is found.
             * \param query Const reference to the Sect4Query class.
             */
            virtual void visitedSect3(const Sect4Query& query) {}

        };
    }
    /**
     * \brief Implements the <tt>docInternalS3Type</tt> scaffolding.
     *
     * The following xml provides the source for the <b>docInternalS3Type</b> 
     * scaffolding.
     * \n\n
     * \code{.xml}
     *  <xsd:complexType name="docInternalS3Type" mixed="true">
     *    <xsd:sequence>
     *      <xsd:element minOccurs="0" name="para" type="docParaType" maxOccurs="unbounded"/>
     *      <xsd:element minOccurs="0" name="sect3" type="docSect4Type" maxOccurs="unbounded"/>
     *    </xsd:sequence>
     *  </xsd:complexType>
     * \endcode
     */
    class InternalS3Query : public Query
    {
    public:
        InternalS3Query() = default;
        InternalS3Query(const InternalS3Query& other) = default;

        explicit InternalS3Query(Xml::Node* node) :
            Query(node)
        {
        }

        void visit(Visitors::InternalS3QueryVisitor *) const;
        /**
         * \brief Invokes the supplied callback on <b>para</b> elements.
         */
        void foreachParagraph(const ParaQueryFunction& invoke) const;

        /**
         * \brief Invokes the supplied callback on <b>sect3</b> elements.
         */
        void foreachSect3(const Sect4QueryFunction& invoke) const;


    };
} // namespace MdDox::Doxygen
