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
#include "DescriptionWriter.h"
#include "Doxygen/ParaQuery.h"
#include "Doxygen/Sect1Query.h"
#include "MdDoxTree/DocumentWriter.h"
#include "ParagraphWriter.h"
#include "Section1Writer.h"
#include "WriteUtils.h"

namespace MdDox
{
    DescriptionWriter::DescriptionWriter(DocumentWriter* writer, OStream* out) :
        _writer(writer),
        _stream(out)
    {
    }

    bool DescriptionWriter::write(const Doxygen::DescriptionQuery& description)
    {
        description.visit(this);
        return syncStream(_stream, _out);
    }

    void DescriptionWriter::visitedText(const String& text)
    {
        _writer->inlineText(_out, text);
    }

    void DescriptionWriter::visitedParagraph(const Doxygen::ParaQuery& query)
    {
        ParagraphWriter pw(_writer, &_out);
        pw.write(query);
    }

    void DescriptionWriter::visitedSect1(const Doxygen::Sect1Query& query)
    {
        Section1Writer sec(_writer, &_out);
        sec.write(query);
    }

    void DescriptionWriter::visitedTitle(const String& text)
    {
        WRITE_STUB(_writer, _out);
    }

}  // namespace MdDox
