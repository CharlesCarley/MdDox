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
#include "Doxygen.h"

#include "DoxMemberKind.h"
#include "DoxVirtualKind.h"
#include "DoxProtectionKind.h"
#include "DoxBool.h"
#include "DoxRefQualifierKind.h"
#include "DoxAccessor.h"

namespace MdDox::Doxygen
{
    namespace Visitors
    {
        class MemberDefQueryVisitor
        {
        public:
            virtual ~MemberDefQueryVisitor() = default;

            /**
             * \brief Callback for every _text_node
             */
            virtual void visitedText(const String& ) {}
            /**
             * \brief Called when the element <b>reimplements</b> is found.
             * \param query Const reference to the ReimplementQuery class.
             */
            virtual void visitedReImplements(const ReimplementQuery& query) {}
            /**
             * \brief Called when the element <b>reimplementedby</b> is found.
             * \param query Const reference to the ReimplementQuery class.
             */
            virtual void visitedReImplementedBy(const ReimplementQuery& query) {}
            /**
             * \brief Called when the element <b>param</b> is found.
             * \param query Const reference to the ParamQuery class.
             */
            virtual void visitedParameter(const ParamQuery& query) {}
            /**
             * \brief Called when the element <b>enumvalue</b> is found.
             * \param query Const reference to the EnumValueQuery class.
             */
            virtual void visitedEnumValue(const EnumValueQuery& query) {}
            /**
             * \brief Called when the element <b>references</b> is found.
             * \param query Const reference to the ReferenceQuery class.
             */
            virtual void visitedReferences(const ReferenceQuery& query) {}
            /**
             * \brief Called when the element <b>referencedby</b> is found.
             * \param query Const reference to the ReferenceQuery class.
             */
            virtual void visitedReferencedBy(const ReferenceQuery& query) {}
            /**
             * \brief Called when the element <b>templateparamlist</b> is found.
             * \param query Const reference to the TemplateParamListQuery class.
             */
            virtual void visitedTemplateParamList(const TemplateParamListQuery& query) {}
            /**
             * \brief Called when the element <b>type</b> is found.
             * \param query Const reference to the LinkedTextQuery class.
             */
            virtual void visitedType(const LinkedTextQuery& query) {}
            /**
             * \brief Called when the element <b>initializer</b> is found.
             * \param query Const reference to the LinkedTextQuery class.
             */
            virtual void visitedInitializer(const LinkedTextQuery& query) {}
            /**
             * \brief Called when the element <b>exceptions</b> is found.
             * \param query Const reference to the LinkedTextQuery class.
             */
            virtual void visitedExceptions(const LinkedTextQuery& query) {}
            /**
             * \brief Called when the element <b>briefdescription</b> is found.
             * \param query Const reference to the DescriptionQuery class.
             */
            virtual void visitedBriefDescription(const DescriptionQuery& query) {}
            /**
             * \brief Called when the element <b>detaileddescription</b> is found.
             * \param query Const reference to the DescriptionQuery class.
             */
            virtual void visitedDetailedDescription(const DescriptionQuery& query) {}
            /**
             * \brief Called when the element <b>inbodydescription</b> is found.
             * \param query Const reference to the DescriptionQuery class.
             */
            virtual void visitedInBodyDescription(const DescriptionQuery& query) {}
            /**
             * \brief Called when the element <b>location</b> is found.
             * \param query Const reference to the LocationQuery class.
             */
            virtual void visitedLocation(const LocationQuery& query) {}
            /**
             * \brief Called when the element <b>definition</b> is found.
             * \param text Const reference to the internal text.
             */
            virtual void visitedDefinition(const String& text) {}
            /**
             * \brief Called when the element <b>argsstring</b> is found.
             * \param text Const reference to the internal text.
             */
            virtual void visitedArgsString(const String& text) {}
            /**
             * \brief Called when the element <b>name</b> is found.
             * \param text Const reference to the internal text.
             */
            virtual void visitedName(const String& text) {}
            /**
             * \brief Called when the element <b>write</b> is found.
             * \param text Const reference to the internal text.
             */
            virtual void visitedWrite(const String& text) {}

        };
    }
    /**
     * \brief Implements the <tt>memberdefType</tt> scaffolding.
     *
     * The following xml provides the source for the <b>memberdefType</b> 
     * scaffolding.
     *
     * \code{.xml}
     *  <xsd:complexType name="memberdefType">
     *    <xsd:sequence>
     *      <xsd:element minOccurs="0" name="templateparamlist" type="templateparamlistType"/>
     *      <xsd:element minOccurs="0" name="type" type="linkedTextType"/>
     *      <xsd:element minOccurs="0" name="definition"/>
     *      <xsd:element minOccurs="0" name="argsstring"/>
     *      <xsd:element name="name"/>
     *      <xsd:element minOccurs="0" name="read"/>
     *      <xsd:element minOccurs="0" name="write"/>
     *      <xsd:element minOccurs="0" name="bitfield"/>
     *      <xsd:element minOccurs="0" name="reimplements" type="reimplementType" maxOccurs="unbounded"/>
     *      <xsd:element minOccurs="0" name="reimplementedby" type="reimplementType" maxOccurs="unbounded"/>
     *      <xsd:element minOccurs="0" name="param" type="paramType" maxOccurs="unbounded"/>
     *      <xsd:element minOccurs="0" name="enumvalue" type="enumvalueType" maxOccurs="unbounded"/>
     *      <xsd:element minOccurs="0" name="initializer" type="linkedTextType"/>
     *      <xsd:element minOccurs="0" name="exceptions" type="linkedTextType"/>
     *      <xsd:element minOccurs="0" name="briefdescription" type="descriptionType"/>
     *      <xsd:element minOccurs="0" name="detaileddescription" type="descriptionType"/>
     *      <xsd:element minOccurs="0" name="inbodydescription" type="descriptionType"/>
     *      <xsd:element name="location" type="locationType"/>
     *      <xsd:element minOccurs="0" name="references" type="referenceType" maxOccurs="unbounded"/>
     *      <xsd:element minOccurs="0" name="referencedby" type="referenceType" maxOccurs="unbounded"/>
     *    </xsd:sequence>
     *    <xsd:attribute name="kind" type="DoxMemberKind"/>
     *    <xsd:attribute name="id" type="xsd:string"/>
     *    <xsd:attribute name="prot" type="DoxProtectionKind"/>
     *    <xsd:attribute name="static" type="DoxBool"/>
     *    <xsd:attribute name="strong" type="DoxBool" use="optional"/>
     *    <xsd:attribute name="const" type="DoxBool" use="optional"/>
     *    <xsd:attribute name="explicit" type="DoxBool" use="optional"/>
     *    <xsd:attribute name="inline" type="DoxBool" use="optional"/>
     *    <xsd:attribute name="refqual" type="DoxRefQualifierKind" use="optional"/>
     *    <xsd:attribute name="virt" type="DoxVirtualKind" use="optional"/>
     *    <xsd:attribute name="volatile" type="DoxBool" use="optional"/>
     *    <xsd:attribute name="mutable" type="DoxBool" use="optional"/>
     *    <xsd:attribute name="readable" type="DoxBool" use="optional"/>
     *    <xsd:attribute name="writable" type="DoxBool" use="optional"/>
     *    <xsd:attribute name="initonly" type="DoxBool" use="optional"/>
     *    <xsd:attribute name="settable" type="DoxBool" use="optional"/>
     *    <xsd:attribute name="gettable" type="DoxBool" use="optional"/>
     *    <xsd:attribute name="final" type="DoxBool" use="optional"/>
     *    <xsd:attribute name="sealed" type="DoxBool" use="optional"/>
     *    <xsd:attribute name="new" type="DoxBool" use="optional"/>
     *    <xsd:attribute name="add" type="DoxBool" use="optional"/>
     *    <xsd:attribute name="remove" type="DoxBool" use="optional"/>
     *    <xsd:attribute name="raise" type="DoxBool" use="optional"/>
     *    <xsd:attribute name="optional" type="DoxBool" use="optional"/>
     *    <xsd:attribute name="required" type="DoxBool" use="optional"/>
     *    <xsd:attribute name="accessor" type="DoxAccessor" use="optional"/>
     *    <xsd:attribute name="attribute" type="DoxBool" use="optional"/>
     *    <xsd:attribute name="property" type="DoxBool" use="optional"/>
     *    <xsd:attribute name="readonly" type="DoxBool" use="optional"/>
     *    <xsd:attribute name="bound" type="DoxBool" use="optional"/>
     *    <xsd:attribute name="removable" type="DoxBool" use="optional"/>
     *    <xsd:attribute name="contrained" type="DoxBool" use="optional"/>
     *    <xsd:attribute name="transient" type="DoxBool" use="optional"/>
     *    <xsd:attribute name="maybevoid" type="DoxBool" use="optional"/>
     *    <xsd:attribute name="maybedefault" type="DoxBool" use="optional"/>
     *    <xsd:attribute name="maybeambiguous" type="DoxBool" use="optional"/>
     *  </xsd:complexType>
     * \endcode
     */
    class MemberDefQuery
    {
    private:
        Xml::Node* _node;

