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
#include "IconSet.h"
#include "Utils/FileSystem.h"
#include "Utils/String.h"

namespace MdDox
{
    class Link;

    /**
     * \brief Interface for writing a custom back-end document.
     */
    class DocumentWriter
    {
    public:
        DocumentWriter()          = default;
        virtual ~DocumentWriter() = default;

        /**
         * \brief Implementations should write a common document header.
         * \param output The output stream to write to.
         * \param title The title of the document.
         */
        virtual void beginDocument(OStream& output, const String& title) = 0;

        /**
         * \brief Implementations should write a common document header.
         * \param output The output stream to write to.
         * \param docSource The source \c .xml file that was used to generate this document.
         */
        virtual void endDocument(OStream& output, const String& docSource = "") = 0;

        /**
         * \brief Implementations start a navigation bar.
         * \param output The output stream to write to.
         */
        virtual void beginNavigationBar(OStream& output) = 0;

        /**
         * \brief Implementations close a navigation bar.
         * \param output The output stream to write to.
         */
        virtual void endNavigationBar(OStream& output) = 0;

        /**
         * \brief Implementations should close a common header region and start a body region.
         * \param output The output stream to write to.
         */
        virtual void endDocumentHeader(OStream& output) = 0;

        
        /**
         * \brief Implementations should start a subsection of the body.
         * \param output The output stream to write to.
         * \param title The title of the section.
         * \param depth The depth of the heading.
         */
        virtual void addSection(OStream& output, const String& title, int depth) = 0;

    	
        /**
         * \brief Implementations should start a subsection of the body.
         * \param output The output stream to write to.
         * \param title The title of the section.
         * \param depth The depth of the heading.
         * If this is -1 then it should automatically change to the next size down.
         */
        virtual void beginSection(OStream& output, const String& title, int depth = -1) = 0;

        /**
         * \brief Implementations should end a subsection.
         * \param output The output stream to write to.
         */
        virtual void endSection(OStream& output) = 0;

        /**
         * \brief Implementations should start sub title bar of a section.
         * \param output The output stream to write to.
         */
        virtual void beginSectionBar(OStream& output) = 0;

        /**
         * \brief Implementations should end sub title bar of a section.
         * \param output The output stream to write to.
         */
        virtual void endSectionBar(OStream& output) = 0;

        /**
         * \brief Implementations should start a method block.
         * \param output The output stream to write to.
         * \param title The title of the method.
         * \param id The local anchor id of the method.
         */
        virtual void beginMethod(OStream& output, const String& title, const String& id = "") = 0;

        /**
         * \brief Implementations should end a method block.
         * \param output The output stream to write to.
         */
        virtual void endMethod(OStream& output) = 0;

        /**
         * \brief Implementations should start a list block.
         * \param output The output stream to write to.
         * \param header An optional list heading.
         */
        virtual void beginList(OStream& output, const String& header = "") = 0;

        /**
         * \brief Implementations should end a list block.
         * \param output The output stream to write to.
         */
        virtual void endList(OStream& output) = 0;

        /**
         * \brief Implementations should start a paragraph block.
         * \param output The output stream to write to.
         */
        virtual void beginParagraph(OStream& output) = 0;

        /**
         * \brief Implementations should end a paragraph block.
         * \param output The output stream to write to.
         */
        virtual void endParagraph(OStream& output) = 0;

        /**
         * \brief Implementations should start a block-quote block.
         * \param output The output stream to write to.
         */
        virtual void beginBlockQuote(OStream& output) = 0;

        /**
         * \brief Implementations should end a block-quote block.
         * \param output The output stream to write to.
         */
        virtual void endBlockQuote(OStream& output) = 0;

        /**
         * \brief Implementations should start a list item block.
         * \param output The output stream to write to.
         */
        virtual void beginListItem(OStream& output) = 0;

        /**
         * \brief Implementations should start a list item block.
         * \param output The output stream to write to.
         */
        virtual void endListItem(OStream& output) = 0;

        /**
         * \brief Implementations should write a paragraph.
         * \param output The output stream to write to.
         * \param text The plan-text paragraph.
         */
        virtual void paragraph(OStream& output, const String& text) = 0;

