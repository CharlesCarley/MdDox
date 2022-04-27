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

#include "DoxCompoundKind.h"
#include "DoxLanguage.h"
#include "DoxProtectionKind.h"
#include "DoxBool.h"

namespace MdDox::Doxygen
{
    namespace Visitors
    {
        class CompoundDefQueryVisitor
        {
        public:
            virtual ~CompoundDefQueryVisitor() = default;

            /**
             * \brief Callback for every _text_node
             */
            virtual void visitedText(const String& ) {}
            /**
             * \brief Called when the element <b>basecompoundref</b> is found.
             * \param query Const reference to the CompoundRefQuery class.
             */
            virtual void visitedBaseCompoundRef(const CompoundRefQuery& query) {}
            /**
             * \brief Called when the element <b>derivedcompoundref</b> is found.
             * \param query Const reference to the CompoundRefQuery class.
             */
            virtual void visitedDerivedCompoundRef(const CompoundRefQuery& query) {}
            /**
             * \brief Called when the element <b>includes</b> is found.
             * \param query Const reference to the IncQuery class.
             */
            virtual void visitedIncludes(const IncQuery& query) {}
            /**
             * \brief Called when the element <b>includedby</b> is found.
             * \param query Const reference to the IncQuery class.
             */
            virtual void visitedIncludedBy(const IncQuery& query) {}
            /**
             * \brief Called when the element <b>innerdir</b> is found.
             * \param query Const reference to the RefQuery class.
             */
            virtual void visitedInnerDir(const RefQuery& query) {}
            /**
             * \brief Called when the element <b>innerfile</b> is found.
             * \param query Const reference to the RefQuery class.
             */
            virtual void visitedInnerFile(const RefQuery& query) {}
            /**
             * \brief Called when the element <b>innerclass</b> is found.
             * \param query Const reference to the RefQuery class.
             */
            virtual void visitedInnerClass(const RefQuery& query) {}
            /**
             * \brief Called when the element <b>innernamespace</b> is found.
             * \param query Const reference to the RefQuery class.
             */
            virtual void visitedInnerNamespace(const RefQuery& query) {}
            /**
             * \brief Called when the element <b>innerpage</b> is found.
             * \param query Const reference to the RefQuery class.
             */
            virtual void visitedInnerPage(const RefQuery& query) {}
            /**
             * \brief Called when the element <b>innergroup</b> is found.
             * \param query Const reference to the RefQuery class.
             */
            virtual void visitedInnerGroup(const RefQuery& query) {}
            /**
             * \brief Called when the element <b>sectiondef</b> is found.
             * \param query Const reference to the SectionDefQuery class.
             */
            virtual void visitedSectionDef(const SectionDefQuery& query) {}
            /**
             * \brief Called when the element <b>incdepgraph</b> is found.
             * \param query Const reference to the GraphQuery class.
             */
            virtual void visitedIncDepGraph(const GraphQuery& query) {}
            /**
             * \brief Called when the element <b>invincdepgraph</b> is found.
             * \param query Const reference to the GraphQuery class.
             */
            virtual void visitedInvIncDepGraph(const GraphQuery& query) {}
            /**
             * \brief Called when the element <b>templateparamlist</b> is found.
             * \param query Const reference to the TemplateParamListQuery class.
             */
            virtual void visitedTemplateParamList(const TemplateParamListQuery& query) {}
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
             * \brief Called when the element <b>inheritancegraph</b> is found.
             * \param query Const reference to the GraphQuery class.
             */
            virtual void visitedInheritanceGraph(const GraphQuery& query) {}
            /**
             * \brief Called when the element <b>collaborationgraph</b> is found.
             * \param query Const reference to the GraphQuery class.
             */
            virtual void visitedCollaborationGraph(const GraphQuery& query) {}
            /**
             * \brief Called when the element <b>programlisting</b> is found.
             * \param query Const reference to the ListingQuery class.
             */
            virtual void visitedProgramListing(const ListingQuery& query) {}
            /**
             * \brief Called when the element <b>location</b> is found.
             * \param query Const reference to the LocationQuery class.
             */
            virtual void visitedLocation(const LocationQuery& query) {}
            /**
             * \brief Called when the element <b>listofallmembers</b> is found.
             * \param query Const reference to the ListOfAllMembersQuery class.
             */
            virtual void visitedListOfAllMembers(const ListOfAllMembersQuery& query) {}
            /**
             * \brief Called when the element <b>compoundname</b> is found.
             * \param text Const reference to the internal text.
             */
            virtual void visitedCompoundName(const String& text) {}
            /**
             * \brief Called when the element <b>title</b> is found.
             * \param text Const reference to the internal text.
             */
            virtual void visitedTitle(const String& text) {}
            /**
             * \brief Called when the element <b>tableofcontents</b> is found.
             * \param text Const reference to the internal text.
             */
            virtual void visitedTableOfContents(const String& text) {}

        };
    }
    /**
     * \brief Implements the <tt>compounddefType</tt> scaffolding.
     *
     * The following xml provides the source for the <b>compounddefType</b> 
     * scaffolding.
     * \n\n
     * \code{.xml}
     *  <xsd:complexType name="compounddefType">
     *    <xsd:sequence>
     *      <xsd:element name="compoundname" type="xsd:string"/>
     *      <xsd:element minOccurs="0" name="title" type="xsd:string"/>
     *      <xsd:element minOccurs="0" name="basecompoundref" type="compoundRefType" maxOccurs="unbounded"/>
     *      <xsd:element minOccurs="0" name="derivedcompoundref" type="compoundRefType" maxOccurs="unbounded"/>
     *      <xsd:element minOccurs="0" name="includes" type="incType" maxOccurs="unbounded"/>
     *      <xsd:element minOccurs="0" name="includedby" type="incType" maxOccurs="unbounded"/>
     *      <xsd:element minOccurs="0" name="incdepgraph" type="graphType"/>
     *      <xsd:element minOccurs="0" name="invincdepgraph" type="graphType"/>
     *      <xsd:element minOccurs="0" name="innerdir" type="refType" maxOccurs="unbounded"/>
     *      <xsd:element minOccurs="0" name="innerfile" type="refType" maxOccurs="unbounded"/>
     *      <xsd:element minOccurs="0" name="innerclass" type="refType" maxOccurs="unbounded"/>
     *      <xsd:element minOccurs="0" name="innernamespace" type="refType" maxOccurs="unbounded"/>
     *      <xsd:element minOccurs="0" name="innerpage" type="refType" maxOccurs="unbounded"/>
     *      <xsd:element minOccurs="0" name="innergroup" type="refType" maxOccurs="unbounded"/>
     *      <xsd:element minOccurs="0" name="templateparamlist" type="templateparamlistType"/>
     *      <xsd:element minOccurs="0" name="sectiondef" type="sectiondefType" maxOccurs="unbounded"/>
     *      <xsd:element minOccurs="0" name="tableofcontents" maxOccurs="1"/>
     *      <xsd:element minOccurs="0" name="briefdescription" type="descriptionType"/>
     *      <xsd:element minOccurs="0" name="detaileddescription" type="descriptionType"/>
     *      <xsd:element minOccurs="0" name="inheritancegraph" type="graphType"/>
     *      <xsd:element minOccurs="0" name="collaborationgraph" type="graphType"/>
     *      <xsd:element minOccurs="0" name="programlisting" type="listingType"/>
     *      <xsd:element minOccurs="0" name="location" type="locationType"/>
     *      <xsd:element minOccurs="0" name="listofallmembers" type="listofallmembersType"/>
     *    </xsd:sequence>
     *    <xsd:attribute name="id" type="xsd:string"/>
     *    <xsd:attribute name="kind" type="DoxCompoundKind"/>
     *    <xsd:attribute name="language" type="DoxLanguage" use="optional"/>
     *    <xsd:attribute name="prot" type="DoxProtectionKind"/>
     *    <xsd:attribute name="final" type="DoxBool" use="optional"/>
     *    <xsd:attribute name="sealed" type="DoxBool" use="optional"/>
     *    <xsd:attribute name="abstract" type="DoxBool" use="optional"/>
     *  </xsd:complexType>
     * \endcode
     */
    class CompoundDefQuery : public Query
    {
    public:
        CompoundDefQuery() = default;
        CompoundDefQuery(const CompoundDefQuery& other) = default;

