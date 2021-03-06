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
#include "MdDoxTree/GenericPageWriter.h"
#include "Doxygen/DoxygenQuery.h"
#include "MdDoxTree/DocumentWriter.h"
#include "MdDoxTree/Reference.h"
#include "MdDoxTree/SiteBuilder.h"
#include "MdDoxTree/WriteUtils.h"
#include "TypeFilter/DoxygenFilter.h"

namespace MdDox
{
    GenericPageWriter::GenericPageWriter(DocumentWriter*  writer,
                                         const Reference& ref,
                                         const PathUtil&  out) :
        PageWriter(writer, ref, out)
    {
    }

    void GenericPageWriter::visitedBriefDescription(const Doxygen::DescriptionQuery& query)
    {
        if (SiteBuilder::get().pagesShowBrief)
            PageWriter::visitedBriefDescription(query);
    }

    void GenericPageWriter::visitedDetailedDescription(const Doxygen::DescriptionQuery& query)
    {
        PageWriter::visitedDetailedDescription(query);
    }

    void GenericPageWriter::visitedCompoundName(const String& text)
    {
        writeGenericTitleBar(_out, _writer, text);
    }

    void GenericPageWriter::preSortQuery(const Doxygen::CompoundDefQuery& query)
    {
        int              i = 0;
        Doxygen::SortMap map;
        map[Doxygen::DoxCompoundName]        = i++;
        map[Doxygen::DoxBriefDescription]    = i++;
        map[Doxygen::DoxDetailedDescription] = i;
        query.sort(map);
    }

}  // namespace MdDox
