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
#include "MdDoxTree/WriteUtils.h"
#include "MdDoxTree/DocumentWriter.h"
#include "MdDoxTree/HashUtils.h"
#include "MdDoxTree/IconSet.h"
#include "MdDoxTree/Link.h"
#include "MdDoxTree/Reference.h"
#include "MdDoxTree/SiteBuilder.h"

namespace MdDox
{
    void writeCommonNav(OStream& out, DocumentWriter* writer)
    {
        const SiteBuilder& builder = SiteBuilder::get();

        writer->linkText(out, "~", builder.siteUrl);
        writer->linkRef(out, 0, "indexpage", builder.getCompoundName("indexpage"));
        writer->inlineText(out, "/");
        writer->linkRef(out, 0, "index", builder.getCompoundName("index"));
        writer->inlineText(out, "/");
    }

    
	
    void writeNamespaceTitleBar(OStream& out, DocumentWriter* writer, const Reference& item)
    {

    	const String split = "::";
    	
        StringDeque navList;
        StringUtils::split(navList, item.getName(), split);


    	const String lastSep = navList.back();
        navList.pop_back();

        const SiteBuilder& builder = SiteBuilder::get();

    	// RepoHome MainPage / TOC
        writeCommonNav(out, writer);


    	while (!navList.empty())
        {
    		// resolve references for each split.
    		String curName = navList.front();
            
    		Reference id = builder.findNamespace(curName);
    		if (!id.empty())
            {
                writer->linkRef(out, 0, id.getReference(), LinkUtils::lastBinaryResolution(id.getName()));
                writer->inlineText(out, "::");
            }

    		navList.pop_front();
        }

        writer->boldText(out, lastSep);
        writer->lineBreak(out);
        writer->lineBreak(out);
    }


	void writeDirectoryTitleBar(OStream& out, DocumentWriter* writer, const Reference& item)
    {
        StringDeque navList;
        StringUtils::split(navList, item.getName(), "/");

        const String localName = navList.back();
        navList.pop_back();

    	
        writeCommonNav(out, writer);

        if (!navList.empty())
        {
            writer->linkRef(out, 0, navList.front());
            writer->inlineText(out, "/");

        	navList.pop_front();
            while (!navList.empty())
            {
                writer->linkRef(out, 0, navList.front());
                writer->inlineText(out, "/");
                navList.pop_front();
            }
        }

    	writer->boldText(out, localName);
        writer->lineBreak(out);
        writer->lineBreak(out);
    }
    
    
    void writeReferenceIconLink(OStream& out, DocumentWriter* writer, const Reference& ref, const IconId id)
    {
        const String title = LinkUtils::lastBinaryResolution(ref.getName());

        String memberRef = SiteBuilder::get().findMember(ref.getReference());
        if (memberRef.empty())
        {
            memberRef = SiteBuilder::get().findReference(ref.getReference());
            if (memberRef.empty())
                memberRef = ref.getReference();
        }

        const String cleanRef = memberRef;
        const String file     = StringCombine(
            cleanRef,
            SiteBuilder::get().outputFileExt);

        const String link = StringCombine(file, HashUtils::heading(title));

        writer->embedContentLinkText(out, id, link, title);
        writer->lineBreak(out);
    }

    void writeReferenceIconLinkHeading(OStream& out, DocumentWriter* writer, const Reference& ref, const IconId id)
    {
        const String title = LinkUtils::lastBinaryResolution(ref.getName());
        writer->embedContentLinkText(out, id, HashUtils::heading(title), title);
        writer->lineBreak(out);
    }

    void writeExternalIconLink(OStream& out, DocumentWriter* writer, const Reference& ref, const IconId id)
    {
        const String& title = ref.getName();
        const String  file  = StringCombine(SiteBuilder::get().fileUrl, '/', ref.getReference());

        const String link = StringCombine(file, HashUtils::lineNumber(1));

        writer->embedContentLinkText(out, id, link, title);
        writer->lineBreak(out);
    }

    void writeReferenceIconStub(OStream& out, DocumentWriter* writer, const Reference& ref, const IconId id)
    {
        writer->beginParagraph(out);
        writer->embedContent(out, id);
        writer->inlineText(out, ref.getName());
        writer->endParagraph(out);
    }

    bool syncStream(OStream* stream, OutputStringStream& out)
    {
        if (stream)
        {
            const String data = out.str();
            const bool   any  = !data.empty();
            if (any)
                *stream << data;
            return any;
        }
        return false;
    }

}  // namespace MdDox
