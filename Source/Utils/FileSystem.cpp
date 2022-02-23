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

#include "Utils/FileSystem.h"
#include "Utils/Char.h"

namespace MdDox
{
    String FileSystem::normalize(const String& path)
    {
#ifdef _WIN32
        const String sep = "\\";
        const String swp = "/";
#else
        const String sep = "/";
        const String swp = "\\";
#endif
        String cp1;
        StringUtils::trimWhiteSpace(cp1, path);

        String cp2;
        StringUtils::replaceAll(cp2, cp1, swp, sep);
        return cp2;
    }

    Path FileSystem::normalize(const Path& path)
    {
        return Path(normalize(path.string()));
    }

    Path FileSystem::absolute(const String& input)
    {
        Path value(input);
        if (!value.has_root_directory())
        {
            value = StringCombine(currentPath(), '/', input);
            value = local_filesystem::absolute(value);
        }
        return normalize(value);
    }

    String FileSystem::currentPath()
    {
        return local_filesystem::current_path().string();
    }

}  // namespace MdDox
