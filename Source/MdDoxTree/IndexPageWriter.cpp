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
            compoundRef.setId(query.getRefId());

            switch (query.getKind())
            {
            case Doxygen::DCK_GROUP:
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
                const String name = compoundRef.getName();

                StringArray str;
                StringUtils::split(str, name, "/");
                if (!str.empty())
                {
                    compoundRef.setName(str.back());
                    if (str.size() == 1)
                        dirPaths.push_back(compoundRef);
                }
                directories.push_back(compoundRef);
            }
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
            default:
                break;
            }

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
    void dispatch(DocumentWriter* writer, const Reference& page, const String& indexDir, const PathUtil& outDir)
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
            pageVisitor.exec(doxygen);
        }
        else
            throw InputException("File, ", path.fullPath(), " does not exist");
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
        return StringCombine(ref.getId(),
                             SiteBuilder::get().outputFileExt,
                             HashUtils::heading(ref.getName()));
    }

    void IndexPageWriter::writeReferenceFile(const String&        name,
                                             IconId               icon,
                                             const String&        heading,
                                             const ReferenceList& list) const
    {
        OutputFileStream out(name);
        if (!out.is_open())
            throw InputException("Failed to open the supplied file path: ", name);

        _writer->beginDocument(out, heading);
        writeGenericTitleBar(out, _writer, heading);

        //_writer->beginSection(out, "Contents", 2);

        _writer->beginList(out);
        for (const Reference& page : list)
        {
            _writer->beginListItem(out);
            _writer->linkText(out, page.getName(), page.getId());
            _writer->endListItem(out);
        }
        _writer->endList(out);
        _writer->endSection(out);
        _writer->endDocument(out);
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

        String title = builder.getCompoundName("index");
        _writer->beginDocument(out, title.empty() ? builder.projectTitle : title);

        writeGenericTitleBar(out, _writer, "Contents");

        String file;
        String name;
        _outDir = outDir;

        _writer->beginSection(out, "Contents", 2);
        _writer->beginList(out);

        // Pages
        Reference ref = builder.getRefId("page_index");
        name          = StringCombine(_outDir.fullPath(), '/', ref.getId(), builder.outputFileExt);

        if (!name.empty())
            writeReferenceFile(name, ICO_FILE, ref.getName(), filter.pages);

        _writer->beginListItem(out);
        _writer->linkRef(out, 0, ref.getId(), ref.getName());
        _writer->endListItem(out);

        // Directories
        ref  = builder.getRefId("directory_index");
        name = StringCombine(_outDir.fullPath(), '/', ref.getId(), builder.outputFileExt);

        if (!name.empty())
            writeReferenceFile(name, ICO_FOLDER, ref.getName(), filter.directories);

        _writer->beginListItem(out);
        _writer->linkRef(out, 0, ref.getId(), ref.getName());
        _writer->endListItem(out);

        // Namespaces
        ref  = builder.getRefId("namespace_index");
        name = StringCombine(_outDir.fullPath(), '/', ref.getId(), builder.outputFileExt);

        if (!name.empty())
            writeReferenceFile(name, ICO_NAMESPACE, ref.getName(), filter.namespaces);

        _writer->beginListItem(out);
        _writer->linkRef(out, 0, ref.getId(), ref.getName());
        _writer->endListItem(out);

        // Classes

        ref  = builder.getRefId("class_index");
        name = StringCombine(_outDir.fullPath(), '/', ref.getId(), builder.outputFileExt);

        if (!name.empty())
            writeReferenceFile(name, ICO_CLASS, ref.getName(), filter.classes);

        _writer->beginListItem(out);
        _writer->linkRef(out, 0, ref.getId(), ref.getName());
        _writer->endListItem(out);

        _writer->endList(out);
        _writer->endSection(out);
        _writer->endDocument(out, "../index.xml");

        dispatchFilter(filter);
        _stream = nullptr;
    }

}  // namespace MdDox