    public:
        MemberDefQuery() :
            _node(nullptr)
        {
        }

        explicit MemberDefQuery(Xml::Node* node) :
            _node(node)
        {
        }

        MemberDefQuery(const MemberDefQuery& other) = default;

        /**
         * \brief Checks to see if the internal node is usable.
         */
        bool isValid() const;

        /**
         * \brief Checks to see if the internal node has children.
         */
        bool empty() const;

        /**
         * \brief Resets the internal node pointer to null.
         */
        void reset();

        /**
         * \brief Returns the wrapped node pointer.
         */
        Xml::Node* node() const;

        /**
         * \brief Sorts the nodes in the query based on priority of type.
         */
        void sort(const SortMap& childOrder) const;

        /**
         * \brief Provides access to the node's inner text.
         * \return The text data associated with this node the default value.
         */
        const String& text(const String& def="") const;

        void visit(Visitors::MemberDefQueryVisitor *) const;
        /**
         * \brief Provides access to the <b>static</b> element.
         *
         * \return The <b>static</b> enumerated value or -1 if the value is not found. 
         */
        DoxBoolEnum getStatic() const;

        /**
         * \brief Provides access to the <b>kind</b> element.
         *
         * \return The <b>kind</b> enumerated value or -1 if the value is not found. 
         */
        DoxMemberKindEnum getKind() const;

