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
#include "Utils/String.h"

/**
 * \brief Provides markdown utility write functions.
 */
namespace MdDox::Md
{
    /**
     * \brief Writes a Html break tag
     * \param output The output stream to write to.
     */
    extern void lineBreak(OStream& output);

    /**
     * \brief Writes a newline character to the output stream.
     * \param output The output stream to write to.
     * \param number The number of newline characters to write
     */
    extern void newLine(OStream& output, int number);

    /**
     * \brief Writes a section heading.
     * \param output The output stream to write to.
     * \param title The heading title. 
     * \param depth The heading depth.
     */
    extern void heading(OStream& output, const String& title, int depth);

	extern void addHash(OStream& output, int i);

    extern void space(OStream& output, int i);

    /**
     * \brief Begins a block quote block.
     * \param output The output stream to write to.
     */
    extern void beginBlockQuote(OStream& output);

    /**
     * \brief Ends a block quote block.
     * \param output The output stream to write to.
     */
    extern void endBlockQuote(OStream& output);

    /**
     * \brief Begins a paragraph block.
     * \param output The output stream to write to.
     */
    extern void beginParagraph(OStream& output);

    /**
     * \brief Ends a paragraph block.
     * \param output The output stream to write to.
     */
    extern void endParagraph(OStream& output);



	extern void beginList(OStream& output);
    extern void endList(OStream& output);
	
    /**
     * \brief Starts a list block.
     * \param output The output stream to write to.
     */
    extern void beginListItem(OStream& output);

    /**
     * \brief Ends a list block.
     * \param output The output stream to write to.
     */
    extern void endListItem(OStream& output);

    /**
     * \brief Writes a horizontal rule.
     * \param output The output stream to write to.
     */
    extern void horizontalRule(OStream& output);

    /**
     * \brief Writes a code block.
     * \param output The output stream to write to.
     * \param code The block of text that contains the code.
     * \param type The type of the code in the code parameter.
     */
    extern void code(OStream& output, const String& code, const String& type = "txt");

    extern void paragraph(OStream& output, const String& str);

    extern void inlineText(OStream& output, const String& str);

    extern void typewriterText(OStream& output, const String& str);

    extern void boldText(OStream& output, const String& str);

    extern void italicText(OStream& output, const String& str);

    extern void linkImage(OStream& output, const String& image, const String& reference, const String& comment = "");

    extern void linkRef(OStream& output, const String& title, const String& reference, const String& comment = "");

    extern void embedImage(OStream& output, const String& reference, const String& comment = "");

    extern void embedContent(OStream& output, const String& content, bool addNewLine = true);

    extern void embedContentLink(OStream& output, const String& content, const String& reference, bool addNewLine = true);

    extern void embedLinkContentPoint(OStream& output, const String& content, const String& reference, const String& point, bool addNewLine = true);

}  // namespace MdDox::Md
