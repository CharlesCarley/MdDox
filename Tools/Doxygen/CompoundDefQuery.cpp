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
#include "CompoundDefQuery.h"
#include "TypeFilter/DoxygenFilter.h"

#include "DescriptionQuery.h"
#include "CompoundRefQuery.h"
#include "ListingQuery.h"
#include "IncQuery.h"
#include "GraphQuery.h"
#include "RefQuery.h"
#include "TemplateParamListQuery.h"
#include "SectionDefQuery.h"
#include "LocationQuery.h"
#include "ListOfAllMembersQuery.h"

namespace MdDox::Doxygen
{
    void CompoundDefQuery::visit(Visitors::CompoundDefQueryVisitor *visitor) const
    {
        if (!_node || !visitor)
            return;
        const Xml::NodeArray& objects = _node->children();
        for (Xml::Node* obj : objects) {
            switch (obj->getTypeCode()) {
            case DoxTextNode:
                if (obj->hasText())
                    visitor->visitedText(obj->text());
                break;

            case 4:
                visitor->visitedBaseCompoundRef(CompoundRefQuery(obj));
                break;
            case 21:
                visitor->visitedDerivedCompoundRef(CompoundRefQuery(obj));
                break;
            case 41:
                visitor->visitedIncludes(IncQuery(obj));
                break;
            case 40:
                visitor->visitedIncludedBy(IncQuery(obj));
                break;
            case 46:
                visitor->visitedInnerDir(RefQuery(obj));
                break;
            case 47:
                visitor->visitedInnerFile(RefQuery(obj));
                break;
            case 45:
                visitor->visitedInnerClass(RefQuery(obj));
                break;
            case 49:
                visitor->visitedInnerNamespace(RefQuery(obj));
                break;
            case 50:
                visitor->visitedInnerPage(RefQuery(obj));
                break;
            case 48:
                visitor->visitedInnerGroup(RefQuery(obj));
                break;
            case 94:
                visitor->visitedSectionDef(SectionDefQuery(obj));
                break;
            case 39:
                visitor->visitedIncDepGraph(GraphQuery(obj));
                break;
            case 53:
                visitor->visitedInvIncDepGraph(GraphQuery(obj));
                break;
            case 102:
                visitor->visitedTemplateParamList(TemplateParamListQuery(obj));
                break;
            case 7:
                visitor->visitedBriefDescription(DescriptionQuery(obj));
                break;
            case 23:
                visitor->visitedDetailedDescription(DescriptionQuery(obj));
                break;
            case 43:
                visitor->visitedInheritanceGraph(GraphQuery(obj));
                break;
            case 12:
                visitor->visitedCollaborationGraph(GraphQuery(obj));
                break;
            case 80:
                visitor->visitedProgramListing(ListingQuery(obj));
                break;
            case 62:
                visitor->visitedLocation(LocationQuery(obj));
                break;
            case 61:
                visitor->visitedListOfAllMembers(ListOfAllMembersQuery(obj));
                break;
            case 15:
                visitor->visitedCompoundName(obj->text());
                break;
            case 103:
                visitor->visitedTitle(obj->text());
                break;
            case 99:
                visitor->visitedTableOfContents(obj->text());
                break;        
            default:
                break;
            }
        }
    }
    const String& CompoundDefQuery::getId(const String& notFound) const
    {
        if (_node)
            return _node->attribute("id", notFound);
        return notFound;
    }

	DoxBoolEnum CompoundDefQuery::getAbstract() const
	{
		if (_node)
			return (DoxBoolEnum)DoxBool::get(_node->attribute("abstract"));
		return (DoxBoolEnum)-1; 
	}

	DoxLanguageEnum CompoundDefQuery::getLanguage() const
	{
		if (_node)
			return (DoxLanguageEnum)DoxLanguage::get(_node->attribute("language"));
		return (DoxLanguageEnum)-1; 
	}

	DoxCompoundKindEnum CompoundDefQuery::getKind() const
	{
		if (_node)
			return (DoxCompoundKindEnum)DoxCompoundKind::get(_node->attribute("kind"));
		return (DoxCompoundKindEnum)-1; 
	}

	DoxProtectionKindEnum CompoundDefQuery::getProt() const
	{
		if (_node)
			return (DoxProtectionKindEnum)DoxProtectionKind::get(_node->attribute("prot"));
		return (DoxProtectionKindEnum)-1; 
	}

	DoxBoolEnum CompoundDefQuery::getFinal() const
	{
		if (_node)
			return (DoxBoolEnum)DoxBool::get(_node->attribute("final"));
		return (DoxBoolEnum)-1; 
	}

	DoxBoolEnum CompoundDefQuery::getSealed() const
	{
		if (_node)
			return (DoxBoolEnum)DoxBool::get(_node->attribute("sealed"));
		return (DoxBoolEnum)-1; 
	}

    const String& CompoundDefQuery::getCompoundName(const String& notFound) const
    {
        if (_node) {
            Xml::Node *node = _node->firstChildOf(15);
            if (node) return node->text();
        }
        return notFound;
    }

    const String& CompoundDefQuery::getTitle(const String& notFound) const
    {
        if (_node) {
            Xml::Node *node = _node->firstChildOf(103);
            if (node) return node->text();
        }
        return notFound;
    }

    const String& CompoundDefQuery::getTableOfContents(const String& notFound) const
    {
        if (_node) {
            Xml::Node *node = _node->firstChildOf(99);
            if (node) return node->text();
        }
        return notFound;
    }