        explicit CompoundDefQuery(Xml::Node* node) :
            Query(node)
        {
        }

        void visit(Visitors::CompoundDefQueryVisitor *) const;
        /**
         * \brief Provides access to the <b>abstract</b> element.
         *
         * \return The <b>abstract</b> enumerated value or -1 if the value is not found. 
         */
        DoxBoolEnum getAbstract() const;

        /**
         * \brief Provides access to the <b>language</b> element.
         *
         * \return The <b>language</b> enumerated value or -1 if the value is not found. 
         */
        DoxLanguageEnum getLanguage() const;

        /**
         * \brief Provides access to the <b>kind</b> element.
         *
         * \return The <b>kind</b> enumerated value or -1 if the value is not found. 
         */
        DoxCompoundKindEnum getKind() const;

        /**
         * \brief Provides access to the <b>prot</b> element.
         *
         * \return The <b>prot</b> enumerated value or -1 if the value is not found. 
         */
        DoxProtectionKindEnum getProt() const;

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
         * \brief Provides access to the <b>id</b> attribute.
         *
         * \return The <b>id</b> enumerated value or an empty string 
         *  the value is not found. 
         */
        const String& getId(const String& notFound="") const;

        /**
         * \brief Provides access to the <b>compoundname</b> tag's inner text.
         *
         * \return The <b>compoundname's</b> text or the default value if the node is invalid. 
         */
        const String& getCompoundName(const String& notFound="") const;

