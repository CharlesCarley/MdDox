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
#include "Doxygen/ParaQuery.h"
#include "Utils/Path.h"

namespace MdDox
{
    class DocumentWriter;

    class ParagraphWriter final : public Doxygen::Visitors::ParaQueryVisitor
    {
    private:
        DocumentWriter*    _writer;
        OStream*           _stream;
        OutputStringStream _out;

        void visitedText(const String&) override;

        void visitedLineBreak(const Doxygen::EmptyQuery& query) override;

        void visitedHRuler(const Doxygen::EmptyQuery& query) override;

        void visitedPreFormatted(const Doxygen::MarkupQuery& query) override;

        void visitedProgramListing(const Doxygen::ListingQuery& query) override;

        void visitedOrderedList(const Doxygen::ListQuery& query) override;

        void visitedItemizedList(const Doxygen::ListQuery& query) override;

        void visitedSimpleSect(const Doxygen::SimpleSectQuery& query) override;

        void visitedTitle(const Doxygen::TitleQuery& query) override;

        void visitedVariableList(const Doxygen::VariableListQuery& query) override;

        void visitedTable(const Doxygen::TableQuery& query) override;

        void visitedHeading(const Doxygen::HeadingQuery& query) override;

        void visitedImage(const Doxygen::ImageQuery& query) override;

        void visitedDotFile(const Doxygen::FileQuery& query) override;

        void visitedTocList(const Doxygen::TocListQuery& query) override;

        void visitedLanguage(const Doxygen::LanguageQuery& query) override;

        void visitedParameterList(const Doxygen::ParamListQuery& query) override;

        void visitedBlockQuote(const Doxygen::BlockQuoteQuery& query) override;

        void visitedParBlock(const Doxygen::ParBlockQuery& query) override;

        void visitedULink(const Doxygen::UrlLinkQuery& query) override;

        void visitedBold(const Doxygen::MarkupQuery& query) override;

        void visitedEmphasis(const Doxygen::MarkupQuery& query) override;

        void visitedComputerOutput(const Doxygen::MarkupQuery& query) override;

        void visitedCenter(const Doxygen::MarkupQuery& query) override;

        void visitedSmall(const Doxygen::MarkupQuery& query) override;

        void visitedAnchor(const Doxygen::AnchorQuery& query) override;

        void visitedRef(const Doxygen::RefTextQuery& query) override;

        void visitedSect(const Doxygen::EmptyQuery& query) override;

        void visitedParagraph(const Doxygen::ParaQuery& query) override;

        void visitedPart(const Doxygen::EmptyQuery& query) override;

        void visitedProp(const Doxygen::EmptyQuery& query) override;

        void visitedDot(const String& text) override;

    public:
        ParagraphWriter(DocumentWriter* writer, OStream* out);

        void write(const Doxygen::ParaQuery& paragraph);
    };

}  // namespace MdDox
