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
        class MarkupQueryVisitor
        {
        public:
            virtual ~MarkupQueryVisitor() = default;

            /**
             * \brief Callback for every _text_node
             */
            virtual void visitedText(const String& ) {}
            /**
             * \brief Called when the element <b>linebreak</b> is found.
             * \param query Const reference to the EmptyQuery class.
             */
            virtual void visitedLineBreak(const EmptyQuery& query) {}
            /**
             * \brief Called when the element <b>hruler</b> is found.
             * \param query Const reference to the EmptyQuery class.
             */
            virtual void visitedHRuler(const EmptyQuery& query) {}
            /**
             * \brief Called when the element <b>preformatted</b> is found.
             * \param query Const reference to the MarkupQuery class.
             */
            virtual void visitedPreFormatted(const MarkupQuery& query) {}
            /**
             * \brief Called when the element <b>programlisting</b> is found.
             * \param query Const reference to the ListingQuery class.
             */
            virtual void visitedProgramListing(const ListingQuery& query) {}
            /**
             * \brief Called when the element <b>indexentry</b> is found.
             * \param query Const reference to the IndexEntryQuery class.
             */
            virtual void visitedIndexEntry(const IndexEntryQuery& query) {}
            /**
             * \brief Called when the element <b>orderedlist</b> is found.
             * \param query Const reference to the ListQuery class.
             */
            virtual void visitedOrderedList(const ListQuery& query) {}
            /**
             * \brief Called when the element <b>itemizedlist</b> is found.
             * \param query Const reference to the ListQuery class.
             */
            virtual void visitedItemizedList(const ListQuery& query) {}
            /**
             * \brief Called when the element <b>simplesect</b> is found.
             * \param query Const reference to the SimpleSectQuery class.
             */
            virtual void visitedSimpleSect(const SimpleSectQuery& query) {}
            /**
             * \brief Called when the element <b>title</b> is found.
             * \param query Const reference to the TitleQuery class.
             */
            virtual void visitedTitle(const TitleQuery& query) {}
            /**
             * \brief Called when the element <b>variablelist</b> is found.
             * \param query Const reference to the VariableListQuery class.
             */
            virtual void visitedVariableList(const VariableListQuery& query) {}
            /**
             * \brief Called when the element <b>table</b> is found.
             * \param query Const reference to the TableQuery class.
             */
            virtual void visitedTable(const TableQuery& query) {}
            /**
             * \brief Called when the element <b>heading</b> is found.
             * \param query Const reference to the HeadingQuery class.
             */
            virtual void visitedHeading(const HeadingQuery& query) {}
            /**
             * \brief Called when the element <b>image</b> is found.
             * \param query Const reference to the ImageQuery class.
             */
            virtual void visitedImage(const ImageQuery& query) {}
            /**
             * \brief Called when the element <b>dotfile</b> is found.
             * \param query Const reference to the FileQuery class.
             */
            virtual void visitedDotFile(const FileQuery& query) {}
            /**
             * \brief Called when the element <b>toclist</b> is found.
             * \param query Const reference to the TocListQuery class.
             */
            virtual void visitedTocList(const TocListQuery& query) {}
            /**
             * \brief Called when the element <b>language</b> is found.
             * \param query Const reference to the LanguageQuery class.
             */
            virtual void visitedLanguage(const LanguageQuery& query) {}
            /**
             * \brief Called when the element <b>parameterlist</b> is found.
             * \param query Const reference to the ParamListQuery class.
             */
            virtual void visitedParameterList(const ParamListQuery& query) {}
            /**
             * \brief Called when the element <b>blockquote</b> is found.
             * \param query Const reference to the BlockQuoteQuery class.
             */
            virtual void visitedBlockQuote(const BlockQuoteQuery& query) {}
            /**
             * \brief Called when the element <b>parblock</b> is found.
             * \param query Const reference to the ParBlockQuery class.
             */
            virtual void visitedParBlock(const ParBlockQuery& query) {}
            /**
             * \brief Called when the element <b>verbatim</b> is found.
             * \param text Const reference to the internal text.
             */
            virtual void visitedVerbatim(const String& text) {}
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
     * \brief Implements the <tt>docMarkupType</tt> scaffolding.
     *
     * The following xml provides the source for the <b>docMarkupType</b> 
     * scaffolding.
     *
     * \code{.xml}
     *  <xsd:complexType name="docMarkupType" mixed="true">
     *    <xsd:group ref="docCmdGroup" minOccurs="0" maxOccurs="unbounded"/>
     *  </xsd:complexType>
     * \endcode
     */
    class MarkupQuery
    {
    private:
        Xml::Node* _node;

    public:
        MarkupQuery() :
            _node(nullptr)
        {
        }

        explicit MarkupQuery(Xml::Node* node) :
            _node(node)
        {
        }

        MarkupQuery(const MarkupQuery& other) = default;

        /**
         * \brief Checks to see if the internal node is usable.
         */
        bool isValid() const;

        /**
         * \brief Checks to see if the internal node has children.
         */
        bool empty() const;

        /**
         * \brief Resets the internal node pointer to null.
         */
        void reset();

        /**
         * \brief Returns the wrapped node pointer.
         */
        Xml::Node* node() const;

        /**
         * \brief Sorts the nodes in the query based on priority of type.
         */
        void sort(const SortMap& childOrder) const;

        /**
         * \brief Provides access to the node's inner text.
         * \return The text data associated with this node the default value.
         */
        const String& text(const String& def="") const;

        void visit(Visitors::MarkupQueryVisitor *) const;
        /**
         * \brief Provides access to the <b>verbatim</b> tag's inner text.
         *
         * \return The <b>verbatim's</b> text or the default value if the node is invalid. 
         */
        const String& getVerbatim(const String& notFound="") const;

        /**
         * \brief Provides access to the <b>linebreak</b> attribute.
         */
        void getLineBreak(EmptyQuery &dest) const;

        /**
         * \brief Provides access to the <b>linebreak</b> attribute.
         */
        EmptyQuery getLineBreak() const;

        /**
         * \brief Provides access to the <b>hruler</b> attribute.
         */
        void getHRuler(EmptyQuery &dest) const;

        /**
         * \brief Provides access to the <b>hruler</b> attribute.
         */
        EmptyQuery getHRuler() const;

        /**
         * \brief Provides access to the <b>preformatted</b> attribute.
         */
        void getPreFormatted(MarkupQuery &dest) const;

        /**
         * \brief Provides access to the <b>preformatted</b> attribute.
         */
        MarkupQuery getPreFormatted() const;

        /**
         * \brief Provides access to the <b>programlisting</b> attribute.
         */
        void getProgramListing(ListingQuery &dest) const;

        /**
         * \brief Provides access to the <b>programlisting</b> attribute.
         */
        ListingQuery getProgramListing() const;

        /**
         * \brief Provides access to the <b>indexentry</b> attribute.
         */
        void getIndexEntry(IndexEntryQuery &dest) const;

        /**
         * \brief Provides access to the <b>indexentry</b> attribute.
         */
        IndexEntryQuery getIndexEntry() const;

        /**
         * \brief Provides access to the <b>orderedlist</b> attribute.
         */
        void getOrderedList(ListQuery &dest) const;

        /**
         * \brief Provides access to the <b>orderedlist</b> attribute.
         */
        ListQuery getOrderedList() const;

        /**
         * \brief Provides access to the <b>itemizedlist</b> attribute.
         */
        void getItemizedList(ListQuery &dest) const;

        /**
         * \brief Provides access to the <b>itemizedlist</b> attribute.
         */
        ListQuery getItemizedList() const;

        /**
         * \brief Provides access to the <b>simplesect</b> attribute.
         */
        void getSimpleSect(SimpleSectQuery &dest) const;

        /**
         * \brief Provides access to the <b>simplesect</b> attribute.
         */
        SimpleSectQuery getSimpleSect() const;

        /**
         * \brief Provides access to the <b>title</b> attribute.
         */
        void getTitle(TitleQuery &dest) const;

        /**
         * \brief Provides access to the <b>title</b> attribute.
         */
        TitleQuery getTitle() const;

        /**
         * \brief Provides access to the <b>variablelist</b> attribute.
         */
        void getVariableList(VariableListQuery &dest) const;

        /**
         * \brief Provides access to the <b>variablelist</b> attribute.
         */
        VariableListQuery getVariableList() const;

        /**
         * \brief Provides access to the <b>table</b> attribute.
         */
        void getTable(TableQuery &dest) const;

        /**
         * \brief Provides access to the <b>table</b> attribute.
         */
        TableQuery getTable() const;

        /**
         * \brief Provides access to the <b>heading</b> attribute.
         */
        void getHeading(HeadingQuery &dest) const;

        /**
         * \brief Provides access to the <b>heading</b> attribute.
         */
        HeadingQuery getHeading() const;

        /**
         * \brief Provides access to the <b>image</b> attribute.
         */
        void getImage(ImageQuery &dest) const;

        /**
         * \brief Provides access to the <b>image</b> attribute.
         */
        ImageQuery getImage() const;

        /**
         * \brief Provides access to the <b>dotfile</b> attribute.
         */
        void getDotFile(FileQuery &dest) const;

        /**
         * \brief Provides access to the <b>dotfile</b> attribute.
         */
        FileQuery getDotFile() const;

        /**
         * \brief Provides access to the <b>toclist</b> attribute.
         */
        void getTocList(TocListQuery &dest) const;

        /**
         * \brief Provides access to the <b>toclist</b> attribute.
         */
        TocListQuery getTocList() const;

        /**
         * \brief Provides access to the <b>language</b> attribute.
         */
        void getLanguage(LanguageQuery &dest) const;

        /**
         * \brief Provides access to the <b>language</b> attribute.
         */
        LanguageQuery getLanguage() const;

        /**
         * \brief Provides access to the <b>parameterlist</b> attribute.
         */
        void getParameterList(ParamListQuery &dest) const;

        /**
         * \brief Provides access to the <b>parameterlist</b> attribute.
         */
        ParamListQuery getParameterList() const;

        /**
         * \brief Provides access to the <b>blockquote</b> attribute.
         */
        void getBlockQuote(BlockQuoteQuery &dest) const;

        /**
         * \brief Provides access to the <b>blockquote</b> attribute.
         */
        BlockQuoteQuery getBlockQuote() const;

        /**
         * \brief Provides access to the <b>parblock</b> attribute.
         */
        void getParBlock(ParBlockQuery &dest) const;

        /**
         * \brief Provides access to the <b>parblock</b> attribute.
         */
        ParBlockQuery getParBlock() const;

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

    inline bool MarkupQuery::isValid() const
    {
        return _node != nullptr;
    }

    inline void MarkupQuery::reset()
    {
        _node = nullptr;
    }

    inline Xml::Node* MarkupQuery::node() const
    {
        return _node;
    }

    inline bool MarkupQuery::empty() const
    {
        return _node? !_node->hasChildren() : true;
    }

} // namespace MdDox::Doxygen
