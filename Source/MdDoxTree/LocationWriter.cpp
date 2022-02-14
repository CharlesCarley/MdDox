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
#include "LocationWriter.h"
#include "DocumentWriter.h"
#include "Location.h"
#include "WriteUtils.h"

namespace MdDox
{
    LocationWriter::LocationWriter(DocumentWriter* writer, OStream* out) :
        _writer(writer),
        _stream(out)
    {
    }

    bool LocationWriter::write(const Doxygen::LocationQuery& query)
    {
        const String& decl = query.getFile();
        const String& impl = query.getBodyFile();

        std::vector<SourceFile> list;

        const bool hasDecl = !decl.empty();
        const bool hasImpl = !impl.empty() && impl != decl;

        if (hasDecl)
        {
            SourceFile ref;

            ref.setFile(decl);
            ref.setLine((uint32_t)query.getLine());

            list.push_back(ref);
        }

        if (hasImpl)
        {
            SourceFile ref;
            ref.setFile(impl);
            ref.setLine((uint32_t)query.getBodyStart());
            list.push_back(ref);
        }

        if (!list.empty())
        {
            _writer->addSection(_out, "Defined in", 4);
            for (SourceFile& ref : list)
            {
                _writer->embedContentLinkText(_out,
                                              ICO_FILE,
                                              ref.getLinkToRepo(),
                                              ref.fileName());
                _writer->lineBreak(_out);
            }
        }

        return syncStream(_stream, _out);
    }

}  // namespace MdDox
