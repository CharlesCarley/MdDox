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
#include "Utils/String.h"

namespace MdDox
{
    /**
     * \brief Represents a repository file.
     */
    class SourceFile
    {
    private:
        RepoFile _file;
        int64_t  _line{1};

    public:
        SourceFile(const SourceFile&) = default;
        SourceFile()                  = default;
        ~SourceFile()                 = default;

        const RepoFile& repoFile() const;

    	String          getLinkToRepo() const;

        String directory() const;

        String fileName() const;

        String fullExtension() const;

        void setFile(const String& text);

        int64_t getLine() const;

        void setLine(const int64_t& line);

        bool empty() const;
    };

    inline const RepoFile& SourceFile::repoFile() const
    {
        return _file;
    }

    inline void SourceFile::setFile(const String& text)
    {
        _file.setFile(text);
    }

    inline int64_t SourceFile::getLine() const
    {
        return _line;
    }

    inline void SourceFile::setLine(const int64_t& line)
    {
        _line = line;
    }

    inline bool SourceFile::empty() const
    {
        return _file.empty();
    }
}  // namespace MdDoc
