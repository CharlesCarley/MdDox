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
#include "Doxygen/Sect1Query.h"
#include "Utils/Path.h"


namespace MdDox
{
    class DocumentWriter;

	class Section1Writer final : public Doxygen::Visitors::Sect1QueryVisitor
    {
    private:
        DocumentWriter*    _writer;
        OStream*  _stream;
        OutputStringStream _out;

        void visitedParagraph(const Doxygen::ParaQuery& query) override;

    	void visitedSect2(const Doxygen::Sect2Query& query) override;

    public:
        Section1Writer(DocumentWriter* writer, OStream* out);

        void write(const Doxygen::Sect1Query& sec);
    };

}  // namespace MdDox::Reflect
