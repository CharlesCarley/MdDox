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
#include "HtmlCommandWriter.h"
#include "HtmlDocumentWriter.h"
#include "MdDoxTree/HashUtils.h"
#include "MdDoxTree/SiteBuilder.h"
#include "Utils/Char.h"

namespace MdDox::Html
{
    void lineBreak(OStream& output)
    {
        output << "<br/>" << std::endl;
    }

    void space(OStream& output, int i)
    {
        while (i-- > 0)
            output << ' ';
    }

    void beginDivSection(OStream& output, const char* name)
    {
        comment(output, name);
        output << "<div class=\"" << name << "\">" << std::endl;
    }

    void endDivSection(OStream& output, const char* name)
    {
        output << "</div>" << std::endl;
        comment(output, name);
    }

    void beginSection(OStream& output, const String& name, int depth)
    {
        depth = std::min(std::max(depth, 1), 6);

        anchor(output, HashUtils::cleanTitle(name));

        const String className = StringCombine("section-", depth);
        heading(output, depth, name);
        beginDivSection(output, className.c_str());
    }

    void endSection(OStream& output)
    {
        endDivSection(output, "section");
    }

    void beginBlockQuote(OStream& output)
    {
        output << "<blockquote>" << std::endl;
    }

    void endBlockQuote(OStream& output)
    {
        output << "</blockquote>" << std::endl;
    }

    void code(OStream& output, const String& code, const String& type)
    {
        beginDivSection(output, "code-block");
        output << "<pre><code>";

        if (!code.empty())
        {
            String cpy;
            StringUtils::replaceAll(cpy, cpy, "&", "&amp;");
            StringUtils::replaceAll(cpy, code, ">", "&gt;");
            StringUtils::replaceAll(cpy, cpy, "<", "&lt;");
            StringUtils::replaceAll(cpy, cpy, "\"", "&quot;");
            StringUtils::replaceAll(cpy, cpy, "'", "&apos;");
            output << cpy;

            if (!isNewLine(code.back()))
                output << std::endl;
        }
        else
            output << std::endl;
        output << "</code></pre>" << std::endl;
        endDivSection(output, "code-block");
    }

    void beginParagraph(OStream& output)
    {
        beginDivSection(output, "paragraph");
        beginSpan(output, "paragraph");
    }

    void endParagraph(OStream& output)
    {
        endSpan(output);
        endDivSection(output, "paragraph");
    }

    void paragraph(OStream& output, const String& str)
    {
        beginParagraph(output);
        output << str;
        endParagraph(output);
    }

    void horizontalRule(OStream& output)
    {
        output << "<hr/>" << std::endl;
    }

    void anchor(OStream& output, const String& id)
    {
        output << "<a id=\"" << id << "\"></a>" << std::endl;
    }

    void inlineText(OStream& output, const String& str, const String& className)
    {
        beginSpan(output, className.empty() ? "inline-text" : className);
        output << str;
        endSpan(output);
    }

    void inlineImage(OStream& output, const String& src, const String& className)
    {
        if (!className.empty())
            output << "<img src=\"" << src << "\" class=\"" << className << "\"/>";
        else
            output << "<img src=\"" << src << "\"/>";
    }

    void typewriterText(OStream& output, const String& str)
    {
        String out;
        StringUtils::trimWhiteSpace(out, str);
        output << "<code class=\"typewriter\">" << out << "</code>" << std::endl;
    }

    void boldText(OStream& output, const String& str)
    {
        String out;
        StringUtils::trimWhiteSpace(out, str);
        beginSpan(output, "bold-text");
        output << "<b>" << out << "</b>";
        endSpan(output);
    }

    void italicText(OStream& output, const String& str)
    {
        String out;
        StringUtils::trimWhiteSpace(out, str);

        beginSpan(output, "italic-text");
        output << "<i>" << out << "</i>";
        endSpan(output);
    }

    void linkImage(OStream& output, const String& image, const String& reference, const String& comment)
    {
        embedContentLink(output, image, reference);
    }

    void embedImage(OStream& output, const String& reference, const String& comment)
    {
        embedContent(output, reference);
    }

    void embedContent(OStream& output, const String& content)
    {
        const String path = StringCombine(SiteBuilder::get().imageDir, content);
        inlineImage(output, path);
    }

    void embedContentLink(OStream& output, const String& content, const String& reference)
    {
        const String path = StringCombine(SiteBuilder::get().imageDir, content);
        beginLink(output, reference);
        inlineImage(output, path);
        endLink(output);
    }

    void embedLinkContentPoint(OStream& output, const String& content, const String& reference, const String& point, bool addNewLine)
    {
        const String path = StringCombine(SiteBuilder::get().imageDir, content);

        beginSpan(output, "icon-list-item");
        beginLink(output, reference, "icon-list-item");
        inlineImage(output, path, "icon-list-item");
        inlineText(output, point, "icon-list-item");
        endLink(output);
        endSpan(output);
    }

    void comment(OStream& output, const String& str)
    {
        //output << "<!-- " << str << " -->" << std::endl;
    }

    void heading(OStream& output, int index, const String& heading)
    {
        beginHeading(output, index);
        output << heading;
        endHeading(output, index);
    }

    void beginSpan(OStream& output, const String& className)
    {
        if (!className.empty())
            output << "<span class=\"" << className << "\">";
        else
            output << "<span>";
    }

    void endSpan(OStream& output)
    {
        output << "</span>" << std::endl;
    }

    void beginLink(OStream& output, const String& ref, const String& className)
    {
        if (className.empty())
            output << "<a href=\"" << ref << "\">";
        else
            output << "<a href=\"" << ref << "\" class=\"" << className << "\">";
    }

    void endLink(OStream& output)
    {
        output << "</a>" << std::endl;
    }

    void beginOrderedList(OStream& output)
    {
        output << "<ul>" << std::endl;
    }

    void endOrderedList(OStream& output)
    {
        output << "</ul>" << std::endl;
    }

    void beginListItem(OStream& output)
    {
        output << "<li>";
    }

    void endListItem(OStream& output)
    {
        output << "</li>" << std::endl;
    }

    void beginHeading(OStream& output, int index)
    {
        index = std::min(std::max(1, index), 6);
        output << "<h" << index << ">";
    }

    void endHeading(OStream& output, int index)
    {
        index = std::min(std::max(1, index), 6);
        output << "</h" << index << ">" << std::endl;
    }

    void linkRef(OStream& output, const String& title, const String& reference, const String& comment)
    {
        String link;
        StringUtils::trimWhiteSpace(link, reference);
        beginLink(output, link);
        output << title;
        endLink(output);
    }

}  // namespace MdDox::Html
