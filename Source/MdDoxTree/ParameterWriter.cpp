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
#include "ParameterWriter.h"
#include "DocumentWriter.h"
#include "LinkedTextWriter.h"
#include "WriteUtils.h"

namespace MdDox
{
    ParameterWriter::ParameterWriter(DocumentWriter* writer, OStream* out) :
        _writer(writer),
        _stream(out)
    {
    }

    void ParameterWriter::visitedType(const Doxygen::LinkedTextQuery& query)
    {
        LinkedTextWriter obj(_writer, &_out);
        obj.write(query);
    }

    void ParameterWriter::visitedDefVal(const Doxygen::LinkedTextQuery& query)
    {
        _writer->inlineText(_out, " = ");
        LinkedTextWriter obj(_writer, &_out);
        obj.write(query);
    }

    void ParameterWriter::visitedBriefDescription(const Doxygen::DescriptionQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void ParameterWriter::visitedDeclName(const String& text)
    {
        _writer->inlineText(_out, text);
    }

    void ParameterWriter::visitedDefName(const String& text)
    {
        _writer->inlineText(_out, " = ");
        _writer->inlineText(_out, text);
    }

    void ParameterWriter::visitedArray(const String& text)
    {
        WRITE_STUB(_writer, _out);
    }

    bool ParameterWriter::write(const Doxygen::ParamQuery& query)
    {
        if (query.isValid())
        {
            query.visit(this);
            return syncStream(_stream, _out);
        }
        return false;
    }

}  // namespace MdDox