        /**
         * \brief Provides access to the <b>add</b> element.
         *
         * \return The <b>add</b> enumerated value or -1 if the value is not found. 
         */
        DoxBoolEnum getAdd() const;

        /**
         * \brief Provides access to the <b>inline</b> element.
         *
         * \return The <b>inline</b> enumerated value or -1 if the value is not found. 
         */
        DoxBoolEnum getInline() const;

        /**
         * \brief Provides access to the <b>const</b> element.
         *
         * \return The <b>const</b> enumerated value or -1 if the value is not found. 
         */
        DoxBoolEnum getConst() const;

        /**
         * \brief Provides access to the <b>prot</b> element.
         *
         * \return The <b>prot</b> enumerated value or -1 if the value is not found. 
         */
        DoxProtectionKindEnum getProt() const;

        /**
         * \brief Provides access to the <b>contrained</b> element.
         *
         * \return The <b>contrained</b> enumerated value or -1 if the value is not found. 
         */
        DoxBoolEnum getContrained() const;

        /**
         * \brief Provides access to the <b>accessor</b> element.
         *
         * \return The <b>accessor</b> enumerated value or -1 if the value is not found. 
         */
        DoxAccessorEnum getAccessor() const;

        /**
         * \brief Provides access to the <b>strong</b> element.
         *
         * \return The <b>strong</b> enumerated value or -1 if the value is not found. 
         */
        DoxBoolEnum getStrong() const;

        /**
         * \brief Provides access to the <b>optional</b> element.
         *
         * \return The <b>optional</b> enumerated value or -1 if the value is not found. 
         */
        DoxBoolEnum getOptional() const;

        /**
         * \brief Provides access to the <b>refqual</b> element.
         *
         * \return The <b>refqual</b> enumerated value or -1 if the value is not found. 
         */
        DoxRefQualifierKindEnum getRefQual() const;

        /**
         * \brief Provides access to the <b>maybeambiguous</b> element.
         *
         * \return The <b>maybeambiguous</b> enumerated value or -1 if the value is not found. 
         */
        DoxBoolEnum getMayBeAmbiguous() const;

        /**
         * \brief Provides access to the <b>explicit</b> element.
         *
         * \return The <b>explicit</b> enumerated value or -1 if the value is not found. 
         */
        DoxBoolEnum getExplicit() const;

        /**
         * \brief Provides access to the <b>virt</b> element.
         *
         * \return The <b>virt</b> enumerated value or -1 if the value is not found. 
         */
        DoxVirtualKindEnum getVirt() const;

        /**
         * \brief Provides access to the <b>volatile</b> element.
         *
         * \return The <b>volatile</b> enumerated value or -1 if the value is not found. 
         */
        DoxBoolEnum getVolatile() const;

