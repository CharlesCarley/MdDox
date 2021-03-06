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
#include "MdDoxTree/ParagraphWriter.h"
#include "Doxygen/BlockQuoteQuery.h"
#include "Doxygen/CodeLineQuery.h"
#include "Doxygen/DoxImageKind.h"
#include "Doxygen/DoxRefKind.h"
#include "Doxygen/HeadingQuery.h"
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
#include "MarkupQueryWriter.h"
#include "MdDoxTree/DocumentWriter.h"
#include "MdDoxTree/ParameterListWriter.h"
#include "MdDoxTree/SiteBuilder.h"
#include "MdDoxTree/WriteUtils.h"
#include "Utils/Path.h"

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
        WRITE_STUB(_writer, _out);
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
        case Doxygen::DSSK_MAX:
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
        _writer->lineBreak(_out);
    }

    void ParagraphWriter::visitedTitle(const Doxygen::TitleQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void ParagraphWriter::visitedVariableList(const Doxygen::VariableListQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void ParagraphWriter::visitedTable(const Doxygen::TableQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void ParagraphWriter::visitedHeading(const Doxygen::HeadingQuery& query)
    {
        _writer->addSection(_out, query.text(), (int)query.getLevel());
    }

    void ParagraphWriter::visitedImage(const Doxygen::ImageQuery& query)
    {
        switch (query.getType())
        {
        case Doxygen::DIK_HTML:
            _writer->image(_out, query.getName());
            break;
        case Doxygen::DIK_LATEX:
            WRITE_STUB_TEXT(_writer, _out, "LATEX");
            break;
        case Doxygen::DIK_RTF:
            WRITE_STUB_TEXT(_writer, _out, "RTF");
            break;
        case Doxygen::DIK_MAX:
        case Doxygen::DIK_INVALID:
        default:
            WRITE_STUB_TEXT(_writer, _out, "UNKNOWN");
            break;
        }
    }

    void ParagraphWriter::visitedDotFile(const Doxygen::FileQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void ParagraphWriter::visitedTocList(const Doxygen::TocListQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void ParagraphWriter::visitedLanguage(const Doxygen::LanguageQuery& query)
    {
        WRITE_STUB(_writer, _out);
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
        WRITE_STUB(_writer, _out);
    }

    void ParagraphWriter::visitedULink(const Doxygen::UrlLinkQuery& query)
    {
        _writer->linkUrl(_out, query.text(), query.getUrl());
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
        WRITE_STUB(_writer, _out);
    }

    void ParagraphWriter::visitedSmall(const Doxygen::MarkupQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void ParagraphWriter::visitedAnchor(const Doxygen::AnchorQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void ParagraphWriter::visitedRef(const Doxygen::RefTextQuery& query)
    {
        switch (query.getKindRef())
        {
        case Doxygen::DRK_COMPOUND:;
            _writer->linkRef(_out, 0, query.getRefId(), query.text());
            break;
        case Doxygen::DRK_MEMBER:
            _writer->linkRef(_out, 1, query.getRefId(), query.text());
            break;
        case Doxygen::DRK_MAX:
        case Doxygen::DRK_INVALID:
        default:
            WRITE_STUB_TEXT(_writer, _out, "UNKNOWN");
            break;
        }
    }

    void ParagraphWriter::visitedSect(const Doxygen::EmptyQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void ParagraphWriter::visitedParagraph(const Doxygen::ParaQuery& query)
    {
        ParagraphWriter pw(_writer, _stream);
        pw.write(query);
    }

    void ParagraphWriter::visitedPart(const Doxygen::EmptyQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void ParagraphWriter::visitedProp(const Doxygen::EmptyQuery& query)
    {
        WRITE_STUB(_writer, _out);
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
