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
#include "Doxygen/DoxSectionKind.h"
#include "Doxygen/SectionDefQuery.h"
#include "Utils/Path.h"

namespace MdDox
{
    class DocumentWriter;

    class SectionDefListingWriter final : public Doxygen::Visitors::SectionDefQueryVisitor
    {
    private:
        DocumentWriter*    _writer;
        OStream*           _stream;
        OutputStringStream _out;
        int                _depth;

        void visitedMemberDef(const Doxygen::MemberDefQuery& query) override;

        void visitedDescription(const Doxygen::DescriptionQuery& query) override;

        void visitedHeader(const String& text) override;

        void writeHeading(Doxygen::DoxSectionKindEnum kind);
		
    public:
        SectionDefListingWriter(DocumentWriter* writer, OStream* out);

        void setDepth(int depth);
        bool write(const Doxygen::SectionDefQuery& sec);
    };

}  // namespace MdDox
/**/