        /**
         * \brief Provides access to the <b>gettable</b> element.
         *
         * \return The <b>gettable</b> enumerated value or -1 if the value is not found. 
         */
        DoxBoolEnum getGetTable() const;

        /**
         * \brief Provides access to the <b>mutable</b> element.
         *
         * \return The <b>mutable</b> enumerated value or -1 if the value is not found. 
         */
        DoxBoolEnum getMutable() const;

        /**
         * \brief Provides access to the <b>readable</b> element.
         *
         * \return The <b>readable</b> enumerated value or -1 if the value is not found. 
         */
        DoxBoolEnum getReadable() const;

        /**
         * \brief Provides access to the <b>writable</b> element.
         *
         * \return The <b>writable</b> enumerated value or -1 if the value is not found. 
         */
        DoxBoolEnum getWritable() const;

        /**
         * \brief Provides access to the <b>initonly</b> element.
         *
         * \return The <b>initonly</b> enumerated value or -1 if the value is not found. 
         */
        DoxBoolEnum getInitOnly() const;

        /**
         * \brief Provides access to the <b>maybevoid</b> element.
         *
         * \return The <b>maybevoid</b> enumerated value or -1 if the value is not found. 
         */
        DoxBoolEnum getMaybeVoid() const;

        /**
         * \brief Provides access to the <b>settable</b> element.
         *
         * \return The <b>settable</b> enumerated value or -1 if the value is not found. 
         */
        DoxBoolEnum getSetTable() const;

        /**
         * \brief Provides access to the <b>final</b> element.
         *
         * \return The <b>final</b> enumerated value or -1 if the value is not found. 
         */
        DoxBoolEnum getFinal() const;

        /**
         * \brief Provides access to the <b>sealed</b> element.
         *
         * \return The <b>sealed</b> enumerated value or -1 if the value is not found. 
         */
        DoxBoolEnum getSealed() const;

        /**
         * \brief Provides access to the <b>new</b> element.
         *
         * \return The <b>new</b> enumerated value or -1 if the value is not found. 
         */
        DoxBoolEnum getNew() const;

        /**
         * \brief Provides access to the <b>remove</b> element.
         *
         * \return The <b>remove</b> enumerated value or -1 if the value is not found. 
         */
        DoxBoolEnum getRemove() const;

        /**
         * \brief Provides access to the <b>raise</b> element.
         *
         * \return The <b>raise</b> enumerated value or -1 if the value is not found. 
         */
        DoxBoolEnum getRaise() const;

        /**
         * \brief Provides access to the <b>required</b> element.
         *
         * \return The <b>required</b> enumerated value or -1 if the value is not found. 
         */
        DoxBoolEnum getRequired() const;

        /**
         * \brief Provides access to the <b>attribute</b> element.
         *
         * \return The <b>attribute</b> enumerated value or -1 if the value is not found. 
         */
        DoxBoolEnum getAttribute() const;

        /**
         * \brief Provides access to the <b>property</b> element.
         *
         * \return The <b>property</b> enumerated value or -1 if the value is not found. 
         */
        DoxBoolEnum getProperty() const;

        /**
         * \brief Provides access to the <b>readonly</b> element.
         *
         * \return The <b>readonly</b> enumerated value or -1 if the value is not found. 
         */
        DoxBoolEnum getReadonly() const;

        /**
         * \brief Provides access to the <b>bound</b> element.
         *
         * \return The <b>bound</b> enumerated value or -1 if the value is not found. 
         */
        DoxBoolEnum getBound() const;

        /**
         * \brief Provides access to the <b>removable</b> element.
         *
         * \return The <b>removable</b> enumerated value or -1 if the value is not found. 
         */
        DoxBoolEnum getRemovable() const;

        /**
         * \brief Provides access to the <b>transient</b> element.
         *
         * \return The <b>transient</b> enumerated value or -1 if the value is not found. 
         */
        DoxBoolEnum getTransient() const;

        /**
         * \brief Provides access to the <b>maybedefault</b> element.
         *
         * \return The <b>maybedefault</b> enumerated value or -1 if the value is not found. 
         */
        DoxBoolEnum getMayBeDefault() const;

        /**
         * \brief Provides access to the <b>id</b> attribute.
         *
         * \return The <b>id</b> enumerated value or an empty string 
         *  the value is not found. 
         */
        const String& getId(const String& notFound="") const;

