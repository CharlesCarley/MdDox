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
        class Sect1QueryVisitor
        {
        public:
            virtual ~Sect1QueryVisitor() = default;

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
             * \brief Called when the element <b>sect2</b> is found.
             * \param query Const reference to the Sect2Query class.
             */
            virtual void visitedSect2(const Sect2Query& query) {}
            /**
             * \brief Called when the element <b>internal</b> is found.
             * \param query Const reference to the InternalS1Query class.
             */
            virtual void visitedInternal(const InternalS1Query& query) {}
            /**
             * \brief Called when the element <b>title</b> is found.
             * \param text Const reference to the internal text.
             */
            virtual void visitedTitle(const String& text) {}

        };
    }
    /**
     * \brief Implements the <tt>docSect1Type</tt> scaffolding.
     *
     * The following xml provides the source for the <b>docSect1Type</b> 
     * scaffolding.
     * \n\n
     * \code{.xml}
     *  <xsd:complexType name="docSect1Type" mixed="true">
     *    <xsd:sequence>
     *      <xsd:element name="title" type="xsd:string"/>
     *      <xsd:element minOccurs="0" name="para" type="docParaType" maxOccurs="unbounded"/>
     *      <xsd:element minOccurs="0" name="sect2" type="docSect2Type" maxOccurs="unbounded"/>
     *      <xsd:element minOccurs="0" name="internal" type="docInternalS1Type"/>
     *    </xsd:sequence>
     *    <xsd:attribute name="id" type="xsd:string"/>
     *  </xsd:complexType>
     * \endcode
     */
    class Sect1Query : public Query
    {
    public:
        Sect1Query() = default;
        Sect1Query(const Sect1Query& other) = default;

        explicit Sect1Query(Xml::Node* node) :
            Query(node)
        {
        }

        void visit(Visitors::Sect1QueryVisitor *) const;
        /**
         * \brief Provides access to the <b>id</b> attribute.
         *
         * \return The <b>id</b> enumerated value or an empty string 
         *  the value is not found. 
         */
        const String& getId(const String& notFound="") const;

        /**
         * \brief Provides access to the <b>title</b> tag's inner text.
         *
         * \return The <b>title's</b> text or the default value if the node is invalid. 
         */
        const String& getTitle(const String& notFound="") const;

        /**
         * \brief Provides access to the <b>internal</b> attribute.
         */
        void getInternal(InternalS1Query &dest) const;

        /**
         * \brief Provides access to the <b>internal</b> attribute.
         */
        InternalS1Query getInternal() const;

        /**
         * \brief Invokes the supplied callback on <b>para</b> elements.
         */
        void foreachParagraph(const ParaQueryFunction& invoke) const;

        /**
         * \brief Invokes the supplied callback on <b>sect2</b> elements.
         */
        void foreachSect2(const Sect2QueryFunction& invoke) const;


    };
} // namespace MdDox::Doxygen
