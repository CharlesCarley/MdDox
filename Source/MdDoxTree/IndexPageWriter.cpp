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
#include "MdDoxTree/IndexPageWriter.h"
#include <utility>
#include "Doxygen/DoxCompoundKind.h"
#include "Doxygen/DoxygenQuery.h"
#include "Doxygen/MemberIndexQuery.h"
#include "MdDoxTree/ClassPageWriter.h"
#include "MdDoxTree/DescriptionWriter.h"
#include "MdDoxTree/DirectoryPageWriter.h"
#include "MdDoxTree/DocumentWriter.h"
#include "MdDoxTree/GenericPageWriter.h"
#include "MdDoxTree/HashUtils.h"
#include "MdDoxTree/NamespacePageWriter.h"
#include "MdDoxTree/Reference.h"
#include "MdDoxTree/SiteBuilder.h"
#include "MdDoxTree/WriteUtils.h"
#include "TypeFilter/DoxygenFilter.h"
#include "Utils/Path.h"
#include "Xml/Parser.h"

namespace MdDox
{
    class IndexPageFilter final : public Doxygen::Visitors::DoxygenIndexQueryVisitor
    {
    public:
        // pages filtered from the XML
        ReferenceList pages;
        ReferenceList classes;
        ReferenceList namespaces;
        ReferenceList directories;
        ReferenceList dirPaths;

        bool hasMainPage{false};

        // pages that were actually written
        ReferenceList outPages;
        ReferenceList outClasses;
        ReferenceList outNamespaces;
        ReferenceList outDirectories;

    public:
        void addPage(const Reference& compoundRef)
        {
            if (compoundRef.getId() != "indexpage")
                pages.push_back(compoundRef);
            else
                hasMainPage = true;
        }

        void addDirectory(const Reference& compoundRef)
        {
            const String& name = compoundRef.getName();

            StringArray str;
            StringUtils::split(str, name, "/");
            if (!str.empty())
            {
                if (str.size() == 1)
                    dirPaths.push_back(compoundRef);
            }
            directories.push_back(compoundRef);
        }

        void filterReference(const Doxygen::CompoundIndexQuery& query, const Reference& compoundRef)
        {
            switch (query.getKind())
            {
            case Doxygen::DCK_GROUP:
            case Doxygen::DCK_EXAMPLE:
            case Doxygen::DCK_PAGE:
                addPage(compoundRef);
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
                addDirectory(compoundRef);
                break;
            case Doxygen::DCK_INTERFACE:
            case Doxygen::DCK_SERVICE:
            case Doxygen::DCK_PROTOCOL:
            case Doxygen::DCK_CATEGORY:
            case Doxygen::DCK_EXCEPTION:
            case Doxygen::DCK_SINGLETON:
            case Doxygen::DCK_TYPE:
            case Doxygen::DCK_FILE:
            case Doxygen::DCK_INVALID:
            case Doxygen::DCK_MAX:
            default:
                break;
            }
        }

