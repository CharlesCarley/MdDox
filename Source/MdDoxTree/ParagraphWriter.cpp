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
#include "ParagraphWriter.h"
#include "Doxygen/BlockQuoteQuery.h"
#include "Doxygen/CodeLineQuery.h"
#include "Doxygen/DoxImageKind.h"
#include "Doxygen/DoxRefKind.h"
#include "Doxygen/HighlightQuery.h"
#include "Doxygen/ImageQuery.h"
#include "Doxygen/ListItemQuery.h"
#include "Doxygen/ListQuery.h"
#include "Doxygen/ListingQuery.h"
#include "Doxygen/MarkupQuery.h"
#include "Doxygen/ParamListQuery.h"
#include "Doxygen/RefTextQuery.h"
#include "Doxygen/SimpleSectQuery.h"
#include "Doxygen/UrlLinkQuery.h"
#include "MdDoxTree/DocumentWriter.h"
#include "MdDoxTree/SiteBuilder.h"
#include "ParameterListWriter.h"
#include "Utils/Path.h"
#include "WriteUtils.h"

namespace MdDox
{
    ParagraphWriter::ParagraphWriter(DocumentWriter* writer, OStream* out) :
        _writer(writer),
        _stream(out)
    {
    }

    void ParagraphWriter::write(const Doxygen::ParaQuery& paragraph)
    {
        paragraph.visit(this);
        syncStream(_stream, _out);
    }

    void ParagraphWriter::visitedText(const String& text)
    {
        _writer->inlineText(_out, text);
    }

    void ParagraphWriter::visitedLineBreak(const Doxygen::EmptyQuery&)
    {
        _writer->lineBreak(_out);
    }

    void ParagraphWriter::visitedHRuler(const Doxygen::EmptyQuery&)
    {
        _writer->horizontalRule(_out);
    }

    void ParagraphWriter::visitedPreFormatted(const Doxygen::MarkupQuery& query)
    {
        _writer->boldText(_out, "ParagraphWriter.visitedPreFormatted");
        _writer->lineBreak(_out);
    }

    void ParagraphWriter::visitedProgramListing(const Doxygen::ListingQuery& query)
    {
        class HighlightQueryVisitor final : public Doxygen::Visitors::HighlightQueryVisitor
        {
        private:
            OutputStringStream _oss;

        public:
            ~HighlightQueryVisitor() override = default;

            void visitedText(const String& text) override
            {
                String cpy;
                StringUtils::replaceAll(cpy, text, "&gt;", ">");
                StringUtils::replaceAll(cpy, cpy, "&lt;", "<");
                StringUtils::replaceAll(cpy, cpy, "&quot;", "\"");
                StringUtils::replaceAll(cpy, cpy, "&apos;", "'");
                StringUtils::replaceAll(cpy, cpy, "&amp;", "&");
                _oss << cpy;
            }
            void visitedSp(const Doxygen::SpQuery&) override
            {
                _oss << ' ';
            }

            void visitedRef(const Doxygen::RefTextQuery& text) override
            {
                _oss << text.text();
            }

            String toString() const
            {
                return _oss.str();
            }

            void newLine()
            {
                _oss << std::endl;
            }
        };

        HighlightQueryVisitor hqv;

        query.foreachCodeLine(
            [&hqv](const Doxygen::CodeLineQuery& clq)
            {
                clq.foreachHighlight(
                    [&hqv](const Doxygen::HighlightQuery& highlight)
                    { highlight.visit(&hqv); });
                hqv.newLine();
            });

        _writer->code(_out, hqv.toString(), PathUtil(query.getFileName()).primaryExtension());
    }

    void ParagraphWriter::visitedOrderedList(const Doxygen::ListQuery& query)
    {
        visitedItemizedList(query);
    }

    void ParagraphWriter::visitedItemizedList(const Doxygen::ListQuery& query)
    {
        _writer->beginList(_out);
        OStream* stream = &_out;
        query.foreachListItem(
            [this, stream](const Doxygen::ListItemQuery& liq)
            {
                _writer->beginListItem(_out);

                liq.foreachParagraph(
                    [this, stream](const Doxygen::ParaQuery& para)
                    {
                        ParagraphWriter pw(_writer, stream);
                        pw.write(para);
                    });

                _writer->endListItem(_out);
            });
        _writer->endList(_out);
    }

