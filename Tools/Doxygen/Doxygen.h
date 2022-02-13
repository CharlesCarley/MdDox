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
#pragma once
#include <functional>
#include <unordered_map>
#include "Utils/String.h"

#include "Xml/Node.h"
#include "Utils/String.h"
#include "Utils/Exception.h"

namespace MdDox::Doxygen
{

    class CompoundRefQuery;
    class TitleQuery;
    class RefTextQuery;
    class DoxygenIndexQuery;
    class MemberIndexQuery;
    class CompoundIndexQuery;
    class Sect3Query;
    class DoxygenQuery;
    class CompoundDefQuery;
    class ListItemQuery;
    class ImageQuery;
    class ListOfAllMembersQuery;
    class SimpleSectQuery;
    class MemberRefQuery;
    class ReimplementQuery;
    class IncQuery;
    class GraphQuery;
    class RefQuery;
    class ParBlockQuery;
    class DescriptionQuery;
    class RefTextQuery;
    class SectionDefQuery;
    class VarListEntryQuery;
    class MemberDefQuery;
    class VariableListQuery;
    class ListQuery;
    class InternalS2Query;
    class EnumValueQuery;
    class InternalQuery;
    class Sect2Query;
    class TemplateParamListQuery;
    class ParamQuery;
    class InternalS4Query;
    class LinkedTextQuery;
    class FormulaQuery;
    class NodeQuery;
    class IndexEntryQuery;
    class ChildNodeQuery;
    class Sect1Query;
    class LinkQuery;
    class ListingQuery;
    class CodeLineQuery;
    class HighlightQuery;
    class UrlLinkQuery;
    class TocItemQuery;
    class SpQuery;
    class ReferenceQuery;
    class LocationQuery;
    class Sect4Query;
    class InternalS1Query;
    class InternalS3Query;
    class ParaQuery;
    class ParamNameListQuery;
    class MarkupQuery;
    class AnchorQuery;
    class TableQuery;
    class RowQuery;
    class LanguageQuery;
    class EntryQuery;
    class CaptionQuery;
    class HeadingQuery;
    class FileQuery;
    class TocListQuery;
    class ParamListQuery;
    class ParamListItemQuery;
    class ParamTypeQuery;
    class ParamNameQuery;
    class XRefSectQuery;
    class CopyQuery;
    class BlockQuoteQuery;
    class EmptyQuery; 