        /**
         * \brief Implementations should write fragment of plain-text.
         * \param output The output stream to write to.
         * \param text The plain-text.
         */
        virtual void inlineText(OStream& output, const String& text) = 0;

        /**
         * \brief Implementations should write a bold block of text.
         * \param output The output stream to write to.
         * \param text The text to display in \b bold.
    	 */
        virtual void boldText(OStream& output, const String& text) = 0;

        /**
         * \brief Implementations should write an italic block of text.
         * \param output The output stream to write to.
         * \param text The text to display in \e italic.
    	 */
        virtual void italicText(OStream& output, const String& text) = 0;

        /**
         * \brief Implementations should write a typewriter block of text.
         * \param output The output stream to write to.
         * \param text The text to display in \c typewriter.
    	 */
        virtual void typewriterText(OStream& output, const String& text) = 0;

        /**
         * \brief Implementations should write a code block.
         * \param output The output stream to write to.
         * \param text The code.
         * \param type The type of code.
         */
        virtual void code(OStream& output, const String& text, const String& type = ".txt") = 0;

        /**
         * \brief Implementations should write an image block.
         * \param output The output stream to write to.
         * \param src The link to the image.
         */
        virtual void image(OStream& output, const String& src) = 0;

        /**
         * \brief Implementations should write a list item block with a link to the title.
         * \param output The output stream to write to.
         * \param title The title to use.
         * \param ref The reference link.
         */
        virtual void listItem(OStream& output, const String& title, const String& ref = "") = 0;

        /**
         * \brief Implementations should write a list item block with an icon and link to the title.
         * \param output The output stream to write to.
         * \param image The icon to use.
         * \param ref The reference link.
         */
        virtual void listIcon(OStream& output, const String& image, const String& ref) = 0;

        /**
         * \brief Implementations write an anchor.
         * \param output The output stream to write to.
         * \param id The anchor id.
         */
        virtual void anchor(OStream& output, const String& id) = 0;

        /**
         * \brief Implementations write a horizontal rule.
         * \param output The output stream to write to.
         */
        virtual void horizontalRule(OStream& output) = 0;

        /**
         * \brief Implementations write a line break.
         * \param output The output stream to write to.
         */
        virtual void lineBreak(OStream& output) = 0;

        /**
         * \brief Implementations write text link.
         * \param output The output stream to write to.
         * \param title The text for the link.
         * \param ref The reference link.
         */
        virtual void linkText(OStream& output, const String& title, const String& ref) = 0;


        virtual void linkRef(OStream& output, int kind, const String& id, const String& title = "") = 0;

    	virtual void linkRefIcon(OStream& output, IconId ico, int kind, const String& id, const String& title = "") = 0;

        /**
         * \brief Implementations write text link to a page.
         * \param output The output stream to write to.
         * \param title The text for the link.
         * \param ref The reference link.
         */
        [[deprecated]]
        virtual void linkPage(OStream& output, const String& title, const String& ref) = 0;

    	/**
         * \brief Implementations write text link to a page.
         * \param output The output stream to write to.
         * \param title The text for the link.
         * \param ref The reference link.
         */
        [[deprecated]] virtual void linkPageMember(OStream& output, const String& title, const String& ref) = 0;

        /**
         * \brief Implementations write text link to a page.
         * \param output The output stream to write to.
         * \param title The text for the link.
         * \param ref The reference link.
         * \param id An optional hash id
         */
        [[deprecated]] virtual void linkHeading(OStream& output, const String& title, const String& ref, const String& id = "") = 0;

        /**
         * \brief Implementations should embed the predefined content icon.
         * \param output The output stream to write to.
         * \param content The icon id
         */
        virtual void embedContent(OStream& output, IconId content) = 0;

        /**
         * \brief Implementations should embed the predefined content icon as a link to the URL.
         * \param output The output stream to write to.
         * \param content The icon id
         * \param ref The reference link.
         */
        virtual void embedContentLink(OStream& output, IconId content, const String& ref) = 0;

        /**
         * \brief Implementations should embed the predefined content icon as a link to the URL with text beside it.
         * \param output The output stream to write to.
         * \param content The icon id
         * \param ref The reference link.
         * \param text The text to display.
         */
        virtual void embedContentLinkText(OStream& output, IconId content, const String& ref, const String& text) = 0;
    };
}  // namespace MdDox