    void ParagraphWriter::visitedSimpleSect(const Doxygen::SimpleSectQuery& query)
    {
        constexpr int depth = 4;

        switch (query.getKind())
        {
        case Doxygen::DSSK_SEE:
            _writer->beginSection(_out, "See", depth);
            break;
        case Doxygen::DSSK_VERSION:
            _writer->beginSection(_out, "Version", depth);
            break;
        case Doxygen::DSSK_RETURN:
            _writer->beginSection(_out, "Returns", depth);
            break;
        case Doxygen::DSSK_AUTHORS:
            _writer->beginSection(_out, "Authors", depth);
            break;
        case Doxygen::DSSK_AUTHOR:
            _writer->beginSection(_out, "Author", depth);
            break;
        case Doxygen::DSSK_SINCE:
            _writer->beginSection(_out, "Since", depth);
            break;
        case Doxygen::DSSK_NOTE:
            _writer->beginSection(_out, "Note", depth);
            break;
        case Doxygen::DSSK_ATTENTION:
            _writer->beginSection(_out, "Attention", depth);
            break;
        case Doxygen::DSSK_DATE:
            _writer->beginSection(_out, "Date", depth);
            break;
        case Doxygen::DSSK_WARNING:
            _writer->beginSection(_out, "Warning", depth);
            break;
        case Doxygen::DSSK_PRE:
            _writer->beginSection(_out, "Pre", depth);
            break;
        case Doxygen::DSSK_POST:
            _writer->beginSection(_out, "Post", depth);
            break;
        case Doxygen::DSSK_COPYRIGHT:
            _writer->beginSection(_out, "Copyright", depth);
            break;
        case Doxygen::DSSK_INVARIANT:
            _writer->beginSection(_out, "Invariant", depth);
            break;
        case Doxygen::DSSK_REMARK:
            _writer->beginSection(_out, "Remarks", depth);
            break;
        case Doxygen::DSSK_PAR:
            _writer->beginSection(_out, "Parent", depth);
            break;
        case Doxygen::DSSK_RCS:
            _writer->beginSection(_out, "RCS", depth);
            break;
        case Doxygen::DSSK_INVALID:
        default:
            break;
        }

        query.foreachParagraph(
            [this](const Doxygen::ParaQuery& para)
            {
                ParagraphWriter obj(_writer, &_out);
                obj.write(para);
            });
    }

    void ParagraphWriter::visitedTitle(const Doxygen::TitleQuery& query)
    {
        _writer->boldText(_out, "ParagraphWriter.visitedTitle");
        _writer->lineBreak(_out);
    }

    void ParagraphWriter::visitedVariableList(const Doxygen::VariableListQuery& query)
    {
        _writer->boldText(_out, "ParagraphWriter.visitedVariableList");
        _writer->lineBreak(_out);
    }

    void ParagraphWriter::visitedTable(const Doxygen::TableQuery& query)
    {
        _writer->boldText(_out, "ParagraphWriter.visitedTable");
        _writer->lineBreak(_out);
    }

    void ParagraphWriter::visitedHeading(const Doxygen::HeadingQuery& query)
    {
        _writer->boldText(_out, "ParagraphWriter.visitedHeading");
        _writer->lineBreak(_out);
    }

    void ParagraphWriter::visitedImage(const Doxygen::ImageQuery& query)
    {
        const Doxygen::DoxImageKindEnum imk = query.getType();

        switch (imk)
        {
        case Doxygen::DIK_HTML:
            _writer->image(_out, query.getName());
            break;
        case Doxygen::DIK_LATEX:
            _writer->boldText(_out, "ParagraphWriter.visitedImage.LATEX");
            _writer->lineBreak(_out);
            break;
        case Doxygen::DIK_RTF:
            _writer->boldText(_out, "ParagraphWriter.visitedImage.RTF");
            _writer->lineBreak(_out);
            break;
        case Doxygen::DIK_INVALID:
        default:
            break;
        }
    }

    void ParagraphWriter::visitedDotFile(const Doxygen::FileQuery& query)
    {
        _writer->boldText(_out, "ParagraphWriter.visitedDotFile");
        _writer->lineBreak(_out);
    }

    void ParagraphWriter::visitedTocList(const Doxygen::TocListQuery& query)
    {
        _writer->boldText(_out, "ParagraphWriter.visitedTocList");
        _writer->lineBreak(_out);
    }

    void ParagraphWriter::visitedLanguage(const Doxygen::LanguageQuery& query)
    {
        _writer->boldText(_out, "ParagraphWriter.visitedLanguage");
        _writer->lineBreak(_out);
    }

