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
        class TocItemQueryVisitor
        {
        public:
            virtual ~TocItemQueryVisitor() = default;

            /**
             * \brief Callback for every _text_node
             */
            virtual void visitedText(const String& ) {}
            /**
             * \brief Called when the element <b>ulink</b> is found.
             * \param query Const reference to the UrlLinkQuery class.
             */
            virtual void visitedULink(const UrlLinkQuery& query) {}
            /**
             * \brief Called when the element <b>bold</b> is found.
             * \param query Const reference to the MarkupQuery class.
             */
            virtual void visitedBold(const MarkupQuery& query) {}
            /**
             * \brief Called when the element <b>emphasis</b> is found.
             * \param query Const reference to the MarkupQuery class.
             */
            virtual void visitedEmphasis(const MarkupQuery& query) {}
            /**
             * \brief Called when the element <b>computeroutput</b> is found.
             * \param query Const reference to the MarkupQuery class.
             */
            virtual void visitedComputerOutput(const MarkupQuery& query) {}
            /**
             * \brief Called when the element <b>center</b> is found.
             * \param query Const reference to the MarkupQuery class.
             */
            virtual void visitedCenter(const MarkupQuery& query) {}
            /**
             * \brief Called when the element <b>small</b> is found.
             * \param query Const reference to the MarkupQuery class.
             */
            virtual void visitedSmall(const MarkupQuery& query) {}
            /**
             * \brief Called when the element <b>anchor</b> is found.
             * \param query Const reference to the AnchorQuery class.
             */
            virtual void visitedAnchor(const AnchorQuery& query) {}
            /**
             * \brief Called when the element <b>ref</b> is found.
             * \param query Const reference to the RefTextQuery class.
             */
            virtual void visitedRef(const RefTextQuery& query) {}
            /**
             * \brief Called when the element <b>sect</b> is found.
             * \param query Const reference to the EmptyQuery class.
             */
            virtual void visitedSect(const EmptyQuery& query) {}
            /**
             * \brief Called when the element <b>registered</b> is found.
             * \param query Const reference to the EmptyQuery class.
             */
            virtual void visitedRegistered(const EmptyQuery& query) {}
            /**
             * \brief Called when the element <b>para</b> is found.
             * \param query Const reference to the ParaQuery class.
             */
            virtual void visitedParagraph(const ParaQuery& query) {}
            /**
             * \brief Called when the element <b>part</b> is found.
             * \param query Const reference to the EmptyQuery class.
             */
            virtual void visitedPart(const EmptyQuery& query) {}
            /**
             * \brief Called when the element <b>prop</b> is found.
             * \param query Const reference to the EmptyQuery class.
             */
            virtual void visitedProp(const EmptyQuery& query) {}
            /**
             * \brief Called when the element <b>lang</b> is found.
             * \param query Const reference to the EmptyQuery class.
             */
            virtual void visitedLang(const EmptyQuery& query) {}
            /**
             * \brief Called when the element <b>dot</b> is found.
             * \param text Const reference to the internal text.
             */
            virtual void visitedDot(const String& text) {}

        };
    }
    /**
     * \brief Implements the <tt>docTocItemType</tt> scaffolding.
     *
     * The following xml provides the source for the <b>docTocItemType</b> 
     * scaffolding.
     * \n\n
     * \code{.xml}
     *  <xsd:complexType name="docTocItemType" mixed="true">
     *    <xsd:group ref="docTitleCmdGroup" minOccurs="0" maxOccurs="unbounded"/>
     *    <xsd:attribute name="id" type="xsd:string"/>
     *  </xsd:complexType>
     * \endcode
     */
    class TocItemQuery : public Query
    {
    public:
        TocItemQuery() = default;
        TocItemQuery(const TocItemQuery& other) = default;

        explicit TocItemQuery(Xml::Node* node) :
            Query(node)
        {
        }

        void visit(Visitors::TocItemQueryVisitor *) const;
        /**
         * \brief Provides access to the <b>id</b> attribute.
         *
         * \return The <b>id</b> enumerated value or an empty string 
         *  the value is not found. 
         */
        const String& getId(const String& notFound="") const;

        /**
         * \brief Provides access to the <b>dot</b> tag's inner text.
         *
         * \return The <b>dot's</b> text or the default value if the node is invalid. 
         */
        const String& getDot(const String& notFound="") const;

        /**
         * \brief Provides access to the <b>ulink</b> attribute.
         */
        void getULink(UrlLinkQuery &dest) const;

        /**
         * \brief Provides access to the <b>ulink</b> attribute.
         */
        UrlLinkQuery getULink() const;

        /**
         * \brief Provides access to the <b>bold</b> attribute.
         */
        void getBold(MarkupQuery &dest) const;

        /**
         * \brief Provides access to the <b>bold</b> attribute.
         */
        MarkupQuery getBold() const;

        /**
         * \brief Provides access to the <b>emphasis</b> attribute.
         */
        void getEmphasis(MarkupQuery &dest) const;

        /**
         * \brief Provides access to the <b>emphasis</b> attribute.
         */
        MarkupQuery getEmphasis() const;

        /**
         * \brief Provides access to the <b>computeroutput</b> attribute.
         */
        void getComputerOutput(MarkupQuery &dest) const;

        /**
         * \brief Provides access to the <b>computeroutput</b> attribute.
         */
        MarkupQuery getComputerOutput() const;

        /**
         * \brief Provides access to the <b>center</b> attribute.
         */
        void getCenter(MarkupQuery &dest) const;

        /**
         * \brief Provides access to the <b>center</b> attribute.
         */
        MarkupQuery getCenter() const;

        /**
         * \brief Provides access to the <b>small</b> attribute.
         */
        void getSmall(MarkupQuery &dest) const;

        /**
         * \brief Provides access to the <b>small</b> attribute.
         */
        MarkupQuery getSmall() const;

        /**
         * \brief Provides access to the <b>anchor</b> attribute.
         */
        void getAnchor(AnchorQuery &dest) const;

        /**
         * \brief Provides access to the <b>anchor</b> attribute.
         */
        AnchorQuery getAnchor() const;

        /**
         * \brief Provides access to the <b>ref</b> attribute.
         */
        void getRef(RefTextQuery &dest) const;

        /**
         * \brief Provides access to the <b>ref</b> attribute.
         */
        RefTextQuery getRef() const;

        /**
         * \brief Provides access to the <b>sect</b> attribute.
         */
        void getSect(EmptyQuery &dest) const;

        /**
         * \brief Provides access to the <b>sect</b> attribute.
         */
        EmptyQuery getSect() const;

        /**
         * \brief Provides access to the <b>registered</b> attribute.
         */
        void getRegistered(EmptyQuery &dest) const;

        /**
         * \brief Provides access to the <b>registered</b> attribute.
         */
        EmptyQuery getRegistered() const;

        /**
         * \brief Provides access to the <b>para</b> attribute.
         */
        void getParagraph(ParaQuery &dest) const;

        /**
         * \brief Provides access to the <b>para</b> attribute.
         */
        ParaQuery getParagraph() const;

        /**
         * \brief Provides access to the <b>part</b> attribute.
         */
        void getPart(EmptyQuery &dest) const;

        /**
         * \brief Provides access to the <b>part</b> attribute.
         */
        EmptyQuery getPart() const;

        /**
         * \brief Provides access to the <b>prop</b> attribute.
         */
        void getProp(EmptyQuery &dest) const;

        /**
         * \brief Provides access to the <b>prop</b> attribute.
         */
        EmptyQuery getProp() const;

        /**
         * \brief Provides access to the <b>lang</b> attribute.
         */
        void getLang(EmptyQuery &dest) const;

        /**
         * \brief Provides access to the <b>lang</b> attribute.
         */
        EmptyQuery getLang() const;


    };
} // namespace MdDox::Doxygen
