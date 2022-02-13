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
#include "MemberDefQuery.h"
#include "TypeFilter/DoxygenFilter.h"

#include "TemplateParamListQuery.h"
#include "LinkedTextQuery.h"
#include "DescriptionQuery.h"
#include "EnumValueQuery.h"
#include "ReimplementQuery.h"
#include "ReferenceQuery.h"
#include "ParamQuery.h"
#include "LocationQuery.h"

namespace MdDox::Doxygen
{
    void MemberDefQuery::visit(Visitors::MemberDefQueryVisitor *visitor) const
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

            case 87:
                visitor->visitedReImplements(ReimplementQuery(obj));
                break;
            case 86:
                visitor->visitedReImplementedBy(ReimplementQuery(obj));
                break;
            case 69:
                visitor->visitedParameter(ParamQuery(obj));
                break;
            case 31:
                visitor->visitedEnumValue(EnumValueQuery(obj));
                break;
            case 84:
                visitor->visitedReferences(ReferenceQuery(obj));
                break;
            case 83:
                visitor->visitedReferencedBy(ReferenceQuery(obj));
                break;
            case 102:
                visitor->visitedTemplateParamList(TemplateParamListQuery(obj));
                break;
            case 104:
                visitor->visitedType(LinkedTextQuery(obj));
                break;
            case 44:
                visitor->visitedInitializer(LinkedTextQuery(obj));
                break;
            case 32:
                visitor->visitedExceptions(LinkedTextQuery(obj));
                break;
            case 7:
                visitor->visitedBriefDescription(DescriptionQuery(obj));
                break;
            case 23:
                visitor->visitedDetailedDescription(DescriptionQuery(obj));
                break;
            case 38:
                visitor->visitedInBodyDescription(DescriptionQuery(obj));
                break;
            case 62:
                visitor->visitedLocation(LocationQuery(obj));
                break;
            case 18:
                visitor->visitedDefinition(obj->text());
                break;
            case 2:
                visitor->visitedArgsString(obj->text());
                break;
            case 65:
                visitor->visitedName(obj->text());
                break;
            case 109:
                visitor->visitedWrite(obj->text());
                break;        
            default:
                break;
            }
        }
    }
    const String& MemberDefQuery::getId(const String& notFound) const
    {
        if (_node)
            return _node->attribute("id", notFound);
        return notFound;
    }

	DoxBoolEnum MemberDefQuery::getStatic() const
	{
		if (_node)
			return (DoxBoolEnum)DoxBool::get(_node->attribute("static"));
		return (DoxBoolEnum)-1; 
	}

	DoxMemberKindEnum MemberDefQuery::getKind() const
	{
		if (_node)
			return (DoxMemberKindEnum)DoxMemberKind::get(_node->attribute("kind"));
		return (DoxMemberKindEnum)-1; 
	}

	DoxBoolEnum MemberDefQuery::getAdd() const
	{
		if (_node)
			return (DoxBoolEnum)DoxBool::get(_node->attribute("add"));
		return (DoxBoolEnum)-1; 
	}

	DoxBoolEnum MemberDefQuery::getInline() const
	{
		if (_node)
			return (DoxBoolEnum)DoxBool::get(_node->attribute("inline"));
		return (DoxBoolEnum)-1; 
	}

	DoxBoolEnum MemberDefQuery::getConst() const
	{
		if (_node)
			return (DoxBoolEnum)DoxBool::get(_node->attribute("const"));
		return (DoxBoolEnum)-1; 
	}

	DoxProtectionKindEnum MemberDefQuery::getProt() const
	{
		if (_node)
			return (DoxProtectionKindEnum)DoxProtectionKind::get(_node->attribute("prot"));
		return (DoxProtectionKindEnum)-1; 
	}

	DoxBoolEnum MemberDefQuery::getContrained() const
	{
		if (_node)
			return (DoxBoolEnum)DoxBool::get(_node->attribute("contrained"));
		return (DoxBoolEnum)-1; 
	}

	DoxAccessorEnum MemberDefQuery::getAccessor() const
	{
		if (_node)
			return (DoxAccessorEnum)DoxAccessor::get(_node->attribute("accessor"));
		return (DoxAccessorEnum)-1; 
	}

	DoxBoolEnum MemberDefQuery::getStrong() const
	{
		if (_node)
			return (DoxBoolEnum)DoxBool::get(_node->attribute("strong"));
		return (DoxBoolEnum)-1; 
	}

	DoxBoolEnum MemberDefQuery::getOptional() const
	{
		if (_node)
			return (DoxBoolEnum)DoxBool::get(_node->attribute("optional"));
		return (DoxBoolEnum)-1; 
	}

	DoxRefQualifierKindEnum MemberDefQuery::getRefQual() const
	{
		if (_node)
			return (DoxRefQualifierKindEnum)DoxRefQualifierKind::get(_node->attribute("refqual"));
		return (DoxRefQualifierKindEnum)-1; 
	}

	DoxBoolEnum MemberDefQuery::getMayBeAmbiguous() const
	{
		if (_node)
			return (DoxBoolEnum)DoxBool::get(_node->attribute("maybeambiguous"));
		return (DoxBoolEnum)-1; 
	}

	DoxBoolEnum MemberDefQuery::getExplicit() const
	{
		if (_node)
			return (DoxBoolEnum)DoxBool::get(_node->attribute("explicit"));
		return (DoxBoolEnum)-1; 
	}

	DoxVirtualKindEnum MemberDefQuery::getVirt() const
	{
		if (_node)
			return (DoxVirtualKindEnum)DoxVirtualKind::get(_node->attribute("virt"));
		return (DoxVirtualKindEnum)-1; 
	}

	DoxBoolEnum MemberDefQuery::getVolatile() const
	{
		if (_node)
			return (DoxBoolEnum)DoxBool::get(_node->attribute("volatile"));
		return (DoxBoolEnum)-1; 
	}

	DoxBoolEnum MemberDefQuery::getGetTable() const
	{
		if (_node)
			return (DoxBoolEnum)DoxBool::get(_node->attribute("gettable"));
		return (DoxBoolEnum)-1; 
	}

	DoxBoolEnum MemberDefQuery::getMutable() const
	{
		if (_node)
			return (DoxBoolEnum)DoxBool::get(_node->attribute("mutable"));
		return (DoxBoolEnum)-1; 
	}

	DoxBoolEnum MemberDefQuery::getReadable() const
	{
		if (_node)
			return (DoxBoolEnum)DoxBool::get(_node->attribute("readable"));
		return (DoxBoolEnum)-1; 
	}

	DoxBoolEnum MemberDefQuery::getWritable() const
	{
		if (_node)
			return (DoxBoolEnum)DoxBool::get(_node->attribute("writable"));
		return (DoxBoolEnum)-1; 
	}

	DoxBoolEnum MemberDefQuery::getInitOnly() const
	{
		if (_node)
			return (DoxBoolEnum)DoxBool::get(_node->attribute("initonly"));
		return (DoxBoolEnum)-1; 
	}

	DoxBoolEnum MemberDefQuery::getMaybeVoid() const
	{
		if (_node)
			return (DoxBoolEnum)DoxBool::get(_node->attribute("maybevoid"));
		return (DoxBoolEnum)-1; 
	}

	DoxBoolEnum MemberDefQuery::getSetTable() const
	{
		if (_node)
			return (DoxBoolEnum)DoxBool::get(_node->attribute("settable"));
		return (DoxBoolEnum)-1; 
	}

	DoxBoolEnum MemberDefQuery::getFinal() const
	{
		if (_node)
			return (DoxBoolEnum)DoxBool::get(_node->attribute("final"));
		return (DoxBoolEnum)-1; 
	}

	DoxBoolEnum MemberDefQuery::getSealed() const
	{
		if (_node)
			return (DoxBoolEnum)DoxBool::get(_node->attribute("sealed"));
		return (DoxBoolEnum)-1; 
	}

	DoxBoolEnum MemberDefQuery::getNew() const
	{
		if (_node)
			return (DoxBoolEnum)DoxBool::get(_node->attribute("new"));
		return (DoxBoolEnum)-1; 
	}

	DoxBoolEnum MemberDefQuery::getRemove() const
	{
		if (_node)
			return (DoxBoolEnum)DoxBool::get(_node->attribute("remove"));
		return (DoxBoolEnum)-1; 
	}

	DoxBoolEnum MemberDefQuery::getRaise() const
	{
		if (_node)
			return (DoxBoolEnum)DoxBool::get(_node->attribute("raise"));
		return (DoxBoolEnum)-1; 
	}

	DoxBoolEnum MemberDefQuery::getRequired() const
	{
		if (_node)
			return (DoxBoolEnum)DoxBool::get(_node->attribute("required"));
		return (DoxBoolEnum)-1; 
	}

	DoxBoolEnum MemberDefQuery::getAttribute() const
	{
		if (_node)
			return (DoxBoolEnum)DoxBool::get(_node->attribute("attribute"));
		return (DoxBoolEnum)-1; 
	}

	DoxBoolEnum MemberDefQuery::getProperty() const
	{
		if (_node)
			return (DoxBoolEnum)DoxBool::get(_node->attribute("property"));
		return (DoxBoolEnum)-1; 
	}

	DoxBoolEnum MemberDefQuery::getReadonly() const
	{
		if (_node)
			return (DoxBoolEnum)DoxBool::get(_node->attribute("readonly"));
		return (DoxBoolEnum)-1; 
	}

	DoxBoolEnum MemberDefQuery::getBound() const
	{
		if (_node)
			return (DoxBoolEnum)DoxBool::get(_node->attribute("bound"));
		return (DoxBoolEnum)-1; 
	}

	DoxBoolEnum MemberDefQuery::getRemovable() const
	{
		if (_node)
			return (DoxBoolEnum)DoxBool::get(_node->attribute("removable"));
		return (DoxBoolEnum)-1; 
	}

	DoxBoolEnum MemberDefQuery::getTransient() const
	{
		if (_node)
			return (DoxBoolEnum)DoxBool::get(_node->attribute("transient"));
		return (DoxBoolEnum)-1; 
	}

	DoxBoolEnum MemberDefQuery::getMayBeDefault() const
	{
		if (_node)
			return (DoxBoolEnum)DoxBool::get(_node->attribute("maybedefault"));
		return (DoxBoolEnum)-1; 
	}

    const String& MemberDefQuery::getDefinition(const String& notFound) const
    {
        if (_node) {
            Xml::Node *node = _node->firstChildOf(18);
            if (node)
                return node->text();
        }
        return notFound;
    }

    const String& MemberDefQuery::getArgsString(const String& notFound) const
    {
        if (_node) {
            Xml::Node *node = _node->firstChildOf(2);
            if (node)
                return node->text();
        }
        return notFound;
    }

    const String& MemberDefQuery::getName(const String& notFound) const
    {
        if (_node) {
            Xml::Node *node = _node->firstChildOf(65);
            if (node)
                return node->text();
        }
        return notFound;
    }

    const String& MemberDefQuery::getWrite(const String& notFound) const
    {
        if (_node) {
            Xml::Node *node = _node->firstChildOf(109);
            if (node)
                return node->text();
        }
        return notFound;
    }

	void MemberDefQuery::getTemplateParamList(TemplateParamListQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(102);
			if (node)
				dest = TemplateParamListQuery(node);
			else
				dest.reset();
		}
	}

	TemplateParamListQuery MemberDefQuery::getTemplateParamList() const
	{
		TemplateParamListQuery dest;
		getTemplateParamList(dest);
		return dest;
	}

	void MemberDefQuery::getType(LinkedTextQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(104);
			if (node)
				dest = LinkedTextQuery(node);
			else
				dest.reset();
		}
	}

	LinkedTextQuery MemberDefQuery::getType() const
	{
		LinkedTextQuery dest;
		getType(dest);
		return dest;
	}

	void MemberDefQuery::getInitializer(LinkedTextQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(44);
			if (node)
				dest = LinkedTextQuery(node);
			else
				dest.reset();
		}
	}

	LinkedTextQuery MemberDefQuery::getInitializer() const
	{
		LinkedTextQuery dest;
		getInitializer(dest);
		return dest;
	}

	void MemberDefQuery::getExceptions(LinkedTextQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(32);
			if (node)
				dest = LinkedTextQuery(node);
			else
				dest.reset();
		}
	}

	LinkedTextQuery MemberDefQuery::getExceptions() const
	{
		LinkedTextQuery dest;
		getExceptions(dest);
		return dest;
	}

	void MemberDefQuery::getBriefDescription(DescriptionQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(7);
			if (node)
				dest = DescriptionQuery(node);
			else
				dest.reset();
		}
	}

	DescriptionQuery MemberDefQuery::getBriefDescription() const
	{
		DescriptionQuery dest;
		getBriefDescription(dest);
		return dest;
	}

	void MemberDefQuery::getDetailedDescription(DescriptionQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(23);
			if (node)
				dest = DescriptionQuery(node);
			else
				dest.reset();
		}
	}

	DescriptionQuery MemberDefQuery::getDetailedDescription() const
	{
		DescriptionQuery dest;
		getDetailedDescription(dest);
		return dest;
	}

	void MemberDefQuery::getInBodyDescription(DescriptionQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(38);
			if (node)
				dest = DescriptionQuery(node);
			else
				dest.reset();
		}
	}

	DescriptionQuery MemberDefQuery::getInBodyDescription() const
	{
		DescriptionQuery dest;
		getInBodyDescription(dest);
		return dest;
	}

	void MemberDefQuery::getLocation(LocationQuery &dest) const
	{
		if (_node) {
			Xml::Node *node = _node->firstChildOf(62);
			if (node)
				dest = LocationQuery(node);
			else
				dest.reset();
		}
	}

	LocationQuery MemberDefQuery::getLocation() const
	{
		LocationQuery dest;
		getLocation(dest);
		return dest;
	}

    void MemberDefQuery::foreachReImplements(const ReimplementQueryFunction& invoke) const
    {
        QueryForEach<ReimplementQuery, 87>(invoke, _node);
    }
    void MemberDefQuery::foreachReImplementedBy(const ReimplementQueryFunction& invoke) const
    {
        QueryForEach<ReimplementQuery, 86>(invoke, _node);
    }
    void MemberDefQuery::foreachParameter(const ParamQueryFunction& invoke) const
    {
        QueryForEach<ParamQuery, 69>(invoke, _node);
    }
    void MemberDefQuery::foreachEnumValue(const EnumValueQueryFunction& invoke) const
    {
        QueryForEach<EnumValueQuery, 31>(invoke, _node);
    }
    void MemberDefQuery::foreachReferences(const ReferenceQueryFunction& invoke) const
    {
        QueryForEach<ReferenceQuery, 84>(invoke, _node);
    }
    void MemberDefQuery::foreachReferencedBy(const ReferenceQueryFunction& invoke) const
    {
        QueryForEach<ReferenceQuery, 83>(invoke, _node);
    }


    const String& MemberDefQuery::text(const String &def) const
    {
        return _node ? _node->text() : def;
    }
    
    void MemberDefQuery::sort(const SortMap& childOrder) const
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