    using CompoundRefQueryFunction = std::function<void (const CompoundRefQuery&)>;
    using TitleQueryFunction = std::function<void (const TitleQuery&)>;
    using RefTextQueryFunction = std::function<void (const RefTextQuery&)>;
    using DoxygenIndexQueryFunction = std::function<void (const DoxygenIndexQuery&)>;
    using MemberIndexQueryFunction = std::function<void (const MemberIndexQuery&)>;
    using CompoundIndexQueryFunction = std::function<void (const CompoundIndexQuery&)>;
    using Sect3QueryFunction = std::function<void (const Sect3Query&)>;
    using DoxygenQueryFunction = std::function<void (const DoxygenQuery&)>;
    using CompoundDefQueryFunction = std::function<void (const CompoundDefQuery&)>;
    using ListItemQueryFunction = std::function<void (const ListItemQuery&)>;
    using ImageQueryFunction = std::function<void (const ImageQuery&)>;
    using ListOfAllMembersQueryFunction = std::function<void (const ListOfAllMembersQuery&)>;
    using SimpleSectQueryFunction = std::function<void (const SimpleSectQuery&)>;
    using MemberRefQueryFunction = std::function<void (const MemberRefQuery&)>;
    using ReimplementQueryFunction = std::function<void (const ReimplementQuery&)>;
    using IncQueryFunction = std::function<void (const IncQuery&)>;
    using GraphQueryFunction = std::function<void (const GraphQuery&)>;
    using RefQueryFunction = std::function<void (const RefQuery&)>;
    using ParBlockQueryFunction = std::function<void (const ParBlockQuery&)>;
    using DescriptionQueryFunction = std::function<void (const DescriptionQuery&)>;
    using RefTextQueryFunction = std::function<void (const RefTextQuery&)>;
    using SectionDefQueryFunction = std::function<void (const SectionDefQuery&)>;
    using VarListEntryQueryFunction = std::function<void (const VarListEntryQuery&)>;
    using MemberDefQueryFunction = std::function<void (const MemberDefQuery&)>;
    using VariableListQueryFunction = std::function<void (const VariableListQuery&)>;
    using ListQueryFunction = std::function<void (const ListQuery&)>;
    using InternalS2QueryFunction = std::function<void (const InternalS2Query&)>;
    using EnumValueQueryFunction = std::function<void (const EnumValueQuery&)>;
    using InternalQueryFunction = std::function<void (const InternalQuery&)>;
    using Sect2QueryFunction = std::function<void (const Sect2Query&)>;
    using TemplateParamListQueryFunction = std::function<void (const TemplateParamListQuery&)>;
    using ParamQueryFunction = std::function<void (const ParamQuery&)>;
    using InternalS4QueryFunction = std::function<void (const InternalS4Query&)>;
    using LinkedTextQueryFunction = std::function<void (const LinkedTextQuery&)>;
    using FormulaQueryFunction = std::function<void (const FormulaQuery&)>;
    using NodeQueryFunction = std::function<void (const NodeQuery&)>;
    using IndexEntryQueryFunction = std::function<void (const IndexEntryQuery&)>;
    using ChildNodeQueryFunction = std::function<void (const ChildNodeQuery&)>;
    using Sect1QueryFunction = std::function<void (const Sect1Query&)>;
    using LinkQueryFunction = std::function<void (const LinkQuery&)>;
    using ListingQueryFunction = std::function<void (const ListingQuery&)>;
    using CodeLineQueryFunction = std::function<void (const CodeLineQuery&)>;
    using HighlightQueryFunction = std::function<void (const HighlightQuery&)>;
    using UrlLinkQueryFunction = std::function<void (const UrlLinkQuery&)>;
    using TocItemQueryFunction = std::function<void (const TocItemQuery&)>;
    using SpQueryFunction = std::function<void (const SpQuery&)>;
    using ReferenceQueryFunction = std::function<void (const ReferenceQuery&)>;
    using LocationQueryFunction = std::function<void (const LocationQuery&)>;
    using Sect4QueryFunction = std::function<void (const Sect4Query&)>;
    using InternalS1QueryFunction = std::function<void (const InternalS1Query&)>;
    using InternalS3QueryFunction = std::function<void (const InternalS3Query&)>;
    using ParaQueryFunction = std::function<void (const ParaQuery&)>;
    using ParamNameListQueryFunction = std::function<void (const ParamNameListQuery&)>;
    using MarkupQueryFunction = std::function<void (const MarkupQuery&)>;
    using AnchorQueryFunction = std::function<void (const AnchorQuery&)>;
    using TableQueryFunction = std::function<void (const TableQuery&)>;
    using RowQueryFunction = std::function<void (const RowQuery&)>;
    using LanguageQueryFunction = std::function<void (const LanguageQuery&)>;
    using EntryQueryFunction = std::function<void (const EntryQuery&)>;
    using CaptionQueryFunction = std::function<void (const CaptionQuery&)>;
    using HeadingQueryFunction = std::function<void (const HeadingQuery&)>;
    using FileQueryFunction = std::function<void (const FileQuery&)>;
    using TocListQueryFunction = std::function<void (const TocListQuery&)>;
    using ParamListQueryFunction = std::function<void (const ParamListQuery&)>;
    using ParamListItemQueryFunction = std::function<void (const ParamListItemQuery&)>;
    using ParamTypeQueryFunction = std::function<void (const ParamTypeQuery&)>;
    using ParamNameQueryFunction = std::function<void (const ParamNameQuery&)>;
    using XRefSectQueryFunction = std::function<void (const XRefSectQuery&)>;
    using CopyQueryFunction = std::function<void (const CopyQuery&)>;
    using BlockQuoteQueryFunction = std::function<void (const BlockQuoteQuery&)>;
    using EmptyQueryFunction = std::function<void (const EmptyQuery&)>;

    using SortMap = std::unordered_map<int, int>;

    template <typename Query, int64_t Code>
    void QueryForEach(const std::function<void(const Query&)>& invoke,
                      const Xml::Node*                         fromNode)
    {
        if (fromNode)
        {
            const Xml::NodeArray& objects = fromNode->children();
            for (Xml::Node* node : objects)
            {
                if (node->isTypeOf(Code))
                    invoke(Query(node));
            }
        }
    }

}  // namespace MdDox::Doxygen
