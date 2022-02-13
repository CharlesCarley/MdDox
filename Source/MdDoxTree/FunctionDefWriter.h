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
#include "Doxygen/MemberDefQuery.h"
#include "Utils/Path.h"

namespace MdDox
{
    class DocumentWriter;

    class FunctionDefWriter final : public Doxygen::Visitors::MemberDefQueryVisitor
    {
    private:
        DocumentWriter*    _writer;
        OStream*           _stream;
        OutputStringStream _out;
        bool               _firstParam;

        void visitedReImplements(const Doxygen::ReimplementQuery& query) override;

        void visitedReImplementedBy(const Doxygen::ReimplementQuery& query) override;

        void visitedEnumValue(const Doxygen::EnumValueQuery& query) override;

        void visitedReferences(const Doxygen::ReferenceQuery& query) override;

        void visitedReferencedBy(const Doxygen::ReferenceQuery& query) override;

        void visitedTemplateParamList(const Doxygen::TemplateParamListQuery& query) override;

        void visitedInitializer(const Doxygen::LinkedTextQuery& query) override;

        void visitedExceptions(const Doxygen::LinkedTextQuery& query) override;

        void visitedBriefDescription(const Doxygen::DescriptionQuery& query) override;

        void visitedType(const Doxygen::LinkedTextQuery& query) override;

        void visitedName(const String& text) override;

        void visitedParameter(const Doxygen::ParamQuery& query) override;

        void visitedDetailedDescription(const Doxygen::DescriptionQuery& query) override;

        void visitedLocation(const Doxygen::LocationQuery& query) override;

        void visitedWrite(const String& text) override;

    public:
        FunctionDefWriter(DocumentWriter* writer, OStream* out);

        bool write(const Doxygen::MemberDefQuery& mdq);
    };

}  // namespace MdDox