    void ParagraphWriter::visitedParameterList(const Doxygen::ParamListQuery& query)
    {
        ParameterListWriter pl(_writer, &_out);
        pl.write(query);
    }

    void ParagraphWriter::visitedBlockQuote(const Doxygen::BlockQuoteQuery& query)
    {
        _writer->beginBlockQuote(_out);

        OStream* stream = &_out;

        query.foreachParagraph(
            [this, stream](const Doxygen::ParaQuery& para)
            {
                ParagraphWriter pw(_writer, stream);
                pw.write(para);
            });

        _writer->endBlockQuote(_out);
    }

    void ParagraphWriter::visitedParBlock(const Doxygen::ParBlockQuery& query)
    {
        _writer->boldText(_out, "ParagraphWriter.visitedParBlock");
        _writer->lineBreak(_out);
    }

    void ParagraphWriter::visitedULink(const Doxygen::UrlLinkQuery& query)
    {
        _writer->linkText(_out, query.text(), query.getUrl());
    }

    void ParagraphWriter::visitedBold(const Doxygen::MarkupQuery& query)
    {
        _writer->boldText(_out, query.text());
    }

    void ParagraphWriter::visitedEmphasis(const Doxygen::MarkupQuery& query)
    {
        _writer->italicText(_out, query.text());
    }

    void ParagraphWriter::visitedComputerOutput(const Doxygen::MarkupQuery& query)
    {
        _writer->typewriterText(_out, query.text());
    }

    void ParagraphWriter::visitedCenter(const Doxygen::MarkupQuery& query)
    {
        _writer->boldText(_out, "ParagraphWriter.visitedCenter");
        _writer->lineBreak(_out);
    }

    void ParagraphWriter::visitedSmall(const Doxygen::MarkupQuery& query)
    {
        _writer->boldText(_out, "ParagraphWriter.visitedSmall");
        _writer->lineBreak(_out);
    }

    void ParagraphWriter::visitedAnchor(const Doxygen::AnchorQuery& query)
    {
        _writer->boldText(_out, "ParagraphWriter.visitedAnchor");
        _writer->lineBreak(_out);
    }

    void ParagraphWriter::visitedRef(const Doxygen::RefTextQuery& query)
    {
        Doxygen::DoxRefKindEnum rk = query.getKindRef();
        switch (rk)
        {
        case Doxygen::DRK_COMPOUND:;
            _writer->linkPage(_out, query.text(), query.getRefId());
            break;
        case Doxygen::DRK_MEMBER:
            _writer->linkHeading(_out, query.text(), query.getRefId());
            break;
        case Doxygen::DRK_INVALID:
        default:
            _writer->boldText(_out, StringCombine("ParagraphWriter.visitedRef.", rk));
            _writer->lineBreak(_out);
            break;
        }
    }

    void ParagraphWriter::visitedSect(const Doxygen::EmptyQuery& query)
    {
        _writer->boldText(_out, "ParagraphWriter.visitedSect");
        _writer->lineBreak(_out);
    }

    void ParagraphWriter::visitedParagraph(const Doxygen::ParaQuery& query)
    {
        ParagraphWriter pw(_writer, _stream);
        pw.write(query);
    }

    void ParagraphWriter::visitedPart(const Doxygen::EmptyQuery& query)
    {
        _writer->boldText(_out, "ParagraphWriter.visitedPart");
        _writer->lineBreak(_out);
    }

    void ParagraphWriter::visitedProp(const Doxygen::EmptyQuery& query)
    {
        _writer->boldText(_out, "ParagraphWriter.visitedProp");
        _writer->lineBreak(_out);
    }

    void ParagraphWriter::visitedDot(const String& text)
    {
        if (!text.empty())
        {
            String cpy;
            StringUtils::replaceAll(cpy, text, "&gt;", ">");
            StringUtils::replaceAll(cpy, cpy, "&lt;", "<");
            StringUtils::replaceAll(cpy, cpy, "&quot;", "\"");
            StringUtils::replaceAll(cpy, cpy, "&apos;", "'");
            StringUtils::replaceAll(cpy, cpy, "&amp;", "&");

            const String file = SiteBuilder::get().registerDot(cpy);

            if (!file.empty())
                _writer->image(_out, file);

            _writer->lineBreak(_out);
        }
    }

}  // namespace MdDox
