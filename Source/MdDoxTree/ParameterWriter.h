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
#include "Doxygen/ParamQuery.h"
#include "Utils/Path.h"

namespace MdDox
{
    class DocumentWriter;

    class ParameterWriter final : public Doxygen::Visitors::ParamQueryVisitor
    {
    private:
        DocumentWriter*    _writer;
        OStream*           _stream;
        OutputStringStream _out;

        void visitedType(const Doxygen::LinkedTextQuery& query) override;

    	void visitedDefVal(const Doxygen::LinkedTextQuery& query) override;

    	void visitedBriefDescription(const Doxygen::DescriptionQuery& query) override;

    	void visitedDeclName(const String& text) override;

    	void visitedDefName(const String& text) override;

    	void visitedArray(const String& text) override;

    public:
        ParameterWriter(DocumentWriter* writer, OStream* out);

        bool write(const Doxygen::ParamQuery& query);
    };

}  // namespace MdDox
