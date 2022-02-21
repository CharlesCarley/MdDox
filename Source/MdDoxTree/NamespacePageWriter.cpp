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
#include "NamespacePageWriter.h"
#include "Doxygen/DescriptionQuery.h"
#include "Doxygen/DoxSectionKind.h"
#include "Doxygen/IncQuery.h"
#include "Doxygen/RefQuery.h"
#include "Doxygen/SectionDefQuery.h"
#include "LocationWriter.h"
#include "MdDoxTree/DocumentWriter.h"
#include "MdDoxTree/Link.h"
#include "MdDoxTree/Reference.h"
#include "MdDoxTree/SiteBuilder.h"
#include "TypeFilter/DoxygenFilter.h"
#include "WriteUtils.h"

namespace MdDox
{
    class TableOfContents final : public Doxygen::Visitors::CompoundDefQueryVisitor
    {
    public:
        bool hasNamespaces{false};
        bool hasClasses{false};
        bool hasEnums{false};
        bool hasTypes{false};
        bool hasVariables{false};
        bool hasFunctions{false};

    public:
        bool hasAny() const
        {
            return hasNamespaces || hasClasses || hasEnums || hasTypes || hasVariables || hasFunctions;
        }

        void visitedInnerNamespace(const Doxygen::RefQuery& query) override
        {
            hasNamespaces = true;
        }

        void visitedInnerClass(const Doxygen::RefQuery& query) override
        {
            hasClasses = true;
        }

        void visitedSectionDef(const Doxygen::SectionDefQuery& query) override
        {
            switch (query.getKind())
            {
            case Doxygen::DSK_ENUM:
                hasEnums = true;
                break;
            case Doxygen::DSK_VAR:
                hasVariables = true;
                break;
            case Doxygen::DSK_FUNC:
                hasFunctions = true;
                break;
            case Doxygen::DSK_TYPEDEF:
                hasTypes = true;
                break;
            case Doxygen::DSK_DEFINE:
            case Doxygen::DSK_PRIVATE_FUNC:
            case Doxygen::DSK_PACKAGE_FUNC:
            case Doxygen::DSK_PUBLIC_STATIC_FUNC:
            case Doxygen::DSK_PRIVATE_STATIC_FUNC:
            case Doxygen::DSK_PROTECTED_FUNC:
            case Doxygen::DSK_PACKAGE_STATIC_FUNC:
            case Doxygen::DSK_PUBLIC_FUNC:
            case Doxygen::DSK_DCOP_FUNC:
            case Doxygen::DSK_PACKAGE_TYPE:
            case Doxygen::DSK_PROTECTED_TYPE:
            case Doxygen::DSK_PROTECTED_STATIC_FUNC:
            case Doxygen::DSK_USER_DEFINED:
            case Doxygen::DSK_PRIVATE_TYPE:
            case Doxygen::DSK_PUBLIC_TYPE:
            case Doxygen::DSK_PROTECTED_SLOT:
            case Doxygen::DSK_PRIVATE_SLOT:
            case Doxygen::DSK_PUBLIC_SLOT:
            case Doxygen::DSK_SIGNAL:
            case Doxygen::DSK_EVENT:
            case Doxygen::DSK_PROPERTY:
            case Doxygen::DSK_PACKAGE_STATIC_ATTRIB:
            case Doxygen::DSK_PUBLIC_ATTRIB:
            case Doxygen::DSK_PACKAGE_ATTRIB:
            case Doxygen::DSK_PRIVATE_ATTRIB:
            case Doxygen::DSK_PRIVATE_STATIC_ATTRIB:
            case Doxygen::DSK_PUBLIC_STATIC_ATTRIB:
            case Doxygen::DSK_RELATED:
            case Doxygen::DSK_PROTECTED_STATIC_ATTRIB:
            case Doxygen::DSK_PROTECTED_ATTRIB:
            case Doxygen::DSK_FRIEND:
            case Doxygen::DSK_PROTOTYPE:
            case Doxygen::DSK_INVALID:
            case Doxygen::DSK_MAX:
            default:
                break;
            }
        }
    };

    NamespacePageWriter::NamespacePageWriter(DocumentWriter*  writer,
                                             const Reference& ref,
                                             const PathUtil&  out) :
        PageWriter(writer, ref, out)
    {
    }

    void NamespacePageWriter::visitedCompoundName(const String& text)
    {
        writeNamespaceTitleBar(_out, _writer, _ref);
    }

    void NamespacePageWriter::visitedInnerClass(const Doxygen::RefQuery& query)
    {
        Reference ref;
        ref.setName(LinkUtils::lastBinaryResolution(query.text()));
        ref.setId(query.getRefId());

        if (!_classHeading)
        {
            _classHeading = true;
            _writer->addSection(_out, "Classes", 2);
        }

        writeReferenceIconLink(_out, _writer, ref, ICO_CLASS);
    }

