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
#include "HtmlDocumentWriter.h"
#include "HtmlCommandWriter.h"
#include "Link.h"
#include "MdDoxTree/HashUtils.h"
#include "MdDoxTree/IconSet.h"
#include "MdDoxTree/ParagraphWriter.h"
#include "MdDoxTree/SiteBuilder.h"
#include "ReferenceIdentifiers.h"

namespace MdDox
{
    HtmlDocumentWriter::HtmlDocumentWriter() :
        _sectionDepth(1)
    {
    }

    HtmlDocumentWriter::~HtmlDocumentWriter()
    {
    }

    void HtmlDocumentWriter::beginDocument(OStream& output, const String& title)
    {
        const SiteBuilder& builder = SiteBuilder::get();

        const String style = builder.styleSheet.empty() ? "style.css" : builder.styleSheet;

        output << R"(<!DOCTYPE html>)" << std::endl;
        output << R"(<html>)" << std::endl;
        output << "<head>" << std::endl;
        output << R"(<meta http-equiv="Content-Type" content="text/xhtml;charset=UTF-8"/>)" << std::endl;
        output << R"(<meta http-equiv="X-UA-Compatible" content="IE=9" />)" << std::endl;
        output << R"(<meta http-equiv="Content-Type" content="text/xhtml;charset=UTF-8"/>)" << std::endl;
        output << R"(<meta name="robots" content="noindex" />)" << std::endl;
        output << R"(<meta name="generator" content="MdDox"/>)" << std::endl;
        output << R"(<meta name="viewport" content="width=device-width, initial-scale=1"/>)" << std::endl;
        output << "<link href=\"" << style << R"(" rel="stylesheet" type="text/css"/>)" << std::endl;
        output << "<title>" << title << "</title>" << std::endl;
        output << "</head>" << std::endl;
        output << "<body>" << std::endl;

        Html::beginDivSection(output, "document");
        Html::beginDivSection(output, "document-header");
        Html::anchor(output, HashUtils::cleanTitle(title));

