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
#include "Doxygen/CompoundIndexQuery.h"
#include "MdDoxTree/Reference.h"
#include "PageWriter.h"
#include "Utils/Path.h"

namespace MdDox
{
    class DocumentWriter;

    class NamespacePageWriter final : public PageWriter
    {
    private:
        bool _namespaceHeading{false};
        bool _classHeading{false};

        void visitedInnerClass(const Doxygen::RefQuery& query) override;

        void visitedInnerNamespace(const Doxygen::RefQuery& query) override;

        void visitedCompoundName(const String& text) override;

        void visitedBaseCompoundRef(const Doxygen::CompoundRefQuery& query) override;

        void visitedDerivedCompoundRef(const Doxygen::CompoundRefQuery& query) override;

        void visitedIncludes(const Doxygen::IncQuery& query) override;

        void visitedIncludedBy(const Doxygen::IncQuery& query) override;

        void visitedInnerDir(const Doxygen::RefQuery& query) override;

        void visitedInnerFile(const Doxygen::RefQuery& query) override;

        void visitedInnerPage(const Doxygen::RefQuery& query) override;

        void visitedInnerGroup(const Doxygen::RefQuery& query) override;

    	void visitedIncDepGraph(const Doxygen::GraphQuery& query) override;

        void visitedInvIncDepGraph(const Doxygen::GraphQuery& query) override;

        void visitedTemplateParamList(const Doxygen::TemplateParamListQuery& query) override;

        void visitedInheritanceGraph(const Doxygen::GraphQuery& query) override;

        void visitedCollaborationGraph(const Doxygen::GraphQuery& query) override;

        void visitedProgramListing(const Doxygen::ListingQuery& query) override;

        void visitedLocation(const Doxygen::LocationQuery& query) override;

        void visitedListOfAllMembers(const Doxygen::ListOfAllMembersQuery& query) override;

        void visitedTitle(const String& text) override;

        void visitedTableOfContents(const String& text) override;

        void writeTableOfContents(Xml::Node* compoundDef);

        void preSortQuery(const Doxygen::CompoundDefQuery& query) override;

        void notifyBriefDescription(const Doxygen::DescriptionQuery& query) override;
        //void notifyDetailDescriptionHeading(const Doxygen::DescriptionQuery& query) override;
        void notifyDetailDescription(const Doxygen::DescriptionQuery& query) override;

    public:
        NamespacePageWriter(DocumentWriter* writer, const Reference& ref, const PathUtil& out);
        ~NamespacePageWriter() override = default;
    };

}  // namespace MdDox
