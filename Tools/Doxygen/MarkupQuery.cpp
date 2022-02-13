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
#include "MarkupQuery.h"
#include "TypeFilter/DoxygenFilter.h"

#include "UrlLinkQuery.h"
#include "EmptyQuery.h"
#include "MarkupQuery.h"
#include "IndexEntryQuery.h"
#include "HeadingQuery.h"
#include "AnchorQuery.h"
#include "RefTextQuery.h"
#include "TitleQuery.h"
#include "ParaQuery.h"
#include "TableQuery.h"
#include "ListingQuery.h"
#include "VariableListQuery.h"
#include "ListQuery.h"
#include "SimpleSectQuery.h"
#include "ImageQuery.h"
#include "FileQuery.h"
#include "TocListQuery.h"
#include "LanguageQuery.h"
#include "ParamListQuery.h"
#include "BlockQuoteQuery.h"
#include "ParBlockQuery.h"

namespace MdDox::Doxygen
{
    void MarkupQuery::visit(Visitors::MarkupQueryVisitor *visitor) const
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

            case 58:
                visitor->visitedLineBreak(EmptyQuery(obj));
                break;
            case 36:
                visitor->visitedHRuler(EmptyQuery(obj));
                break;
            case 78:
                visitor->visitedPreFormatted(MarkupQuery(obj));
                break;
            case 80:
                visitor->visitedProgramListing(ListingQuery(obj));
                break;
            case 42:
                visitor->visitedIndexEntry(IndexEntryQuery(obj));
                break;
            case 67:
                visitor->visitedOrderedList(ListQuery(obj));
                break;
            case 54:
                visitor->visitedItemizedList(ListQuery(obj));
                break;
            case 95:
                visitor->visitedSimpleSect(SimpleSectQuery(obj));
                break;
            case 103:
                visitor->visitedTitle(TitleQuery(obj));
                break;
            case 106:
                visitor->visitedVariableList(VariableListQuery(obj));
                break;
            case 98:
                visitor->visitedTable(TableQuery(obj));
                break;
            case 34:
                visitor->visitedHeading(HeadingQuery(obj));
                break;
            case 37:
                visitor->visitedImage(ImageQuery(obj));
                break;
            case 25:
                visitor->visitedDotFile(FileQuery(obj));
                break;
            case 101:
                visitor->visitedTocList(TocListQuery(obj));
                break;
            case 57:
                visitor->visitedLanguage(LanguageQuery(obj));
                break;
            case 72:
                visitor->visitedParameterList(ParamListQuery(obj));
                break;
            case 5:
                visitor->visitedBlockQuote(BlockQuoteQuery(obj));
                break;
            case 76:
                visitor->visitedParBlock(ParBlockQuery(obj));
                break;
            case 108:
                visitor->visitedVerbatim(obj->text());
                break;
            case 105:
                visitor->visitedULink(UrlLinkQuery(obj));
                break;
            case 6:
                visitor->visitedBold(MarkupQuery(obj));
                break;
            case 29:
                visitor->visitedEmphasis(MarkupQuery(obj));
                break;
            case 16:
                visitor->visitedComputerOutput(MarkupQuery(obj));
                break;
            case 9:
                visitor->visitedCenter(MarkupQuery(obj));
                break;
            case 96:
                visitor->visitedSmall(MarkupQuery(obj));
                break;
            case 1:
                visitor->visitedAnchor(AnchorQuery(obj));
                break;
            case 82:
                visitor->visitedRef(RefTextQuery(obj));
                break;
            case 89:
                visitor->visitedSect(EmptyQuery(obj));
                break;
            case 85:
                visitor->visitedRegistered(EmptyQuery(obj));
                break;
            case 68:
                visitor->visitedParagraph(ParaQuery(obj));
                break;
            case 77:
                visitor->visitedPart(EmptyQuery(obj));
                break;
            case 81:
                visitor->visitedProp(EmptyQuery(obj));
                break;
            case 56:
                visitor->visitedLang(EmptyQuery(obj));
                break;
            case 24:
                visitor->visitedDot(obj->text());
                break;        
            default:
                break;
            }
        }
    }
    const String& MarkupQuery::getVerbatim(const String& notFound) const
    {
        if (_node) {
            Xml::Node *node = _node->firstChildOf(108);
            if (node)
                return node->text();
        }
        return notFound;
    }

	void MarkupQuery::getLineBreak(EmptyQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(58);
			if (node)
				dest = EmptyQuery(node);
			else
				dest.reset();
		}
	}

	EmptyQuery MarkupQuery::getLineBreak() const
	{
		EmptyQuery dest;
		getLineBreak(dest);
		return dest;
	}

	void MarkupQuery::getHRuler(EmptyQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(36);
			if (node)
				dest = EmptyQuery(node);
			else
				dest.reset();
		}
	}

	EmptyQuery MarkupQuery::getHRuler() const
	{
		EmptyQuery dest;
		getHRuler(dest);
		return dest;
	}

	void MarkupQuery::getPreFormatted(MarkupQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(78);
			if (node)
				dest = MarkupQuery(node);
			else
				dest.reset();
		}
	}

	MarkupQuery MarkupQuery::getPreFormatted() const
	{
		MarkupQuery dest;
		getPreFormatted(dest);
		return dest;
	}

	void MarkupQuery::getProgramListing(ListingQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(80);
			if (node)
				dest = ListingQuery(node);
			else
				dest.reset();
		}
	}

	ListingQuery MarkupQuery::getProgramListing() const
	{
		ListingQuery dest;
		getProgramListing(dest);
		return dest;
	}

	void MarkupQuery::getIndexEntry(IndexEntryQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(42);
			if (node)
				dest = IndexEntryQuery(node);
			else
				dest.reset();
		}
	}

	IndexEntryQuery MarkupQuery::getIndexEntry() const
	{
		IndexEntryQuery dest;
		getIndexEntry(dest);
		return dest;
	}

	void MarkupQuery::getOrderedList(ListQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(67);
			if (node)
				dest = ListQuery(node);
			else
				dest.reset();
		}
	}

	ListQuery MarkupQuery::getOrderedList() const
	{
		ListQuery dest;
		getOrderedList(dest);
		return dest;
	}

	void MarkupQuery::getItemizedList(ListQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(54);
			if (node)
				dest = ListQuery(node);
			else
				dest.reset();
		}
	}

	ListQuery MarkupQuery::getItemizedList() const
	{
		ListQuery dest;
		getItemizedList(dest);
		return dest;
	}

	void MarkupQuery::getSimpleSect(SimpleSectQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(95);
			if (node)
				dest = SimpleSectQuery(node);
			else
				dest.reset();
		}
	}

	SimpleSectQuery MarkupQuery::getSimpleSect() const
	{
		SimpleSectQuery dest;
		getSimpleSect(dest);
		return dest;
	}

	void MarkupQuery::getTitle(TitleQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(103);
			if (node)
				dest = TitleQuery(node);
			else
				dest.reset();
		}
	}

	TitleQuery MarkupQuery::getTitle() const
	{
		TitleQuery dest;
		getTitle(dest);
		return dest;
	}

	void MarkupQuery::getVariableList(VariableListQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(106);
			if (node)
				dest = VariableListQuery(node);
			else
				dest.reset();
		}
	}

	VariableListQuery MarkupQuery::getVariableList() const
	{
		VariableListQuery dest;
		getVariableList(dest);
		return dest;
	}

	void MarkupQuery::getTable(TableQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(98);
			if (node)
				dest = TableQuery(node);
			else
				dest.reset();
		}
	}

	TableQuery MarkupQuery::getTable() const
	{
		TableQuery dest;
		getTable(dest);
		return dest;
	}

	void MarkupQuery::getHeading(HeadingQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(34);
			if (node)
				dest = HeadingQuery(node);
			else
				dest.reset();
		}
	}

	HeadingQuery MarkupQuery::getHeading() const
	{
		HeadingQuery dest;
		getHeading(dest);
		return dest;
	}

	void MarkupQuery::getImage(ImageQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(37);
			if (node)
				dest = ImageQuery(node);
			else
				dest.reset();
		}
	}

	ImageQuery MarkupQuery::getImage() const
	{
		ImageQuery dest;
		getImage(dest);
		return dest;
	}

	void MarkupQuery::getDotFile(FileQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(25);
			if (node)
				dest = FileQuery(node);
			else
				dest.reset();
		}
	}

	FileQuery MarkupQuery::getDotFile() const
	{
		FileQuery dest;
		getDotFile(dest);
		return dest;
	}

	void MarkupQuery::getTocList(TocListQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(101);
			if (node)
				dest = TocListQuery(node);
			else
				dest.reset();
		}
	}

	TocListQuery MarkupQuery::getTocList() const
	{
		TocListQuery dest;
		getTocList(dest);
		return dest;
	}

	void MarkupQuery::getLanguage(LanguageQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(57);
			if (node)
				dest = LanguageQuery(node);
			else
				dest.reset();
		}
	}

	LanguageQuery MarkupQuery::getLanguage() const
	{
		LanguageQuery dest;
		getLanguage(dest);
		return dest;
	}

	void MarkupQuery::getParameterList(ParamListQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(72);
			if (node)
				dest = ParamListQuery(node);
			else
				dest.reset();
		}
	}

	ParamListQuery MarkupQuery::getParameterList() const
	{
		ParamListQuery dest;
		getParameterList(dest);
		return dest;
	}

	void MarkupQuery::getBlockQuote(BlockQuoteQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(5);
			if (node)
				dest = BlockQuoteQuery(node);
			else
				dest.reset();
		}
	}

	BlockQuoteQuery MarkupQuery::getBlockQuote() const
	{
		BlockQuoteQuery dest;
		getBlockQuote(dest);
		return dest;
	}

	void MarkupQuery::getParBlock(ParBlockQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(76);
			if (node)
				dest = ParBlockQuery(node);
			else
				dest.reset();
		}
	}

	ParBlockQuery MarkupQuery::getParBlock() const
	{
		ParBlockQuery dest;
		getParBlock(dest);
		return dest;
	}

    const String& MarkupQuery::getDot(const String& notFound) const
    {
        if (_node) {
            Xml::Node *node = _node->firstChildOf(24);
            if (node)
                return node->text();
        }
        return notFound;
    }

	void MarkupQuery::getULink(UrlLinkQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(105);
			if (node)
				dest = UrlLinkQuery(node);
			else
				dest.reset();
		}
	}

	UrlLinkQuery MarkupQuery::getULink() const
	{
		UrlLinkQuery dest;
		getULink(dest);
		return dest;
	}

	void MarkupQuery::getBold(MarkupQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(6);
			if (node)
				dest = MarkupQuery(node);
			else
				dest.reset();
		}
	}

	MarkupQuery MarkupQuery::getBold() const
	{
		MarkupQuery dest;
		getBold(dest);
		return dest;
	}

	void MarkupQuery::getEmphasis(MarkupQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(29);
			if (node)
				dest = MarkupQuery(node);
			else
				dest.reset();
		}
	}

	MarkupQuery MarkupQuery::getEmphasis() const
	{
		MarkupQuery dest;
		getEmphasis(dest);
		return dest;
	}

	void MarkupQuery::getComputerOutput(MarkupQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(16);
			if (node)
				dest = MarkupQuery(node);
			else
				dest.reset();
		}
	}

	MarkupQuery MarkupQuery::getComputerOutput() const
	{
		MarkupQuery dest;
		getComputerOutput(dest);
		return dest;
	}

	void MarkupQuery::getCenter(MarkupQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(9);
			if (node)
				dest = MarkupQuery(node);
			else
				dest.reset();
		}
	}

	MarkupQuery MarkupQuery::getCenter() const
	{
		MarkupQuery dest;
		getCenter(dest);
		return dest;
	}

	void MarkupQuery::getSmall(MarkupQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(96);
			if (node)
				dest = MarkupQuery(node);
			else
				dest.reset();
		}
	}

	MarkupQuery MarkupQuery::getSmall() const
	{
		MarkupQuery dest;
		getSmall(dest);
		return dest;
	}

	void MarkupQuery::getAnchor(AnchorQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(1);
			if (node)
				dest = AnchorQuery(node);
			else
				dest.reset();
		}
	}

	AnchorQuery MarkupQuery::getAnchor() const
	{
		AnchorQuery dest;
		getAnchor(dest);
		return dest;
	}

	void MarkupQuery::getRef(RefTextQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(82);
			if (node)
				dest = RefTextQuery(node);
			else
				dest.reset();
		}
	}

	RefTextQuery MarkupQuery::getRef() const
	{
		RefTextQuery dest;
		getRef(dest);
		return dest;
	}

	void MarkupQuery::getSect(EmptyQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(89);
			if (node)
				dest = EmptyQuery(node);
			else
				dest.reset();
		}
	}

	EmptyQuery MarkupQuery::getSect() const
	{
		EmptyQuery dest;
		getSect(dest);
		return dest;
	}

	void MarkupQuery::getRegistered(EmptyQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(85);
			if (node)
				dest = EmptyQuery(node);
			else
				dest.reset();
		}
	}

	EmptyQuery MarkupQuery::getRegistered() const
	{
		EmptyQuery dest;
		getRegistered(dest);
		return dest;
	}

	void MarkupQuery::getParagraph(ParaQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(68);
			if (node)
				dest = ParaQuery(node);
			else
				dest.reset();
		}
	}

	ParaQuery MarkupQuery::getParagraph() const
	{
		ParaQuery dest;
		getParagraph(dest);
		return dest;
	}

	void MarkupQuery::getPart(EmptyQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(77);
			if (node)
				dest = EmptyQuery(node);
			else
				dest.reset();
		}
	}

	EmptyQuery MarkupQuery::getPart() const
	{
		EmptyQuery dest;
		getPart(dest);
		return dest;
	}

	void MarkupQuery::getProp(EmptyQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(81);
			if (node)
				dest = EmptyQuery(node);
			else
				dest.reset();
		}
	}

	EmptyQuery MarkupQuery::getProp() const
	{
		EmptyQuery dest;
		getProp(dest);
		return dest;
	}

	void MarkupQuery::getLang(EmptyQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(56);
			if (node)
				dest = EmptyQuery(node);
			else
				dest.reset();
		}
	}

	EmptyQuery MarkupQuery::getLang() const
	{
		EmptyQuery dest;
		getLang(dest);
		return dest;
	}



    const String& MarkupQuery::text(const String &def) const
    {
        return _node ? _node->text() : def;
    }
    
    void MarkupQuery::sort(const SortMap& childOrder) const
    {
        if (_node) {
            _node->sort(
                [childOrder](Xml::Node *a, Xml::Node* b){
                    // This gives unmapped sections a higher index so that
                    // they are pushed to the end.
                    int va = 100000;
                    int vb = 100000;

                    const SortMap::const_iterator findA = childOrder.find((int)a->getTypeCode());
                    if (findA != childOrder.end())
                        va = findA->second;

                    const SortMap::const_iterator findB = childOrder.find((int)b->getTypeCode());
                    if (findB != childOrder.end())
                        vb = findB->second;
                    // sort less
                    return va < vb;
            });
        }
    }

} // namespace MdDox::Doxygen
