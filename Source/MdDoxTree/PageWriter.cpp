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
#include "MdDoxTree/PageWriter.h"
#include "DocumentWriter.h"
#include "Doxygen/DoxygenQuery.h"
#include "MdDoxTree/DescriptionWriter.h"
#include "MdDoxTree/SectionDefListingWriter.h"
#include "MdDoxTree/SectionDefWriter.h"
#include "MdDoxTree/SiteBuilder.h"
#include "MdDoxTree/WriteUtils.h"
#include "TypeFilter/DoxygenFilter.h"

namespace MdDox
{
    class DocumentWriter;

    PageWriter::PageWriter(DocumentWriter*  writer,
                           const Reference& ref,
                           const PathUtil&  out) :
        _writer(writer),
        _ref(ref),
        _outDir(out),
        _inDir(out)
    {
        _inDir = PathUtil(_outDir.parentDir(0));
        _inDir.appendDirectory("xml");
    }

    void PageWriter::visitedBriefDescription(const Doxygen::DescriptionQuery& query)
    {
        if (writeDescription(query))
            notifyBriefDescription(query);
    }

    void PageWriter::visitedDetailedDescription(const Doxygen::DescriptionQuery& query)
    {
        if (!query.empty())
            notifyDetailDescriptionHeading(query);
        if (writeDescription(query))
            notifyDetailDescription(query);
    }

    bool PageWriter::writeDescription(const Doxygen::DescriptionQuery& query)
    {
        DescriptionWriter pv(_writer, &_out);
        if (!pv.write(query))
            return false;
        return true;
    }

    void PageWriter::beginDocument(const Doxygen::CompoundDefQuery& query)
    {
        preSortQuery(query);

        String title = query.getTitle();
        if (title.empty())
        {
            // ref.getName is the same as query.getCompoundName
            // except that it is the string that was copied out of
            // the index.
            title = _ref.getName();
        }

        _writer->beginDocument(_out, LinkUtils::LBR(title));
        _writer->anchor(_out, query.getId());
    }

    void PageWriter::endDocument(const Doxygen::CompoundDefQuery&)
    {
        _writer->endDocument(_out, StringCombine(_ref.getId(), ".xml"));
    }

    void PageWriter::visitedSectionDef(const Doxygen::SectionDefQuery& query)
    {
        SectionDefListingWriter sd(_writer, &_out);
        sd.setDepth(2);

        if (sd.write(query))
            _sections.push_back(query.node());
    }

    void PageWriter::writeDetails()
    {
        for (Xml::Node* sec : _sections)
        {
            SectionDefWriter writer(_writer, &_out);
            writer.write(Doxygen::SectionDefQuery(sec));
        }
    }

    void PageWriter::exec(const Doxygen::DoxygenQuery& doxygen)
    {
        if (_out.is_open())
            _out.close();

        PathUtil path(_outDir);
        path.fileName(StringCombine(_ref.getId(), SiteBuilder::get().outputFileExt));

        _out.open(path.fullPath());
        if (!_out.is_open())
            throw InputException("Failed to open the output file: '", path.fullPath(), "'");

        const Doxygen::CompoundDefQuery query(
            doxygen.node()->getFirstChild(Doxygen::DoxCompoundDef));

        beginDocument(query);
        query.visit(this);
        writeDetails();
        endDocument(query);
    }
}  // namespace MdDox
