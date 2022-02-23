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
#include "MdDoxTree/LinkedTextWriter.h"
#include "DocumentWriter.h"
#include "Doxygen/DoxRefKind.h"
#include "Doxygen/RefTextQuery.h"
#include "MdDoxTree/WriteUtils.h"

namespace MdDox
{
    LinkedTextWriter::LinkedTextWriter(DocumentWriter* writer, OStream* out) :
        _writer(writer),
        _stream(out)
    {
    }

    void LinkedTextWriter::visitedText(const String& text)
    {
        _writer->inlineText(_out, text);
    }

    void LinkedTextWriter::visitedRef(const Doxygen::RefTextQuery& query)
    {
        const Doxygen::DoxRefKindEnum en = query.getKindRef();
        switch (en)
        {
        case Doxygen::DRK_MEMBER:
            _writer->linkRef(_out, 1, query.getRefId(), query.text());
            break;
        case Doxygen::DRK_COMPOUND:
            _writer->linkRef(_out, 0, query.getRefId(), query.text());
            break;
        case Doxygen::DRK_INVALID:
        default:
            break;
        }
    }

    bool LinkedTextWriter::write(const Doxygen::LinkedTextQuery& query)
    {
        if (query.isValid())
        {
            query.visit(this);
            return syncStream(_stream, _out);
        }
        return false;
    }

}  // namespace MdDox