	void CompoundDefQuery::getIncDepGraph(GraphQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(39);
			if (node)
				dest = GraphQuery(node);
			else
				dest.reset();
		}
	}

	GraphQuery CompoundDefQuery::getIncDepGraph() const
	{
		GraphQuery dest;
		getIncDepGraph(dest);
		return dest;
	}

	void CompoundDefQuery::getInvIncDepGraph(GraphQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(53);
			if (node)
				dest = GraphQuery(node);
			else
				dest.reset();
		}
	}

	GraphQuery CompoundDefQuery::getInvIncDepGraph() const
	{
		GraphQuery dest;
		getInvIncDepGraph(dest);
		return dest;
	}

	void CompoundDefQuery::getTemplateParamList(TemplateParamListQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(102);
			if (node)
				dest = TemplateParamListQuery(node);
			else
				dest.reset();
		}
	}

	TemplateParamListQuery CompoundDefQuery::getTemplateParamList() const
	{
		TemplateParamListQuery dest;
		getTemplateParamList(dest);
		return dest;
	}

	void CompoundDefQuery::getBriefDescription(DescriptionQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(7);
			if (node)
				dest = DescriptionQuery(node);
			else
				dest.reset();
		}
	}

	DescriptionQuery CompoundDefQuery::getBriefDescription() const
	{
		DescriptionQuery dest;
		getBriefDescription(dest);
		return dest;
	}

	void CompoundDefQuery::getDetailedDescription(DescriptionQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(23);
			if (node)
				dest = DescriptionQuery(node);
			else
				dest.reset();
		}
	}

	DescriptionQuery CompoundDefQuery::getDetailedDescription() const
	{
		DescriptionQuery dest;
		getDetailedDescription(dest);
		return dest;
	}

	void CompoundDefQuery::getInheritanceGraph(GraphQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(43);
			if (node)
				dest = GraphQuery(node);
			else
				dest.reset();
		}
	}

	GraphQuery CompoundDefQuery::getInheritanceGraph() const
	{
		GraphQuery dest;
		getInheritanceGraph(dest);
		return dest;
	}

	void CompoundDefQuery::getCollaborationGraph(GraphQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(12);
			if (node)
				dest = GraphQuery(node);
			else
				dest.reset();
		}
	}

	GraphQuery CompoundDefQuery::getCollaborationGraph() const
	{
		GraphQuery dest;
		getCollaborationGraph(dest);
		return dest;
	}

	void CompoundDefQuery::getProgramListing(ListingQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(80);
			if (node)
				dest = ListingQuery(node);
			else
				dest.reset();
		}
	}

	ListingQuery CompoundDefQuery::getProgramListing() const
	{
		ListingQuery dest;
		getProgramListing(dest);
		return dest;
	}

	void CompoundDefQuery::getLocation(LocationQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(62);
			if (node)
				dest = LocationQuery(node);
			else
				dest.reset();
		}
	}

	LocationQuery CompoundDefQuery::getLocation() const
	{
		LocationQuery dest;
		getLocation(dest);
		return dest;
	}

	void CompoundDefQuery::getListOfAllMembers(ListOfAllMembersQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(61);
			if (node)
				dest = ListOfAllMembersQuery(node);
			else
				dest.reset();
		}
	}

	ListOfAllMembersQuery CompoundDefQuery::getListOfAllMembers() const
	{
		ListOfAllMembersQuery dest;
		getListOfAllMembers(dest);
		return dest;
	}

    void CompoundDefQuery::foreachBaseCompoundRef(const CompoundRefQueryFunction& invoke) const
    {
        QueryForEach<CompoundRefQuery, 4>(invoke, _node);
    }

    void CompoundDefQuery::foreachDerivedCompoundRef(const CompoundRefQueryFunction& invoke) const
    {
        QueryForEach<CompoundRefQuery, 21>(invoke, _node);
    }

    void CompoundDefQuery::foreachIncludes(const IncQueryFunction& invoke) const
    {
        QueryForEach<IncQuery, 41>(invoke, _node);
    }

    void CompoundDefQuery::foreachIncludedBy(const IncQueryFunction& invoke) const
    {
        QueryForEach<IncQuery, 40>(invoke, _node);
    }

    void CompoundDefQuery::foreachInnerDir(const RefQueryFunction& invoke) const
    {
        QueryForEach<RefQuery, 46>(invoke, _node);
    }

    void CompoundDefQuery::foreachInnerFile(const RefQueryFunction& invoke) const
    {
        QueryForEach<RefQuery, 47>(invoke, _node);
    }

    void CompoundDefQuery::foreachInnerClass(const RefQueryFunction& invoke) const
    {
        QueryForEach<RefQuery, 45>(invoke, _node);
    }

    void CompoundDefQuery::foreachInnerNamespace(const RefQueryFunction& invoke) const
    {
        QueryForEach<RefQuery, 49>(invoke, _node);
    }

    void CompoundDefQuery::foreachInnerPage(const RefQueryFunction& invoke) const
    {
        QueryForEach<RefQuery, 50>(invoke, _node);
    }

    void CompoundDefQuery::foreachInnerGroup(const RefQueryFunction& invoke) const
    {
        QueryForEach<RefQuery, 48>(invoke, _node);
    }

    void CompoundDefQuery::foreachSectionDef(const SectionDefQueryFunction& invoke) const
    {
        QueryForEach<SectionDefQuery, 94>(invoke, _node);
    }


} // namespace MdDox::Doxygen
