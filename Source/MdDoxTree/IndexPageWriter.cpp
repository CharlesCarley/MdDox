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
#include "IndexPageWriter.h"
#include <utility>
#include "ClassPageWriter.h"
#include "DirectoryPageWriter.h"
#include "Doxygen/DoxCompoundKind.h"
#include "Doxygen/DoxygenQuery.h"
#include "Doxygen/MemberIndexQuery.h"
#include "GenericPageWriter.h"
#include "MdDoxTree/DocumentWriter.h"
#include "MdDoxTree/HashUtils.h"
#include "MdDoxTree/Link.h"
#include "MdDoxTree/Reference.h"
#include "MdDoxTree/SiteBuilder.h"
#include "NamespacePageWriter.h"
#include "TypeFilter/DoxygenFilter.h"
#include "Utils/Path.h"
#include "Xml/Parser.h"

namespace MdDox
{
    class IndexPageFilter final : public Doxygen::Visitors::DoxygenIndexQueryVisitor
    {
    public:
        ReferenceList pages;
        ReferenceList classes;
        ReferenceList namespaces;
        ReferenceList directories;
        ReferenceList dirPaths;

    public:
        void visitedCompound(const Doxygen::CompoundIndexQuery& query) override
        {
            Reference compoundRef;
            compoundRef.setName(query.getName());
            compoundRef.setReference(query.getRefId());

            switch (query.getKind())
            {
            case Doxygen::DCK_EXAMPLE:
            case Doxygen::DCK_PAGE:
                pages.push_back(compoundRef);
                break;
            case Doxygen::DCK_MODULE:
            case Doxygen::DCK_NAMESPACE:
                namespaces.push_back(compoundRef);
                break;
            case Doxygen::DCK_STRUCT:
            case Doxygen::DCK_UNION:
            case Doxygen::DCK_CLASS:
                classes.push_back(compoundRef);
                break;
            case Doxygen::DCK_DIR:
            {
                dirPaths.push_back(compoundRef);
                const String name = compoundRef.getName();

                StringArray str;
                StringUtils::split(str, name, "/");
                if (!str.empty())
                    compoundRef.setName(str.back());

                directories.push_back(compoundRef);
            }
            break;
            case Doxygen::DCK_GROUP:
            case Doxygen::DCK_INTERFACE:
            case Doxygen::DCK_SERVICE:
            case Doxygen::DCK_PROTOCOL:
            case Doxygen::DCK_CATEGORY:
            case Doxygen::DCK_EXCEPTION:
            case Doxygen::DCK_SINGLETON:
            case Doxygen::DCK_TYPE:
            case Doxygen::DCK_FILE:
            case Doxygen::DCK_INVALID:
            default:
                break;
            }
            SiteBuilder::get().registerCompound(compoundRef.getName(), compoundRef.getReference());

            query.foreachMember(
                [compoundRef](const Doxygen::MemberIndexQuery& member)
                {
                    SiteBuilder::get().registerMember(member.getRefId(), compoundRef.getReference());
                });
        }
    };

    IndexPageWriter::IndexPageWriter(DocumentWriter* writer, String indexDir) :
        _stream(nullptr),
        _writer(writer),
        _indexDir(std::move(indexDir))
    {
    }

    template <typename Page>
    void dispatch(DocumentWriter* writer, const Reference& page, const String& indexDir, const PathUtil& outDir)
    {
        Console::writeLine("dispatchPage: ", page.getName());

        PathUtil path(indexDir);
        path.fileName(StringCombine(page.getReference(), ".xml"));

        if (path.exists())
        {
            Xml::Parser psr;
            psr.applyFilter(Doxygen::getFilter(), Doxygen::getFilterSize());
            psr.parse(path.fullPath());

            const Doxygen::DoxygenQuery doxygen(psr.root()->firstChildOf("doxygen"));

            Page pageVisitor(writer, page, outDir);
            pageVisitor.exec(doxygen);
        }
    }

    void IndexPageWriter::dispatchFilter(const IndexPageFilter& filter) const
    {
        for (const Reference& page : filter.pages)
            dispatch<GenericPageWriter>(_writer, page, _indexDir, _outDir);
        for (const Reference& page : filter.namespaces)
            dispatch<NamespacePageWriter>(_writer, page, _indexDir, _outDir);
        for (const Reference& page : filter.classes)
            dispatch<ClassPageWriter>(_writer, page, _indexDir, _outDir);
        for (const Reference& page : filter.directories)
            dispatch<DirectoryPageWriter>(_writer, page, _indexDir, _outDir);
    }

    String IndexPageWriter::makeFilename(const Reference& ref) const
    {
        return StringCombine(ref.getReference(),
                             SiteBuilder::get().outputFileExt,
                             HashUtils::heading(ref.getName()));
    }

    void IndexPageWriter::writeReferenceList(OStream&             out,
                                             const IconId         icon,
                                             const String&        heading,
                                             const ReferenceList& list) const
    {
        _writer->beginSection(out, heading);
        for (const Reference& page : list)
        {
            _writer->embedContentLinkText(out, icon, makeFilename(page), LinkUtils::lastBinaryResolution(page.getName()));
            _writer->lineBreak(out);
        }
        _writer->endSection(out);
    }

    void IndexPageWriter::writeReferenceListDirectory(OStream&             out,
                                                      const IconId         icon,
                                                      const String&        heading,
                                                      const ReferenceList& list) const
    {
        _writer->beginSection(out, heading);
        for (const Reference& page : list)
        {
            StringArray arr;
            StringUtils::split(arr, page.getName(), "/");
            if (arr.size() == 1)
            {
                _writer->embedContentLinkText(out, icon, makeFilename(page), LinkUtils::lastBinaryResolution(page.getName()));
                _writer->lineBreak(out);
            }
        }
        _writer->endSection(out);
    }

    void IndexPageWriter::exec(const Doxygen::DoxygenIndexQuery& query, const PathUtil& outDir)
    {
        _outDir = outDir;
        _outDir.fileName(StringCombine("index", SiteBuilder::get().outputFileExt));

        OutputFileStream out(_outDir.fullPath());
        if (out.is_open())
        {
            _stream = &out;

            IndexPageFilter filter;
            query.visit(&filter);
            const SiteBuilder& builder = SiteBuilder::get();

            _writer->beginDocument(out, builder.projectTitle);

            _writer->linkText(out, "~", builder.siteUrl);
            _writer->linkPage(out, "Main", "indexpage");
            _writer->inlineText(out, "/");
            _writer->boldText(out, "Index");
            _writer->lineBreak(out);
            _writer->lineBreak(out);

            _writer->beginSection(out, "Contents", 2);
            _writer->beginList(out);

            _writer->beginListItem(out);
            _writer->linkHeading(out, "Namespaces", "#namespaces");
            _writer->endListItem(out);

            _writer->beginListItem(out);
            _writer->linkHeading(out, "Classes", "#namespaces");
            _writer->endListItem(out);

            _writer->beginListItem(out);
            _writer->linkHeading(out, "Directories", "#namespaces");
            _writer->endListItem(out);

            _writer->endList(out);
            _writer->endSection(out);

            writeReferenceList(out, ICO_NAMESPACE, "Namespaces", filter.namespaces);
            writeReferenceList(out, ICO_CLASS, "Classes", filter.classes);
            writeReferenceListDirectory(out, ICO_FOLDER, "Directories", filter.dirPaths);

            _writer->endDocument(out, "../index.xml");

            dispatchFilter(filter);
            _stream = nullptr;
        }
    }
}  // namespace MdDox