        Html::heading(output, 1, title);
    }

    void HtmlDocumentWriter::endDocument(OStream& output, const String& docSource)
    {
        if (SiteBuilder::get().showDebug && !docSource.empty())
        {
            const PathUtil util(docSource);

            Html::lineBreak(output);
            Html::beginBlockQuote(output);

            Html::embedContent(output, IconSet::fileName(ICO_DEBUG));
            Html::inlineText(output, "The following sources were used to generate this page.");
            Html::lineBreak(output);
            Html::embedLinkContentPoint(output,
                                        IconSet::fileName(ICO_CODE_BEHIND),
                                        StringCombine("../xml/", util.stem(), ".xml#L1"),
                                        util.fileName());
            Html::lineBreak(output);
            Html::embedLinkContentPoint(output,
                                        IconSet::fileName(ICO_CODE_BEHIND),
                                        "../xml/compound.xsd#L1",
                                        "compound.xsd",
                                        false);
            Html::endBlockQuote(output);
        }

        Html::endDivSection(output, "document-content");
        Html::endDivSection(output, "document");

        output << "</body>" << std::endl;
        output << "</html>" << std::endl;
    }

    void HtmlDocumentWriter::beginNavigationBar(OStream& output)
    {
        Html::beginDivSection(output, "navigation-bar");
    }

    void HtmlDocumentWriter::endNavigationBar(OStream& output)
    {
        Html::endDivSection(output, "navigation-bar");
    }

    void HtmlDocumentWriter::endDocumentHeader(OStream& output)
    {
        Html::endDivSection(output, "document-header");
        Html::beginDivSection(output, "document-content");
    }

    void HtmlDocumentWriter::addSection(OStream& output, const String& title, int depth)
    {
        Html::anchor(output, HashUtils::cleanTitle(title));
        Html::heading(output, depth, title);
    }

    void HtmlDocumentWriter::writeSection(OStream& output, const String& title) const
    {
        Html::anchor(output, HashUtils::cleanTitle(title));
        Html::heading(output, _sectionDepth, title);
    }

    void HtmlDocumentWriter::beginSection(OStream& output, const String& title, const int depth)
    {
        if (depth < 0)
            _sectionDepth++;
        else
            _sectionDepth = depth;

        if (_sectionDepth > 6)
            _sectionDepth = 6;

        writeSection(output, title);
    }

    void HtmlDocumentWriter::endSection(OStream& output)
    {
        --_sectionDepth;
        if (_sectionDepth < 0)
            _sectionDepth = 0;
    }

    void HtmlDocumentWriter::beginSectionBar(OStream& output)
    {
        Html::beginDivSection(output, "section-bar");
    }

    void HtmlDocumentWriter::endSectionBar(OStream& output)
    {
        Html::endDivSection(output, "section-bar");
    }

    void HtmlDocumentWriter::beginMethod(OStream& output, const String& title, const String& id)
    {
        _sectionDepth++;
        Html::heading(output, _sectionDepth, title);
    }

    void HtmlDocumentWriter::endMethod(OStream& output)
    {
        endSection(output);
    }

    void HtmlDocumentWriter::beginList(OStream& output, const String& header)
    {
        if (!header.empty())
        {
            Html::beginDivSection(output, "list-heading");
            Html::boldText(output, header);
            Html::endDivSection(output, "list-heading");
        }

        Html::beginOrderedList(output);
    }

    void HtmlDocumentWriter::endList(OStream& output)
    {
        Html::endOrderedList(output);
    }

    void HtmlDocumentWriter::beginParagraph(OStream& output)
    {
        Html::beginParagraph(output);
    }

    void HtmlDocumentWriter::endParagraph(OStream& output)
    {
        Html::endParagraph(output);
    }

    void HtmlDocumentWriter::beginBlockQuote(OStream& output)
    {
        Html::beginBlockQuote(output);
    }

    void HtmlDocumentWriter::endBlockQuote(OStream& output)
    {
        Html::endBlockQuote(output);
    }

    void HtmlDocumentWriter::beginListItem(OStream& output)
    {
        Html::beginListItem(output);
    }

    void HtmlDocumentWriter::endListItem(OStream& output)
    {
        Html::endListItem(output);
    }

    void HtmlDocumentWriter::paragraph(OStream& output, const String& text)
    {
        Html::paragraph(output, text);
    }

    void HtmlDocumentWriter::inlineText(OStream& output, const String& text)
    {
        Html::inlineText(output, text);
    }

    void HtmlDocumentWriter::boldText(OStream& output, const String& text)
    {
        Html::boldText(output, text);
    }

    void HtmlDocumentWriter::italicText(OStream& output, const String& text)
    {
        Html::italicText(output, text);
    }

    void HtmlDocumentWriter::typewriterText(OStream& output, const String& text)
    {
        Html::typewriterText(output, text);
    }

    void HtmlDocumentWriter::code(OStream& output, const String& text, const String& type)
    {
        Html::code(output, text);
    }

    void HtmlDocumentWriter::image(OStream& output, const String& src)
    {
        Html::embedImage(output, src);
    }

    void HtmlDocumentWriter::listItem(OStream& output, const String& title, const String& href)
    {
        String tVal;
        StringUtils::trimWhiteSpace(tVal, title);

        if (!href.empty())
        {
            String link;
            StringUtils::replaceAll(link, href, "\\", "/");

            Html::beginListItem(output);
            Html::beginLink(output, link);
            output << tVal;
            Html::endLink(output);
            Html::endListItem(output);
        }
        else
        {
            Html::beginListItem(output);
            output << tVal;
            Html::endListItem(output);
        }
    }

    void HtmlDocumentWriter::listIcon(OStream& output, const String& image, const String& href)
    {
        if (!href.empty())
        {
            const PathUtil path(href);
            Html::linkImage(output, image, path.fullPath());
        }
    }

    void HtmlDocumentWriter::anchor(OStream& output, const String& id)
    {
        Html::anchor(output, id);
    }

    void HtmlDocumentWriter::horizontalRule(OStream& output)
    {
        Html::horizontalRule(output);
    }

    void HtmlDocumentWriter::lineBreak(OStream& output)
    {
        Html::lineBreak(output);
    }

    void HtmlDocumentWriter::embedContent(OStream& output, const IconId content)
    {
        Html::embedContent(output, IconSet::fileName(content));
    }

    void HtmlDocumentWriter::embedContentLink(OStream& output, const IconId content, const String& ref)
    {
        Html::embedContentLink(output, IconSet::fileName(content), ref);
    }

    void HtmlDocumentWriter::embedContentLinkText(OStream&      output,
                                                  const IconId  content,
                                                  const String& ref,
                                                  const String& text)
    {
        Html::embedLinkContentPoint(output, IconSet::fileName(content), ref, text);
    }

    void HtmlDocumentWriter::linkText(OStream& output, const String& title, const String& href)
    {
        Html::linkRef(output, title, href);
    }

    void HtmlDocumentWriter::linkRefIcon(OStream& output, IconId ico, int kind, const String& id, const String& title)
    {
        Html::embedContent(output, IconSet::fileName(ico));
        linkRef(output, kind, id, title);
    }

    void HtmlDocumentWriter::linkRef(OStream& output, int kind, const String& id, const String& title)
    {
        const SiteBuilder& builder = SiteBuilder::get();

        String heading = HashUtils::heading(title);

        if (kind == 0)  // compound
        {
            CompoundReference* ref = builder.getCompoundRef(id);
            if (ref)
            {
                Html::linkRef(output,
                              title.empty() ? ref->getName() : title,
                              StringCombine(ref->getReference(), builder.outputFileExt, heading));
            }
            else
            {
                Html::boldText(output, title.empty() ? "(empty title)" : title);
            }
        }
        else
        {
            CompoundReference* pref;
            const size_t       pos = id.find_last_of('_');
            if (pos != String::npos)
                pref = builder.getCompoundRef(id.substr(0, pos));
            else
                pref = builder.getCompoundRef(id);

            // member
            MemberReference* ref = builder.getMemberRef(id);
            if (ref)
            {
                if (pref)
                {
                    Html::linkRef(output,
                                  title.empty() ? ref->getName() : title,
                                  StringCombine(pref->getReference(), builder.outputFileExt, heading));
                }
                else
                {
                    Html::linkRef(output,
                                  title.empty() ? ref->getName() : title,
                                  heading);
                }
            }
            else if (pref)
            {
                Html::linkRef(output,
                              title.empty() ? pref->getName() : title,
                              StringCombine(pref->getReference(), builder.outputFileExt, heading));
            }
            else
            {
                Html::boldText(output, title.empty() ? "(empty title)" : title);
            }
        }
    }

    void HtmlDocumentWriter::linkPage(OStream& output, const String& title, const String& ref)
    {
        const String hash = HashUtils::heading(title);
        if (ref != "index")
        {
            const String link = SiteBuilder::get().findReference(ref, ref);
            Html::linkRef(output, title, StringCombine(StringCombine(link, SiteBuilder::get().outputFileExt), hash));
        }
        else
            Html::linkRef(output, title, StringCombine(StringCombine(ref, SiteBuilder::get().outputFileExt), hash));
    }

    void HtmlDocumentWriter::linkPageMember(OStream& output, const String& title, const String& ref)
    {
        const String hash = HashUtils::heading(title);
        const String link = SiteBuilder::get().findMember(ref);

        if (link.empty())
        {
            Console::writeLine("failed to find page member with the id: ", ref);
            Html::inlineText(output, title);
        }
        else
        {
            Html::linkRef(output, title, StringCombine(StringCombine(link, SiteBuilder::get().outputFileExt), hash));
        }
    }

    void HtmlDocumentWriter::linkHeading(OStream& output, const String& title, const String& href, const String& id)
    {
        const String hash = HashUtils::heading(id.empty() ? title : id);
        Html::linkRef(output, title, hash);
    }
}  // namespace MdDox