        /**
         * \brief Provides access to the <b>title</b> tag's inner text.
         *
         * \return The <b>title's</b> text or the default value if the node is invalid. 
         */
        const String& getTitle(const String& notFound="") const;

        /**
         * \brief Provides access to the <b>tableofcontents</b> tag's inner text.
         *
         * \return The <b>tableofcontents's</b> text or the default value if the node is invalid. 
         */
        const String& getTableOfContents(const String& notFound="") const;

        /**
         * \brief Provides access to the <b>incdepgraph</b> attribute.
         */
        void getIncDepGraph(GraphQuery &dest) const;

        /**
         * \brief Provides access to the <b>incdepgraph</b> attribute.
         */
        GraphQuery getIncDepGraph() const;

        /**
         * \brief Provides access to the <b>invincdepgraph</b> attribute.
         */
        void getInvIncDepGraph(GraphQuery &dest) const;

        /**
         * \brief Provides access to the <b>invincdepgraph</b> attribute.
         */
        GraphQuery getInvIncDepGraph() const;

        /**
         * \brief Provides access to the <b>templateparamlist</b> attribute.
         */
        void getTemplateParamList(TemplateParamListQuery &dest) const;

        /**
         * \brief Provides access to the <b>templateparamlist</b> attribute.
         */
        TemplateParamListQuery getTemplateParamList() const;

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
         * \brief Provides access to the <b>inheritancegraph</b> attribute.
         */
        void getInheritanceGraph(GraphQuery &dest) const;

        /**
         * \brief Provides access to the <b>inheritancegraph</b> attribute.
         */
        GraphQuery getInheritanceGraph() const;

        /**
         * \brief Provides access to the <b>collaborationgraph</b> attribute.
         */
        void getCollaborationGraph(GraphQuery &dest) const;

        /**
         * \brief Provides access to the <b>collaborationgraph</b> attribute.
         */
        GraphQuery getCollaborationGraph() const;

        /**
         * \brief Provides access to the <b>programlisting</b> attribute.
         */
        void getProgramListing(ListingQuery &dest) const;

        /**
         * \brief Provides access to the <b>programlisting</b> attribute.
         */
        ListingQuery getProgramListing() const;

        /**
         * \brief Provides access to the <b>location</b> attribute.
         */
        void getLocation(LocationQuery &dest) const;

        /**
         * \brief Provides access to the <b>location</b> attribute.
         */
        LocationQuery getLocation() const;

        /**
         * \brief Provides access to the <b>listofallmembers</b> attribute.
         */
        void getListOfAllMembers(ListOfAllMembersQuery &dest) const;

        /**
         * \brief Provides access to the <b>listofallmembers</b> attribute.
         */
        ListOfAllMembersQuery getListOfAllMembers() const;

        /**
         * \brief Invokes the supplied callback on <b>basecompoundref</b> elements.
         */
        void foreachBaseCompoundRef(const CompoundRefQueryFunction& invoke) const;

        /**
         * \brief Invokes the supplied callback on <b>derivedcompoundref</b> elements.
         */
        void foreachDerivedCompoundRef(const CompoundRefQueryFunction& invoke) const;

        /**
         * \brief Invokes the supplied callback on <b>includes</b> elements.
         */
        void foreachIncludes(const IncQueryFunction& invoke) const;

        /**
         * \brief Invokes the supplied callback on <b>includedby</b> elements.
         */
        void foreachIncludedBy(const IncQueryFunction& invoke) const;

        /**
         * \brief Invokes the supplied callback on <b>innerdir</b> elements.
         */
        void foreachInnerDir(const RefQueryFunction& invoke) const;

        /**
         * \brief Invokes the supplied callback on <b>innerfile</b> elements.
         */
        void foreachInnerFile(const RefQueryFunction& invoke) const;

        /**
         * \brief Invokes the supplied callback on <b>innerclass</b> elements.
         */
        void foreachInnerClass(const RefQueryFunction& invoke) const;

        /**
         * \brief Invokes the supplied callback on <b>innernamespace</b> elements.
         */
        void foreachInnerNamespace(const RefQueryFunction& invoke) const;

        /**
         * \brief Invokes the supplied callback on <b>innerpage</b> elements.
         */
        void foreachInnerPage(const RefQueryFunction& invoke) const;

        /**
         * \brief Invokes the supplied callback on <b>innergroup</b> elements.
         */
        void foreachInnerGroup(const RefQueryFunction& invoke) const;

        /**
         * \brief Invokes the supplied callback on <b>sectiondef</b> elements.
         */
        void foreachSectionDef(const SectionDefQueryFunction& invoke) const;


    };
} // namespace MdDox::Doxygen
