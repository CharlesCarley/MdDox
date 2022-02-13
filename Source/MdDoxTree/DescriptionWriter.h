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
#include "Doxygen/DescriptionQuery.h"
#include "Utils/Path.h"

namespace MdDox
{
    class DocumentWriter;

    class DescriptionWriter final : public Doxygen::Visitors::DescriptionQueryVisitor
    {
    private:
        DocumentWriter*    _writer;
        OStream*           _stream;
        OutputStringStream _out;

        void visitedText(const String&) override;

        void visitedParagraph(const Doxygen::ParaQuery& query) override;

        void visitedSect1(const Doxygen::Sect1Query& query) override;

        void visitedTitle(const String& text) override;

    public:
        DescriptionWriter(DocumentWriter* writer, OStream* out);

        bool write(const Doxygen::DescriptionQuery& description);
    };

}  // namespace MdDox
