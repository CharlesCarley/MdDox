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
#include "MarkdownDocumentWriter.h"
#include "MarkdownCommandWriter.h"
#include "MdDoxTree/HashUtils.h"
#include "MdDoxTree/HtmlCommandWriter.h"

namespace MdDox
{
    MarkdownDocumentWriter::MarkdownDocumentWriter() = default;

    MarkdownDocumentWriter::~MarkdownDocumentWriter() = default;

    void MarkdownDocumentWriter::beginDocument(OStream& output, const String& title)
    {

        Html::anchor(output, HashUtils::cleanTitle(title));
        Html::heading(output, 1, title);
    }
    

    void MarkdownDocumentWriter::code(OStream& output, const String& text, const String& type)
    {
        if (!text.empty())
        {
            output << std::endl;
            Md::code(output, text, type);
        }
    }

    void MarkdownDocumentWriter::endNavigationBar(OStream& output)
    {
        output << std::endl;
        output << std::endl;
        HtmlDocumentWriter::endNavigationBar(output);
        Html::lineBreak(output);

        output << std::endl;
        output << std::endl;
    }
}  // namespace MdDox