        void visitedCompound(const Doxygen::CompoundIndexQuery& query) override
        {
            Reference compoundRef;
            compoundRef.setName(query.getName());
            compoundRef.setId(query.getRefId());

            filterReference(query, compoundRef);

            SiteBuilder::get().insertCompound(query.getKind(),
                                              query.getName(),
                                              query.getRefId());

            query.foreachMember(
                [](const Doxygen::MemberIndexQuery& member)
                {
                    SiteBuilder::get().insertMember(member.getKind(),
                                                    member.getName(),
                                                    member.getRefId());
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
    void dispatch(DocumentWriter* writer, const Reference& page, const String& indexDir, const PathUtil& outDir, ReferenceList& output)
    {
        Console::writeLine("building => ", page.getId());

        PathUtil path(indexDir);
        path.fileName(StringCombine(page.getId(), ".xml"));

        if (path.exists())
        {
            Xml::Parser psr;
            psr.applyFilter(Doxygen::getFilter(), Doxygen::getFilterSize());
            psr.parse(path.fullPath());

            const Doxygen::DoxygenQuery doxygen(psr.root()->firstChildOf("doxygen"));

            Page pageVisitor(writer, page, outDir);
            if (pageVisitor.exec(doxygen))
                output.push_back(page);
        }
        else
            throw InputException("File, ", path.fullPath(), " does not exist");
    }

    void IndexPageWriter::dispatchFilter(IndexPageFilter& filter) const
    {
        for (const Reference& page : filter.pages)
            dispatch<GenericPageWriter>(_writer, page, _indexDir, _outDir, filter.outPages);
        for (const Reference& page : filter.namespaces)
            dispatch<NamespacePageWriter>(_writer, page, _indexDir, _outDir, filter.outNamespaces);
        for (const Reference& page : filter.classes)
            dispatch<ClassPageWriter>(_writer, page, _indexDir, _outDir, filter.outClasses);
        for (const Reference& page : filter.directories)
            dispatch<DirectoryPageWriter>(_writer, page, _indexDir, _outDir, filter.outDirectories);
    }

    String IndexPageWriter::makeFilename(const Reference& ref) const
    {
        return StringCombine(ref.getId(),
                             SiteBuilder::get().outputFileExt,
                             HashUtils::heading(ref.getName()));
    }

    void IndexPageWriter::extractTopLevelDirectories(ReferenceList& dir, const ReferenceList& list)
    {
        for (const Reference& item : list)
        {
            if (item.getName().find('/') == (size_t)-1)
                dir.push_back(item);
        }
    }

    void IndexPageWriter::writeReferenceFile(const String&        name,
                                             const String&        heading,
                                             const ReferenceList* listPtr,
                                             const int            specialization) const
    {
        OutputFileStream out(name);
        if (!out.is_open())
            throw InputException("Failed to open the supplied file path: ", name);

        if (!listPtr)
            throw InvalidPointer();

        _writer->beginDocument(out, heading);
        writeGenericTitleBar(out, _writer, heading);

        const ReferenceList& list = *listPtr;

        if (specialization == 0)
        {
            _writer->beginList(out);
            for (const Reference& page : list)
            {
                _writer->beginListItem(out);
                _writer->linkText(out, page.getName(), page.getId());
                _writer->endListItem(out);
            }
            _writer->endList(out);
        }
        else if (specialization == 1)  // directory
        {
            ReferenceList dest;
            extractTopLevelDirectories(dest, list);

            for (const Reference& page : dest)
            {
                _writer->embedContentLinkText(out,
                                              ICO_FOLDER,
                                              StringCombine(page.getId(), SiteBuilder::get().outputFileExt),
                                              page.getName());
                _writer->lineBreak(out);
            }
        }

        _writer->endSection(out);
        _writer->endDocument(out);
    }

    void writeMainPageDescriptions(DocumentWriter* writer,
                                   const String&   indexDir,
                                   OStream&        out)
    {
        Console::writeLine("building => Main page descriptions");

        PathUtil path(indexDir);
        path.fileName("indexpage.xml");

        if (path.exists())
        {
            Xml::Parser psr;
            psr.applyFilter(Doxygen::getFilter(), Doxygen::getFilterSize());
            psr.parse(path.fullPath());

            const Doxygen::DoxygenQuery doxygen(psr.root()->firstChildOf("doxygen"));

            doxygen.foreachCompoundDef(
                [writer, &out](const Doxygen::CompoundDefQuery& obj)
                {
                    DescriptionWriter brief(writer, &out);

                    Doxygen::DescriptionQuery desc = obj.getBriefDescription();
                    if (desc.isValid())
                        brief.write(desc);

                    DescriptionWriter detail(writer, &out);

                    desc = obj.getDetailedDescription();
                    if (desc.isValid())
                        detail.write(desc);
                });
        }
        else
        {
            Console::writeLine("Failed to find  ", path.fullPath());
        }
    }

    void IndexPageWriter::exec(const Doxygen::DoxygenIndexQuery& query, const PathUtil& outDir)
    {
        const SiteBuilder& builder = SiteBuilder::get();

        _outDir = outDir;
        _outDir.fileName(StringCombine("index", builder.outputFileExt));

        OutputFileStream out(_outDir.fullPath());
        if (!out.is_open())
            return;

        _stream = &out;

        // extract all, classes, namespaces, directories, and pages.
        IndexPageFilter filter;
        query.visit(&filter);

        dispatchFilter(filter);

        _writer->beginDocument(out, builder.projectTitle);

        writeGenericTitleBar(out, _writer, "");

        if (filter.hasMainPage)
            writeMainPageDescriptions(_writer, _indexDir, out);

        String file;
        String name;
        _outDir = outDir;

        _writer->beginList(out);

        for (int i = 0; i < 4; ++i)
        {
            int current = builder.pageIndex[i];
            if (current == -1)
                continue;

            Reference      ref;
            ReferenceList* list  = nullptr;
            bool           isDir = false;

            switch (current)
            {
            case Doxygen::DCK_PAGE:
                ref  = builder.getRefId("page_index");
                list = &filter.outPages;
                break;
            case Doxygen::DCK_DIR:
                ref   = builder.getRefId("directory_index");
                list  = &filter.outDirectories;
                isDir = true;
                break;
            case Doxygen::DCK_NAMESPACE:
                ref  = builder.getRefId("namespace_index");
                list = &filter.outNamespaces;
                break;
            case Doxygen::DCK_CLASS:
                ref  = builder.getRefId("class_index");
                list = &filter.outClasses;
                break;
            default:
                break;
            }

            if (list != nullptr)
            {
                name = StringCombine(_outDir.fullPath(), '/', ref.getId(), builder.outputFileExt);
                if (!name.empty())
                    writeReferenceFile(name, ref.getName(), list, isDir ? 1 : 0);

                _writer->beginListItem(out);
                _writer->linkRef(out, 0, ref.getId(), ref.getName());
                _writer->endListItem(out);
            }
        }

        _writer->endList(out);
        _writer->endSection(out);
        _writer->endDocument(out, "../index.xml");
        _stream = nullptr;
    }

}  // namespace MdDox
