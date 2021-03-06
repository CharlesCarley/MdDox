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
#include "MdDoxTree/DirectoryPageWriter.h"
#include "Doxygen/DoxygenQuery.h"
#include "Doxygen/LocationQuery.h"
#include "Doxygen/RefQuery.h"
#include "MdDoxTree/DocumentWriter.h"
#include "MdDoxTree/HashUtils.h"
#include "MdDoxTree/Reference.h"
#include "MdDoxTree/SiteBuilder.h"
#include "MdDoxTree/WriteUtils.h"
#include "TypeFilter/DoxygenFilter.h"

namespace MdDox
{
    DirectoryPageWriter::DirectoryPageWriter(DocumentWriter*  writer,
                                             const Reference& ref,
                                             const PathUtil&  out) :
        PageWriter(writer, ref, out),
        _hasContent(false)
    {
    }

    void DirectoryPageWriter::beginDirectoryHeading()
    {
        _hasContent = true;
        //_writer->beginSection(_out, "Contents", 2);
    }

    void DirectoryPageWriter::visitedLocation(const Doxygen::LocationQuery& query)
    {
        _internalDir.setName(query.getFile());
        _internalDir.setId(_internalDir.getName());
    }

    void DirectoryPageWriter::visitedCompoundName(const String& text)
    {
        writeDirectoryTitleBar(_out, _writer, _internalDir);
    }

    void DirectoryPageWriter::visitedInnerDir(const Doxygen::RefQuery& query)
    {
        if (!_hasContent)
            beginDirectoryHeading();

        Reference ref;
        ref.setName(PathUtil(query.text()).fileName());
        ref.setId(query.getRefId());

        _writer->linkRefIcon(_out, ICO_FOLDER, 0, ref.getId(), ref.getName());
    }

    void DirectoryPageWriter::visitedInnerFile(const Doxygen::RefQuery& query)
    {
        if (!_hasContent)
            beginDirectoryHeading();

        const String& fileName = PathUtil(query.text()).fileName();
        const String& fileUrl  = SiteBuilder::get().fileUrl;
        const String  refId    = StringCombine(fileUrl, '/', _internalDir.getId(), fileName, HashUtils::lineNumber(1));

        Reference ref;
        ref.setName(fileName);
        ref.setId(refId);

        _writer->embedContentLinkText(_out, ICO_FILE, ref.getId(), ref.getName());
        _writer->lineBreak(_out);
    }

    void DirectoryPageWriter::visitedBaseCompoundRef(const Doxygen::CompoundRefQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void DirectoryPageWriter::visitedDerivedCompoundRef(const Doxygen::CompoundRefQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void DirectoryPageWriter::visitedIncludes(const Doxygen::IncQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void DirectoryPageWriter::visitedIncludedBy(const Doxygen::IncQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void DirectoryPageWriter::visitedInnerClass(const Doxygen::RefQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void DirectoryPageWriter::visitedInnerNamespace(const Doxygen::RefQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void DirectoryPageWriter::visitedInnerPage(const Doxygen::RefQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void DirectoryPageWriter::visitedInnerGroup(const Doxygen::RefQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void DirectoryPageWriter::visitedIncDepGraph(const Doxygen::GraphQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void DirectoryPageWriter::visitedInvIncDepGraph(const Doxygen::GraphQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void DirectoryPageWriter::visitedTemplateParamList(const Doxygen::TemplateParamListQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void DirectoryPageWriter::visitedInheritanceGraph(const Doxygen::GraphQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void DirectoryPageWriter::visitedCollaborationGraph(const Doxygen::GraphQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void DirectoryPageWriter::visitedProgramListing(const Doxygen::ListingQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void DirectoryPageWriter::visitedListOfAllMembers(const Doxygen::ListOfAllMembersQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void DirectoryPageWriter::visitedTitle(const String& text)
    {
        WRITE_STUB(_writer, _out);
    }

    void DirectoryPageWriter::visitedTableOfContents(const String& text)
    {
        WRITE_STUB(_writer, _out);
    }

    void DirectoryPageWriter::preSortQuery(const Doxygen::CompoundDefQuery& query)
    {
        int              i = 0;
        Doxygen::SortMap map;
        map[Doxygen::DoxLocation]            = i++;
        map[Doxygen::DoxCompoundName]        = i++;
        map[Doxygen::DoxBriefDescription]    = i++;
        map[Doxygen::DoxDetailedDescription] = i++;
        map[Doxygen::DoxInnerDir]            = i++;
        map[Doxygen::DoxInnerFile]           = i;
        query.sort(map);
    }

}  // namespace MdDox
