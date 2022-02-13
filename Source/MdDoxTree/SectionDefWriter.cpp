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

#include "SectionDefWriter.h"
#include "DocumentWriter.h"
#include "MemberDefWriter.h"
#include "WriteUtils.h"

namespace MdDox
{
    SectionDefWriter::SectionDefWriter(DocumentWriter* writer, OStream* out) :
        _writer(writer),
        _stream(out)
    {
    }

    void SectionDefWriter::visitedMemberDef(const Doxygen::MemberDefQuery& query)
    {
        MemberDefWriter writer(_writer, &_out);
        if (writer.write(query))
            _writer->lineBreak(_out);
    }

    void SectionDefWriter::visitedDescription(const Doxygen::DescriptionQuery& query)
    {
        _writer->boldText(_out, "SectionDefWriter.visitedDescription");
        _writer->lineBreak(_out);
    }

    void SectionDefWriter::visitedHeader(const String& text)
    {
        _writer->boldText(_out, "SectionDefWriter.visitedHeader");
        _writer->lineBreak(_out);
    }

    bool SectionDefWriter::write(const Doxygen::SectionDefQuery& sec)
    {
        if (sec.isValid())
        {
            sec.visit(this);
            return syncStream(_stream, _out);
        }
        return false;
    }

}  // namespace MdDox
