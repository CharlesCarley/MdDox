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
#include "MdDoxTree/Reference.h"
#include "MdDoxTree/SiteBuilder.h"

namespace MdDox
{
    void writeCommonNav(OStream& out, DocumentWriter* writer)
    {
        const SiteBuilder& builder = SiteBuilder::get();

        writer->linkUrl(out, "~", builder.siteUrl);
        writer->linkRef(out, 0, "index", builder.projectTitle);
        writer->inlineText(out, "/");
    }

    void writeGenericTitleBar(OStream& out, DocumentWriter* writer, const String& item)
    {
        writeCommonNav(out, writer);
        writer->boldText(out, item);
        writer->lineBreak(out);
        writer->lineBreak(out);
    }

    void writeNamespaceTitleBar(OStream& out, DocumentWriter* writer, const Reference& item)
    {
        const String split = "::";

        StringDeque navList;
        StringUtils::split(navList, item.getName(), split);

        const String lastSep = navList.back();
        navList.pop_back();

        const SiteBuilder& builder = SiteBuilder::get();

        // (~RepoHome) MainPage / Index / NS0::NS1::LBR
        writeCommonNav(out, writer);

        while (!navList.empty())
        {
            // resolve references for each split.
            String curName = navList.front();

            Reference id = builder.findNamespace(curName);
            if (!id.empty())
            {
                writer->linkRef(out, 0, id.getId(), LinkUtils::LBR(id.getName()));
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

        const String lastPath = navList.back();
        navList.pop_back();

        const SiteBuilder& builder = SiteBuilder::get();

        writeCommonNav(out, writer);

        // for the directory to be unique,
        // it needs to store the file path.
        // So, to link back to individual directories
        // it needs to be constructed as a relative path.
        // (front to back)
        String reconstruct;

        while (!navList.empty())
        {
            StringCombine(reconstruct, reconstruct, navList.front());

            Reference id = builder.findDirectory(reconstruct);
            if (!id.empty())
            {
                writer->linkRef(out, 0, id.getId(), navList.front());
                writer->inlineText(out, "/");
            }
            navList.pop_front();
            reconstruct.push_back('/');
        }

        writer->boldText(out, lastPath);
        writer->lineBreak(out);
        writer->lineBreak(out);
    }

    void writeReferenceIconLink(OStream& out, DocumentWriter* writer, const Reference& ref, const IconId id)
    {
        const SiteBuilder& builder = SiteBuilder::get();

        MemberReference* mRef = builder.getMemberRef(ref.getId());

        writer->beginParagraph(out);
        writer->embedContent(out, ICO_CLASS);

        const String name = LinkUtils::LBR(ref.getName());

        // find the owning file then link to the heading
        CompoundReference* cref = mRef ? mRef->findParent() : nullptr;
        if (cref != nullptr)
        {
            writer->linkText(out,
                             name,
                             StringCombine(cref->getId(),
                                           builder.outputFileExt,
                                           HashUtils::heading(name)));
        }
        else
        {
            writer->boldText(out, name);
        }

        writer->endParagraph(out);
    }

    void writeReferenceIconLinkHeading(OStream& out, DocumentWriter* writer, const Reference& ref, const IconId id)
    {
        const String title = LinkUtils::LBR(ref.getName());
        writer->embedContentLinkText(out, id, HashUtils::heading(title), title);
        writer->lineBreak(out);
    }

    void writeExternalIconLink(OStream& out, DocumentWriter* writer, const Reference& ref, const IconId id)
    {
        const String& title = ref.getName();
        const String  file  = StringCombine(SiteBuilder::get().fileUrl, '/', ref.getId());

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

    String LinkUtils::LBR(const String& name)
    {
        StringDeque dest;
        StringUtils::split(dest, name, "::");
        if (!dest.empty())
            return dest.back();
        return name;
    }

    String LinkUtils::LSS(const String& name)
    {
        StringDeque dest;
        StringUtils::split(dest, name, "/");
        if (!dest.empty())
            return dest.back();
        return name;
    }

}  // namespace MdDox
