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
#include "Doxygen/CompoundDefQuery.h"
#include "Doxygen/CompoundIndexQuery.h"
#include "MdDoxTree/Reference.h"
#include "Utils/Path.h"

namespace MdDox
{
    class DocumentWriter;

    class PageWriter : public Doxygen::Visitors::CompoundDefQueryVisitor
    {
    protected:
        DocumentWriter*  _writer;
        Reference        _ref;
        OutputFileStream _out;
        PathUtil         _outDir;
        PathUtil         _inDir;

        Xml::NodeArray _sections;

    private:
        bool writeDescription(const Doxygen::DescriptionQuery& query);

        void beginDocument(const Doxygen::CompoundDefQuery& query);

        void endDocument(const Doxygen::CompoundDefQuery& query);

    protected:
        void visitedSectionDef(const Doxygen::SectionDefQuery& query) override;

        void visitedBriefDescription(const Doxygen::DescriptionQuery& query) override;

        void visitedDetailedDescription(const Doxygen::DescriptionQuery& query) override;

        virtual void preSortQuery(const Doxygen::CompoundDefQuery& query) {}

        virtual void notifyBriefDescription(const Doxygen::DescriptionQuery& query) {}

        virtual void notifyDetailDescriptionHeading(const Doxygen::DescriptionQuery& query) {}
    	
        virtual void notifyDetailDescription(const Doxygen::DescriptionQuery& query) {}

        void writeDetails();

    public:
        PageWriter(DocumentWriter* writer, const Reference& ref, const PathUtil& out);
        ~PageWriter() override = default;

        bool exec(const Doxygen::DoxygenQuery& doxygen);
    };

}  // namespace MdDox
