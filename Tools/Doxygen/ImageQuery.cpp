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
#include "ImageQuery.h"
#include "TypeFilter/DoxygenFilter.h"

#include "EmptyQuery.h"
#include "UrlLinkQuery.h"
#include "MarkupQuery.h"
#include "AnchorQuery.h"
#include "RefTextQuery.h"
#include "ParaQuery.h"

namespace MdDox::Doxygen
{
    void ImageQuery::visit(Visitors::ImageQueryVisitor *visitor) const
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
    const String& ImageQuery::getName(const String& notFound) const
    {
        if (_node)
            return _node->attribute("name", notFound);
        return notFound;
    }

    const String& ImageQuery::getWidth(const String& notFound) const
    {
        if (_node)
            return _node->attribute("width", notFound);
        return notFound;
    }

    const String& ImageQuery::getHeight(const String& notFound) const
    {
        if (_node)
            return _node->attribute("height", notFound);
        return notFound;
    }

	DoxImageKindEnum ImageQuery::getType() const
	{
		if (_node)
			return (DoxImageKindEnum)DoxImageKind::get(_node->attribute("type"));
		return (DoxImageKindEnum)-1; 
	}

    const String& ImageQuery::getDot(const String& notFound) const
    {
        if (_node) {
            Xml::Node *node = _node->firstChildOf(24);
            if (node) return node->text();
        }
        return notFound;
    }

	void ImageQuery::getULink(UrlLinkQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(105);
			if (node)
				dest = UrlLinkQuery(node);
			else
				dest.reset();
		}
	}

	UrlLinkQuery ImageQuery::getULink() const
	{
		UrlLinkQuery dest;
		getULink(dest);
		return dest;
	}

	void ImageQuery::getBold(MarkupQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(6);
			if (node)
				dest = MarkupQuery(node);
			else
				dest.reset();
		}
	}

	MarkupQuery ImageQuery::getBold() const
	{
		MarkupQuery dest;
		getBold(dest);
		return dest;
	}

	void ImageQuery::getEmphasis(MarkupQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(29);
			if (node)
				dest = MarkupQuery(node);
			else
				dest.reset();
		}
	}

	MarkupQuery ImageQuery::getEmphasis() const
	{
		MarkupQuery dest;
		getEmphasis(dest);
		return dest;
	}

	void ImageQuery::getComputerOutput(MarkupQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(16);
			if (node)
				dest = MarkupQuery(node);
			else
				dest.reset();
		}
	}

	MarkupQuery ImageQuery::getComputerOutput() const
	{
		MarkupQuery dest;
		getComputerOutput(dest);
		return dest;
	}

	void ImageQuery::getCenter(MarkupQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(9);
			if (node)
				dest = MarkupQuery(node);
			else
				dest.reset();
		}
	}

	MarkupQuery ImageQuery::getCenter() const
	{
		MarkupQuery dest;
		getCenter(dest);
		return dest;
	}

	void ImageQuery::getSmall(MarkupQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(96);
			if (node)
				dest = MarkupQuery(node);
			else
				dest.reset();
		}
	}

	MarkupQuery ImageQuery::getSmall() const
	{
		MarkupQuery dest;
		getSmall(dest);
		return dest;
	}

	void ImageQuery::getAnchor(AnchorQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(1);
			if (node)
				dest = AnchorQuery(node);
			else
				dest.reset();
		}
	}

	AnchorQuery ImageQuery::getAnchor() const
	{
		AnchorQuery dest;
		getAnchor(dest);
		return dest;
	}

	void ImageQuery::getRef(RefTextQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(82);
			if (node)
				dest = RefTextQuery(node);
			else
				dest.reset();
		}
	}

	RefTextQuery ImageQuery::getRef() const
	{
		RefTextQuery dest;
		getRef(dest);
		return dest;
	}

	void ImageQuery::getSect(EmptyQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(89);
			if (node)
				dest = EmptyQuery(node);
			else
				dest.reset();
		}
	}

	EmptyQuery ImageQuery::getSect() const
	{
		EmptyQuery dest;
		getSect(dest);
		return dest;
	}

	void ImageQuery::getRegistered(EmptyQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(85);
			if (node)
				dest = EmptyQuery(node);
			else
				dest.reset();
		}
	}

	EmptyQuery ImageQuery::getRegistered() const
	{
		EmptyQuery dest;
		getRegistered(dest);
		return dest;
	}

	void ImageQuery::getParagraph(ParaQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(68);
			if (node)
				dest = ParaQuery(node);
			else
				dest.reset();
		}
	}

	ParaQuery ImageQuery::getParagraph() const
	{
		ParaQuery dest;
		getParagraph(dest);
		return dest;
	}

	void ImageQuery::getPart(EmptyQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(77);
			if (node)
				dest = EmptyQuery(node);
			else
				dest.reset();
		}
	}

	EmptyQuery ImageQuery::getPart() const
	{
		EmptyQuery dest;
		getPart(dest);
		return dest;
	}

	void ImageQuery::getProp(EmptyQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(81);
			if (node)
				dest = EmptyQuery(node);
			else
				dest.reset();
		}
	}

	EmptyQuery ImageQuery::getProp() const
	{
		EmptyQuery dest;
		getProp(dest);
		return dest;
	}

	void ImageQuery::getLang(EmptyQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(56);
			if (node)
				dest = EmptyQuery(node);
			else
				dest.reset();
		}
	}

	EmptyQuery ImageQuery::getLang() const
	{
		EmptyQuery dest;
		getLang(dest);
		return dest;
	}


} // namespace MdDox::Doxygen
