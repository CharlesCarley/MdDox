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
#include "MdDoxTree/LocationWriter.h"
#include "DocumentWriter.h"
#include "Doxygen/CompoundDefQuery.h"
#include "MdDoxTree/HashUtils.h"
#include "MdDoxTree/SiteBuilder.h"
#include "MdDoxTree/WriteUtils.h"
#include "Utils/Path.h"
#include "TypeFilter/DoxygenFilter.h"

namespace MdDox
{
    LocationWriter::LocationWriter(DocumentWriter* writer, OStream* out) :
        _writer(writer),
        _stream(out)
    {
    }

    bool LocationWriter::write(const Doxygen::LocationQuery& query)
    {
        const String&   decl     = query.getFile();
        const String&   impl     = query.getBodyFile();
        const uint32_t& declLine = (uint32_t)query.getLine();
        const uint32_t& implLine = (uint32_t)query.getBodyStart();

        const bool hasDecl = !decl.empty();
        const bool hasImpl = !impl.empty() && impl != decl;

        if (hasDecl || hasImpl)
        {
            const SiteBuilder& builder = SiteBuilder::get();

            _writer->addSection(_out, "Defined in", 4);

            if (hasDecl)
            {
                const String url = StringCombine(builder.fileUrl, '/', decl, HashUtils::lineNumber(declLine));
                _writer->embedContentLinkText(_out, ICO_FILE, url, PathUtil(decl).fileName());

                if (hasImpl)
                    _writer->lineBreak(_out);
            }

            if (hasImpl)
            {
                const String url = StringCombine(builder.fileUrl, '/', impl, HashUtils::lineNumber(implLine));
                _writer->embedContentLinkText(_out, ICO_FILE, url, PathUtil(impl).fileName());
            }
        }

        String root;
        if (query.isValid())
        {
            const Doxygen::CompoundDefQuery cdq(query.node()->firstParentOf(Doxygen::DoxCompoundDef));
            root = HashUtils::heading(cdq.getCompoundName());
        }
        else
            root = "#";


        _writer->lineBreak(_out);
        _writer->lineBreak(_out);
        _writer->beginBlockQuote(_out);
        _writer->embedContentLinkText(_out, ICO_JUMP_TO_TOP, root, "top");
        _writer->endBlockQuote(_out);
         return syncStream(_stream, _out);
    }

}  // namespace MdDox
