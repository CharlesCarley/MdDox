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
#include "ClassPageWriter.h"
#include "DotWriter.h"
#include "Doxygen/ChildNodeQuery.h"
#include "Doxygen/CompoundRefQuery.h"
#include "Doxygen/GraphQuery.h"
#include "Doxygen/IncQuery.h"
#include "Doxygen/LocationQuery.h"
#include "GraphWriter.h"
#include "LocationWriter.h"
#include "MdDoxTree/DocumentWriter.h"
#include "MdDoxTree/Reference.h"
#include "MdDoxTree/SiteBuilder.h"
#include "TypeFilter/DoxygenFilter.h"
#include "WriteUtils.h"

namespace MdDox
{
    ClassPageWriter::ClassPageWriter(DocumentWriter*  writer,
                                     const Reference& ref,
                                     const PathUtil&  out) :
        PageWriter(writer, ref, out)
    {
    }

    void ClassPageWriter::visitedCompoundName(const String& text)
    {
        writeNamespaceTitleBar(_out, _writer, _ref);
    }

    void ClassPageWriter::visitedBaseCompoundRef(const Doxygen::CompoundRefQuery& query)
    {
        if (!_baseInit)
        {
            _baseInit = true;
            _writer->addSection(_out, "Derived From", 4);
        }

        Reference ref;
        ref.setName(query.text());
        ref.setReference(query.getRefId());
        writeReferenceIconLink(_out, _writer, ref, ICO_CLASS);
    }

    void ClassPageWriter::visitedDerivedCompoundRef(const Doxygen::CompoundRefQuery& query)
    {
        if (!_deriveInit)
        {
            _deriveInit = true;
            _writer->addSection(_out, "Derived By", 4);
        }

        Reference ref;
        ref.setName(query.text());
        ref.setReference(query.getRefId());
        writeReferenceIconLink(_out, _writer, ref, ICO_CLASS);
    }

    void ClassPageWriter::visitedIncludes(const Doxygen::IncQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void ClassPageWriter::visitedIncludedBy(const Doxygen::IncQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void ClassPageWriter::visitedInnerDir(const Doxygen::RefQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void ClassPageWriter::visitedInnerFile(const Doxygen::RefQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void ClassPageWriter::visitedInnerClass(const Doxygen::RefQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void ClassPageWriter::visitedInnerNamespace(const Doxygen::RefQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void ClassPageWriter::visitedInnerPage(const Doxygen::RefQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void ClassPageWriter::visitedInnerGroup(const Doxygen::RefQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void ClassPageWriter::visitedIncDepGraph(const Doxygen::GraphQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void ClassPageWriter::visitedInvIncDepGraph(const Doxygen::GraphQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void ClassPageWriter::visitedTemplateParamList(const Doxygen::TemplateParamListQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void ClassPageWriter::visitedInheritanceGraph(const Doxygen::GraphQuery& query)
    {
        GraphWriter gw(_writer, &_out);
        gw.write(query);
    }

    void ClassPageWriter::visitedCollaborationGraph(const Doxygen::GraphQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void ClassPageWriter::visitedProgramListing(const Doxygen::ListingQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void ClassPageWriter::visitedLocation(const Doxygen::LocationQuery& query)
    {
        if (!SiteBuilder::get().hideLocation)
        {
            LocationWriter lw(_writer, &_out);
            lw.write(query);
        }
    }

    void ClassPageWriter::visitedTitle(const String& text)
    {
        WRITE_STUB(_writer, _out);
    }

    void ClassPageWriter::visitedTableOfContents(const String& text)
    {
        WRITE_STUB(_writer, _out);
    }

    void ClassPageWriter::notifyDetailDescriptionHeading(const Doxygen::DescriptionQuery& query)
    {
        _writer->addSection(_out, "Details", 2);
    }

    void ClassPageWriter::notifyDetailDescription(const Doxygen::DescriptionQuery& query)
    {
        _writer->lineBreak(_out);
        _writer->lineBreak(_out);
    }

	void ClassPageWriter::notifyBriefDescription(const Doxygen::DescriptionQuery& query)
    {
        _writer->lineBreak(_out);
        _writer->lineBreak(_out);
    }


    void ClassPageWriter::preSortQuery(const Doxygen::CompoundDefQuery& query)
    {
        int              i = 0;
        Doxygen::SortMap map;
        map[Doxygen::DoxCompoundName]        = i++;
        map[Doxygen::DoxBriefDescription]    = i++;
        map[Doxygen::DoxBaseCompoundRef]     = i++;
        map[Doxygen::DoxDerivedCompoundRef]  = i++;
        map[Doxygen::DoxInheritanceGraph]    = i++;
        map[Doxygen::DoxInnerNamespace]      = i++;
        map[Doxygen::DoxInnerclass]          = i++;
        map[Doxygen::DoxSectionDef]          = i++;
        map[Doxygen::DoxDetailedDescription] = i++;
        map[Doxygen::DoxLocation]            = i++;
        map[Doxygen::DoxIncludes]            = i++;
        map[Doxygen::DoxIncludedBy]          = i++;

        query.sort(map);
    }

}  // namespace MdDox
