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
#include "Doxygen/CompoundDefQuery.h"
#include "MdDoxTree/DocumentWriter.h"
#include "MdDoxTree/HashUtils.h"
#include "MdDoxTree/IconSet.h"
#include "MdDoxTree/Link.h"
#include "MdDoxTree/Reference.h"
#include "MdDoxTree/SiteBuilder.h"

namespace MdDox
{
    void writeNamespaceTitleBar(OStream& out, DocumentWriter* writer, const Reference& item, const String& split)
    {
        StringDeque navList;
        StringUtils::split(navList, item.getName(), split);

        const String localName = navList.back();
        navList.pop_back();

        const SiteBuilder& builder = SiteBuilder::get();

        writer->linkText(out, "~", builder.siteUrl);
        writer->linkPage(out, "Main", "indexpage");
        writer->inlineText(out, "/");
        writer->linkPage(out, "Index", "index");
        writer->inlineText(out, split);

        if (!navList.empty())
        {
            String localNamespace = navList.front();
            navList.pop_front();

            String ref = builder.findReference(localNamespace);
            if (!ref.empty())
            {
                writer->linkPage(out, localNamespace, ref);
                writer->inlineText(out, split);
            }
            else
                Console::writeError("Error: unable to find the reference: ", localNamespace);

            while (!navList.empty())
            {
                String subName = navList.front();

                localNamespace = StringCombine("", localNamespace, split, subName);
                navList.pop_front();

                ref = builder.findReference(localNamespace);
                if (!ref.empty())
                {
                    writer->linkPage(out, subName, ref);
                    writer->inlineText(out, "::");
                }
                else
                    Console::writeError("Error: unable to find the reference: ", localNamespace);
            }
        }

        writer->boldText(out, localName);
        writer->lineBreak(out);
        writer->lineBreak(out);
    }

    void writeDirectoryTitleBar(OStream& out, DocumentWriter* writer, const Reference& item, const String& split)
    {
        StringDeque navList;
        StringUtils::split(navList, item.getName(), split);

        const String localName = navList.back();
        navList.pop_back();

        const SiteBuilder& builder = SiteBuilder::get();

        writer->linkText(out, "~", builder.siteUrl);
        writer->linkPage(out, "Main", "indexpage");
        writer->inlineText(out, "/");
        writer->linkPage(out, "Index", "index");
        writer->inlineText(out, split);

        if (!navList.empty())
        {
            String localNamespace = navList.front();
            navList.pop_front();

            String ref = builder.findReference(localNamespace);
            if (!ref.empty())
            {
                writer->linkPage(out, localNamespace, ref);
                writer->inlineText(out, split);
            }
            else
                Console::writeError("Error: unable to find the reference: ", localNamespace);

            while (!navList.empty())
            {
                String subName = navList.front();

                localNamespace = StringCombine("", localNamespace, split, subName);
                navList.pop_front();

                ref = builder.findReference(subName);
                if (!ref.empty())
                {
                    writer->linkPage(out, subName, ref);
                    writer->inlineText(out, split);
                }
                else
                    Console::writeError("Error: unable to find the reference: ", localNamespace);
            }
        }

        writer->boldText(out, localName);
        writer->lineBreak(out);
        writer->lineBreak(out);
    }

    void writeFilePath(OStream& out, DocumentWriter* writer, const String& path)
    {
        StringDeque navList;
        StringUtils::split(navList, path, "/");

        const String localName = navList.back();
        navList.pop_back();

        const SiteBuilder& builder = SiteBuilder::get();

        if (!navList.empty())
        {
            String name = navList.front();
            navList.pop_front();

            String ref = builder.findReference(name);
            if (!ref.empty())
            {
                writer->linkPage(out, name, ref);
                writer->inlineText(out, "/");
            }
            else
                Console::writeError("Error: unable to find the reference: ", name);

            while (!navList.empty())
            {
                String subName = navList.front();

                name = StringCombine("", name, "/", subName);
                navList.pop_front();

                ref = builder.findReference(subName);
                if (!ref.empty())
                {
                    writer->linkPage(out, subName, ref);
                    writer->inlineText(out, "/");
                }
                else
                    Console::writeError("Error: unable to find the reference: ", name);
            }
        }

        writer->inlineText(out, localName);
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
        const String  file  = StringCombine(SiteBuilder::get().baseUrl, '/', ref.getReference());

        const String link = StringCombine(file, HashUtils::lineNumber(1));

        writer->embedContentLinkText(out, id, link, title);
        writer->lineBreak(out);
    }

    void writeReferenceIconStub(OStream& out, DocumentWriter* writer, const Reference& ref, const IconId id)
    {
        writer->embedContent(out, id);
        writer->inlineText(out, ref.getName());
        writer->lineBreak(out);
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
