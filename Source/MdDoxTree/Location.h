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
#pragma once
#include "MdDoxTree/RepoFile.h"
#include "MdDoxTree/SourceFile.h"

namespace MdDox
{
    /// <summary>
    /// Variable container for types
    /// </summary>
    class Location
    {
    private:
        SourceFile _header;
        SourceFile _source;

    public:
        Location(const Location&) = default;
        Location()                = default;
        ~Location()               = default;

        SourceFile& getHeader();

        SourceFile& getSource();

        const SourceFile& getHeader() const;

        const SourceFile& getSource() const;

        [[deprecated]] RepoFile getRepoFile() const;
    };

    inline SourceFile& Location::getHeader()
    {
        return _header;
    }

    inline SourceFile& Location::getSource()
    {
        return _source;
    }

    inline const SourceFile& Location::getHeader() const
    {
        return _header;
    }

    inline RepoFile Location::getRepoFile() const
    {
        return RepoFile(_header.repoFile());
    }

    inline const SourceFile& Location::getSource() const
    {
        return _source;
    }

}  // namespace MdDoc
