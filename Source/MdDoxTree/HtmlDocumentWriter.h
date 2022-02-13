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
#include "MdDoxTree/DocumentWriter.h"
#include "Utils/FileSystem.h"
#include "Utils/String.h"

namespace MdDox
{
    class HtmlDocumentWriter : public DocumentWriter
    {
    private:
        int _sectionDepth;

    protected:
        void writeSection(OStream& output, const String& title) const;

    public:
        HtmlDocumentWriter();

        ~HtmlDocumentWriter() override;

        /**
         * \copydoc MdDox::DocumentWriter::beginDocument
         */
        void beginDocument(OStream& output, const String& title) override;

        /**
         * \copydoc MdDox::DocumentWriter::endDocument
         */
        void endDocument(OStream& output, const String& docSource = "") override;

        /**
         * \copydoc MdDox::DocumentWriter::endNavigationBar
         */
        void beginNavigationBar(OStream& output) override;

        /**
         * \copydoc MdDox::DocumentWriter::endNavigationBar
         */
        void endNavigationBar(OStream& output) override;

        /**
         * \copydoc MdDox::DocumentWriter::endDocumentHeader
         */
        void endDocumentHeader(OStream& output) override;

        /**
         * \copydoc MdDox::DocumentWriter::addSection
         */
        void addSection(OStream& output, const String& title, int depth) override;

        /**
         * \copydoc MdDox::DocumentWriter::beginSection
         */
        void beginSection(OStream& output, const String& title, int depth = -1) override;

        /**
         * \copydoc MdDox::DocumentWriter::endSection
         */
        void endSection(OStream& output) override;

        /**
         * \copydoc MdDox::DocumentWriter::beginSectionBar
         */
        void beginSectionBar(OStream& output) override;

        /**
         * \copydoc MdDox::DocumentWriter::endSectionBar
         */
        void endSectionBar(OStream& output) override;

        /**
         * \copydoc MdDox::DocumentWriter::beginMethod
         */
        void beginMethod(OStream& output, const String& title, const String& id) override;

        /**
         * \copydoc MdDox::DocumentWriter::endMethod
         */
        void endMethod(OStream& output) override;

        /**
         * \copydoc MdDox::DocumentWriter::beginList
         */
        void beginList(OStream& output, const String& header) override;

        /**
         * \copydoc MdDox::DocumentWriter::endList
         */
        void endList(OStream& output) override;

        /**
         * \copydoc MdDox::DocumentWriter::beginParagraph
         */
        void beginParagraph(OStream& output) override;

        /**
         * \copydoc MdDox::DocumentWriter::endParagraph
         */
        void endParagraph(OStream& output) override;

        /**
         * \copydoc MdDox::DocumentWriter::beginBlockQuote
         */
        void beginBlockQuote(OStream& output) override;

        /**
         * \copydoc MdDox::DocumentWriter::endBlockQuote
         */
        void endBlockQuote(OStream& output) override;

        /**
         * \copydoc MdDox::DocumentWriter::beginListItem
         */
        void beginListItem(OStream& output) override;

        /**
         * \copydoc MdDox::DocumentWriter::endListItem
         */
        void endListItem(OStream& output) override;

        /**
         * \copydoc MdDox::DocumentWriter::paragraph
         */
        void paragraph(OStream& output, const String& text) override;

        /**
         * \copydoc MdDox::DocumentWriter::inlineText
         */
        void inlineText(OStream& output, const String& text) override;

        /**
         * \copydoc MdDox::DocumentWriter::boldText
         */
        void boldText(OStream& output, const String& text) override;

        /**
         * \copydoc MdDox::DocumentWriter::italicText
         */
        void italicText(OStream& output, const String& text) override;

        /**
         * \copydoc MdDox::DocumentWriter::typewriterText
         */
        void typewriterText(OStream& output, const String& text) override;

        /**
         * \copydoc MdDox::DocumentWriter::code
         */
        void code(OStream& output, const String& text, const String& type = ".txt") override;

        /**
         * \copydoc MdDox::DocumentWriter::image
         */
        void image(OStream& output, const String& src) override;

        /**
         * \copydoc MdDox::DocumentWriter::listItem
         */
        void listItem(OStream& output, const String& title, const String& ref) override;

        /**
         * \copydoc MdDox::DocumentWriter::listIcon
         */
        void listIcon(OStream& output, const String& image, const String& ref) override;

        /**
         * \copydoc MdDox::DocumentWriter::keyValueListItem
         */
        void keyValueListItem(OStream& output, const String& key, const String& value) override;

        /**
         * \copydoc MdDox::DocumentWriter::anchor
         */
        void anchor(OStream& output, const String& id) override;

        /**
         * \copydoc MdDox::DocumentWriter::horizontalRule
         */
        void horizontalRule(OStream& output) override;

        /**
         * \copydoc MdDox::DocumentWriter::lineBreak
         */
        void lineBreak(OStream& output) override;

        /**
         * \copydoc MdDox::DocumentWriter::linkText
         */
        void linkText(OStream& output, const String& title, const String& ref) override;

        /**
         * \copydoc MdDox::DocumentWriter::linkPage
         */
        void linkPage(OStream& output, const String& title, const String& ref) override;

    	/**
         * \copydoc MdDox::DocumentWriter::linkPageMember
         */
        void linkPageMember(OStream& output, const String& title, const String& ref) override;

        /**
         * \copydoc MdDox::DocumentWriter::linkHeading
         */
        void linkHeading(OStream& output, const String& title, const String& ref, const String& id = "") override;

        /**
         * \copydoc MdDox::DocumentWriter::embedContent
         */
        void embedContent(OStream& output, IconId content) override;

        /**
         * \copydoc MdDox::DocumentWriter::embedContentLink
         */
        void embedContentLink(OStream& output, IconId content, const String& ref) override;

        /**
         * \copydoc MdDox::DocumentWriter::embedContentLinkText
         */
        void embedContentLinkText(OStream& output, IconId content, const String& ref, const String& text) override;
    };
}  // namespace MdDox