        /**
         * \brief Provides access to the <b>definition</b> tag's inner text.
         *
         * \return The <b>definition's</b> text or the default value if the node is invalid. 
         */
        const String& getDefinition(const String& notFound="") const;

        /**
         * \brief Provides access to the <b>argsstring</b> tag's inner text.
         *
         * \return The <b>argsstring's</b> text or the default value if the node is invalid. 
         */
        const String& getArgsString(const String& notFound="") const;

        /**
         * \brief Provides access to the <b>name</b> tag's inner text.
         *
         * \return The <b>name's</b> text or the default value if the node is invalid. 
         */
        const String& getName(const String& notFound="") const;

        /**
         * \brief Provides access to the <b>write</b> tag's inner text.
         *
         * \return The <b>write's</b> text or the default value if the node is invalid. 
         */
        const String& getWrite(const String& notFound="") const;

        /**
         * \brief Provides access to the <b>templateparamlist</b> attribute.
         */
        void getTemplateParamList(TemplateParamListQuery &dest) const;

        /**
         * \brief Provides access to the <b>templateparamlist</b> attribute.
         */
        TemplateParamListQuery getTemplateParamList() const;

        /**
         * \brief Provides access to the <b>type</b> attribute.
         */
        void getType(LinkedTextQuery &dest) const;

        /**
         * \brief Provides access to the <b>type</b> attribute.
         */
        LinkedTextQuery getType() const;

        /**
         * \brief Provides access to the <b>initializer</b> attribute.
         */
        void getInitializer(LinkedTextQuery &dest) const;

        /**
         * \brief Provides access to the <b>initializer</b> attribute.
         */
        LinkedTextQuery getInitializer() const;

        /**
         * \brief Provides access to the <b>exceptions</b> attribute.
         */
        void getExceptions(LinkedTextQuery &dest) const;

        /**
         * \brief Provides access to the <b>exceptions</b> attribute.
         */
        LinkedTextQuery getExceptions() const;

        /**
         * \brief Provides access to the <b>briefdescription</b> attribute.
         */
        void getBriefDescription(DescriptionQuery &dest) const;

        /**
         * \brief Provides access to the <b>briefdescription</b> attribute.
         */
        DescriptionQuery getBriefDescription() const;

        /**
         * \brief Provides access to the <b>detaileddescription</b> attribute.
         */
        void getDetailedDescription(DescriptionQuery &dest) const;

        /**
         * \brief Provides access to the <b>detaileddescription</b> attribute.
         */
        DescriptionQuery getDetailedDescription() const;

        /**
         * \brief Provides access to the <b>inbodydescription</b> attribute.
         */
        void getInBodyDescription(DescriptionQuery &dest) const;

        /**
         * \brief Provides access to the <b>inbodydescription</b> attribute.
         */
        DescriptionQuery getInBodyDescription() const;

        /**
         * \brief Provides access to the <b>location</b> attribute.
         */
        void getLocation(LocationQuery &dest) const;

        /**
         * \brief Provides access to the <b>location</b> attribute.
         */
        LocationQuery getLocation() const;

        /**
         * \brief Invokes the supplied callback on <b>reimplements</b> elements.
         */
        void foreachReImplements(const ReimplementQueryFunction& invoke) const;

        /**
         * \brief Invokes the supplied callback on <b>reimplementedby</b> elements.
         */
        void foreachReImplementedBy(const ReimplementQueryFunction& invoke) const;

        /**
         * \brief Invokes the supplied callback on <b>param</b> elements.
         */
        void foreachParameter(const ParamQueryFunction& invoke) const;

        /**
         * \brief Invokes the supplied callback on <b>enumvalue</b> elements.
         */
        void foreachEnumValue(const EnumValueQueryFunction& invoke) const;

        /**
         * \brief Invokes the supplied callback on <b>references</b> elements.
         */
        void foreachReferences(const ReferenceQueryFunction& invoke) const;

        /**
         * \brief Invokes the supplied callback on <b>referencedby</b> elements.
         */
        void foreachReferencedBy(const ReferenceQueryFunction& invoke) const;


    };

    inline bool MemberDefQuery::isValid() const
    {
        return _node != nullptr;
    }

    inline void MemberDefQuery::reset()
    {
        _node = nullptr;
    }

    inline Xml::Node* MemberDefQuery::node() const
    {
        return _node;
    }

    inline bool MemberDefQuery::empty() const
    {
        return _node? !_node->hasChildren() : true;
    }

} // namespace MdDox::Doxygen
