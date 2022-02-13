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
#include "Link.h"
#include "HashUtils.h"
#include "SiteBuilder.h"
#include "Utils/FileSystem.h"

namespace MdDox
{
    void Link::swapInput(const String& stem)
    {
        const PathUtil swap(StringCombine(_input.rootedDir(),
                                          stem,
                                          _input.fullExtension()));
        _input = swap;
    }

    String Link::getOutput() const
    {
        const String   ext    = SiteBuilder::get().outputFileExt;
        const PathUtil outDir = PathUtil(SiteBuilder::get().outputDir);

        return StringCombine(outDir.rootedDir(), _input.stem(), ext);
    }

    String Link::getRelativeInput() const
    {
        const PathUtil inputPath(getInput());
        return StringCombine(inputPath.stem(), ".xml");
    }

    String Link::relOutput() const
    {
        const String ext = SiteBuilder::get().outputFileExt;

        const PathUtil inputPath(getOutput());
        return StringCombine(inputPath.stem(), ext);
    }

    String LinkUtils::linkMarkdown(const String& file, const String& name)
    {
        const String ext = SiteBuilder::get().outputFileExt;

        return StringCombine(file, ext, HashUtils::heading(name));
    }

    void LinkUtils::splitBinaryResolution(StringDeque& dest, const String& name)
    {
        StringUtils::split(dest, name, "::");
    }

    String LinkUtils::lastBinaryResolution(const String& name)
    {
        StringDeque dest;
        splitBinaryResolution(dest, name);
        if (!dest.empty())
            return dest.back();
        return name;
    }
    
}  // namespace MdDox