    void NamespacePageWriter::visitedInnerNamespace(const Doxygen::RefQuery& query)
    {
        Reference ref;
        ref.setName(LinkUtils::lastBinaryResolution(query.text()));
        ref.setId(query.getRefId());

        if (!_namespaceHeading)
        {
            _namespaceHeading = true;
            _writer->addSection(_out, "Namespaces", 2);
        }

        writeReferenceIconLink(_out, _writer, ref, ICO_NAMESPACE);
    }

    void NamespacePageWriter::visitedBaseCompoundRef(const Doxygen::CompoundRefQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void NamespacePageWriter::visitedDerivedCompoundRef(const Doxygen::CompoundRefQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void NamespacePageWriter::visitedIncludes(const Doxygen::IncQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void NamespacePageWriter::visitedIncludedBy(const Doxygen::IncQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void NamespacePageWriter::visitedIncDepGraph(const Doxygen::GraphQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void NamespacePageWriter::visitedInvIncDepGraph(const Doxygen::GraphQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void NamespacePageWriter::visitedTemplateParamList(const Doxygen::TemplateParamListQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void NamespacePageWriter::visitedInheritanceGraph(const Doxygen::GraphQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void NamespacePageWriter::visitedCollaborationGraph(const Doxygen::GraphQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void NamespacePageWriter::visitedProgramListing(const Doxygen::ListingQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void NamespacePageWriter::visitedLocation(const Doxygen::LocationQuery& query)
    {
        if (!SiteBuilder::get().hideLocation)
        {
            LocationWriter lw(_writer, &_out);
            lw.write(query);
        }
    }

    void NamespacePageWriter::visitedListOfAllMembers(const Doxygen::ListOfAllMembersQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void NamespacePageWriter::visitedTitle(const String& text)
    {
        WRITE_STUB(_writer, _out);
    }

    void NamespacePageWriter::visitedTableOfContents(const String& text)
    {
        WRITE_STUB(_writer, _out);
    }

    void NamespacePageWriter::visitedInnerDir(const Doxygen::RefQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void NamespacePageWriter::visitedInnerFile(const Doxygen::RefQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void NamespacePageWriter::visitedInnerPage(const Doxygen::RefQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void NamespacePageWriter::visitedInnerGroup(const Doxygen::RefQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void NamespacePageWriter::notifyBriefDescription(const Doxygen::DescriptionQuery& query)
    {
        writeTableOfContents(query.node()->parent());
    }

    void NamespacePageWriter::notifyDetailDescriptionHeading(const Doxygen::DescriptionQuery& query)
    {
        _writer->addSection(_out, "Details", 2);
    }

    void NamespacePageWriter::writeTableOfContents(Xml::Node* compoundDef)
    {
        const Doxygen::CompoundDefQuery cdq(compoundDef);
        const String&                   id = cdq.getId();

        TableOfContents contents;
        cdq.visit(&contents);
        if (contents.hasAny())
        {
            _writer->beginSection(_out, "Contents", 2);
            _writer->beginList(_out);

            if (contents.hasNamespaces)
            {
                _writer->beginListItem(_out);
                _writer->linkRef(_out, 0, id, "Namespaces");
                _writer->endListItem(_out);
            }
            if (contents.hasClasses)
            {
                _writer->beginListItem(_out);
                _writer->linkRef(_out, 0, id, "Classes");
                _writer->endListItem(_out);
            }

            if (contents.hasEnums)
            {
                _writer->beginListItem(_out);
                _writer->linkRef(_out, 0, id, "Enums");
                _writer->endListItem(_out);
            }

            if (contents.hasTypes)
            {
                _writer->beginListItem(_out);
                _writer->linkRef(_out, 0, id, "Typedefs");
                _writer->endListItem(_out);
            }

            if (contents.hasVariables)
            {
                _writer->beginListItem(_out);
                _writer->linkRef(_out, 0, id, "Variables");
                _writer->lineBreak(_out);
            }

            _writer->endList(_out);
            _writer->endSection(_out);
        }
    }

    void NamespacePageWriter::preSortQuery(const Doxygen::CompoundDefQuery& query)
    {
        int              i = 0;
        Doxygen::SortMap map;
        map[Doxygen::DoxCompoundName]        = i++;
        map[Doxygen::DoxBriefDescription]    = i++;
        map[Doxygen::DoxDetailedDescription] = i++;
        map[Doxygen::DoxInnerNamespace]      = i++;
        map[Doxygen::DoxInnerclass]          = i++;
        map[Doxygen::DoxSectionDef]          = i;
        query.sort(map);
    }

}  // namespace MdDox
