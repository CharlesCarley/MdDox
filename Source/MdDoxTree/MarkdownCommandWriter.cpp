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
#include "MarkdownCommandWriter.h"
#include "MarkdownDocumentWriter.h"
#include "MdDoxTree/SiteBuilder.h"
#include "Utils/Char.h"

namespace MdDox::Md
{
    void lineBreak(OStream& output)
    {
        output << "<br/>" << std::endl;
    }

    void newLine(OStream& output, int number)
    {
        while (number-- > 0)
            output << std::endl;
    }

    void heading(OStream& output, const String& title, int depth)
    {
        addHash(output, depth);
        output << title;
        newLine(output, 2);
    }

    void addHash(OStream& output, int i)
    {
        i = std::min(std::max(i, 1), 6);
        while (i-- > 0)
            output << '#';
        space(output, 1);
    }

    void space(OStream& output, int i)
    {
        while (i-- > 0)
            output << ' ';
    }

    void bullet(OStream& output, int n)
    {
        n = std::min(n, 6);
        while (n-- > 0)
            output << '-';
    }

    void blockQuote(OStream& output, int n)
    {
        n = std::min(n, 6);
        while (n-- > 0)
            output << '>';
    }

    void beginBlockQuote(OStream& output)
    {
        output << "<blockquote>";
    }

    void endBlockQuote(OStream& output)
    {
        output << "</blockquote>";
    }

    void beginParagraph(OStream& output)
    {
    }

    void endParagraph(OStream& output)
    {
    }

    void beginListItem(OStream& output)
    {
        output << "- ";
    }

    void endListItem(OStream& output)
    {
        newLine(output, 1);
    }

    void code(OStream& output, const String& code, const String& type)
    {
        output << "```" << type << std::endl;
        output << code;
        if (!isNewLine(code.back()))
            output << std::endl;
        output << "```" << std::endl;
    }

    void paragraph(OStream& output, const String& str)
    {
        output << str << std::endl;
    }

    void horizontalRule(OStream& output)
    {
        output << "***" << std::endl;
    }

    void inlineText(OStream& output, const String& str)
    {
        if (!str.empty())
        {
            StringArray arr;
            StringUtils::split(arr, str, '\n');

            for (size_t i = 0; i < arr.size(); ++i)
            {
                const String& string = arr[i];
                if (i > 0 && !string.empty())
                {
                    const char ch = string.front();

                    if (isDecimal(ch) || isLetter(ch))
                        output << ' ';
                }
                String out;
                StringUtils::trimWhiteSpace(out, string);
                output << out;
            }
        }
    }

    void typewriterText(OStream& output, const String& str)
    {
        if (!str.empty())
        {
            String out;
            StringUtils::trimWhiteSpace(out, str);
            output << "`" << out << "`";
        }
    }

    void boldText(OStream& output, const String& str)
    {
        if (!str.empty())
        {
            String out;
            StringUtils::trimWhiteSpace(out, str);
            output << "**" << out << "**";
        }
    }

    void italicText(OStream& output, const String& str)
    {
        if (!str.empty())
        {
            String out;
            StringUtils::trimWhiteSpace(out, str);
            output << "*" << out << "*";
        }
    }

    void linkImage(OStream& output, const String& image, const String& reference, const String& comment)
    {
        const PathUtil path(image);

        output << "<a href=\"" << reference << "\">";
        output << "<img src=\"" << image << "\"></img>";
        output << "</a>" << std::endl;
    }

    void embedImage(OStream& output, const String& reference, const String&)
    {
        const String path = StringCombine(SiteBuilder::get().imageDir, reference);
        output << "![";
        output << StringUtils::scramble(reference);
        output << "](";
        output << path;
        output << ")";
    }

    void embedContent(OStream& output, const String& content, bool addNewLine)
    {
        embedImage(output, content);
    }

    void embedContentLink(OStream& output, const String& content, const String& reference, bool addNewLine)
    {
        output << '[';
        embedContent(output, content, false);
        output << ']' << '(';
        output << reference;
        output << ')';
        if (addNewLine)
            newLine(output, 1);
    }

    void embedLinkContentPoint(OStream& output, const String& content, const String& reference, const String& point, bool addNewLine)
    {
        output << '[';
        embedContent(output, content, false);
        space(output, 1);
        inlineText(output, point);
        output << ']' << '(';
        output << reference;
        output << ')';
    }

    void linkRef(OStream& output, const String& title, const String& reference, const String& comment)
    {
        if (!title.empty())
        {
            String link;
            StringUtils::trimWhiteSpace(link, reference);

            output << '[';
            output << title;
            output << ']' << '(';
            output << link;
            output << ')';
        }
    }

}  // namespace MdDox::Md
