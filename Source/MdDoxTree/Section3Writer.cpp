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
#include "Section3Writer.h"
#include "MdDoxTree/DocumentWriter.h"
#include "ParagraphWriter.h"
#include "Section4Writer.h"
#include "WriteUtils.h"

namespace MdDox
{
    Section3Writer::Section3Writer(DocumentWriter* writer, OStream* out) :
        _writer(writer),
        _stream(out)
    {
    }

    void Section3Writer::write(const Doxygen::Sect3Query& sec)
    {
        _writer->anchor(_out, sec.getId());
        _writer->beginSection(_out, sec.getTitle(), 4);
        sec.visit(this);
        _writer->endSection(_out);

        syncStream(_stream, _out);
    }

    void Section3Writer::visitedParagraph(const Doxygen::ParaQuery& query)
    {
        ParagraphWriter pw(_writer, &_out);
        pw.write(query);
    }

    void Section3Writer::visitedSect4(const Doxygen::Sect4Query& query)
    {
        Section4Writer pw(_writer, &_out);
        pw.write(query);
    }

}  // namespace MdDox
