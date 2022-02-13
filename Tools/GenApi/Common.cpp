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
#include "Common.h"
#include <iomanip>
#include "Resources.h"
#include "Utils/Exception.h"
#include "Utils/Path.h"

namespace MdDox::GenApi
{
    Common::Common(String header) :
        _header(std::move(header))
    {
    }

    void Common::write(const PathUtil& output)
    {
        String hdr = StringCombine(output.rootedDir(), output.stem(), ".h");

        OutputFileStream header(hdr);
        if (!header.is_open())
            throw Exception("failed to open the output file: ", hdr);

        writeHeader(header);
        header.close();
    }

    void Common::writeHeader(OStream& out)
    {
        String common;
        Resources::Resource::getCommon(common);

        OutputStringStream includes;
        OutputStringStream forwards;
        OutputStringStream declarations;

        for (const String& include : _includes)
            text(includes, 0x00, "#include \"", include, "\"");
        for (const String& forward : _forwards)
            text(forwards, 0x04, "class ", forward, ';');

        for (const String& decl : _forwards)
            text(declarations, 0x04, "using ", decl, "Function = std::function<void (const ", decl, "&)>;");

        StringUtils::replaceAll(common, common, "${includes}", includes.str());
        StringUtils::replaceAll(common, common, "${forwards}", forwards.str());
        StringUtils::replaceAll(common, common, "${declarations}", declarations.str());
        out << common;
    }

    void Common::addForward(const String& fwd)
    {
        _forwards.push_back(fwd);
    }

    void Common::addInclude(const String& inc)
    {
        _includes.push_back(inc);
    }

}  // namespace MdDox::GenApi
