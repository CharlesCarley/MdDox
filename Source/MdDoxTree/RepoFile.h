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
#include "Utils/String.h"

namespace MdDox
{
    /**
     * \brief Represents a repository file.
     */
    class RepoFile
    {
    private:
        String _file;

    public:
        explicit RepoFile(String file);
        RepoFile(const RepoFile&) = default;
        RepoFile()                = default;
        ~RepoFile()               = default;

        const String& getFile() const;

        void setFile(const String& text);

        String getRefId() const;

        String getDocUrl() const;

        String getSrcUrl() const;

        String getSiteUrl() const;

        bool empty() const;
    };

    inline const String& RepoFile::getFile() const
    {
        return _file;
    }

    inline void RepoFile::setFile(const String& text)
    {
        _file = text;
    }

    inline bool RepoFile::empty() const
    {
        return _file.empty();
    }

}  // namespace MdDoc
