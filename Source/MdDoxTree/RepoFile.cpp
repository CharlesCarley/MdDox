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
#include "RepoFile.h"
#include <utility>
#include "SiteBuilder.h"
#include "Utils/String.h"
#include "HashUtils.h"
#include "Utils/Path.h"

namespace MdDox
{
    RepoFile::RepoFile(String file) :
        _file(std::move(file))
    {
    }

    String RepoFile::getRefId() const
    {
        return _file;
    }

    String RepoFile::getDocUrl() const
    {
        const PathUtil pu(_file);
        const SiteBuilder &builder = SiteBuilder::get();

        String url;
        StringDeque dir;
        pu.directoryList(dir);
        if (!dir.empty())
        {
            url = SiteBuilder::get().findReference(dir.back());
            if (!url.empty())
                return StringCombine("", url, builder.outputFileExt);
        }
        return url;
    }

    String RepoFile::getSrcUrl() const
    {
        return _file;
    }

    String RepoFile::getSiteUrl() const
    {
        const String& url = SiteBuilder::get().fileUrl;
        return StringCombine(url, '/', _file);
    }

}  // namespace MdDox
