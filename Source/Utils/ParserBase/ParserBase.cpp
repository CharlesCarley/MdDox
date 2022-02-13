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
#include "Utils/ParserBase/ParserBase.h"
#include <filesystem>
#include <fstream>
#include <vector>

#include "Utils/FileSystem.h"
#include "Utils/Char.h"
#include "Utils/ParserBase/ParseError.h"
#include "Utils/ParserBase/ScannerBase.h"
#include "Utils/ParserBase/TokenBase.h"

namespace MdDox
{
    ParserBase::ParserBase() :
        _cursor(0),
        _scanner(nullptr)
    {
    }

    ParserBase::~ParserBase() = default;

    void ParserBase::readToken(int32_t n)
    {
        do
        {
            TokenBase tok;
            _scanner->scan(tok);

            _tokens.push_back(tok);
        }
        while (--n > 0);
    }

    TokenBase ParserBase::getToken(const int32_t offs)
    {
        const int32_t next = offs + _cursor;

        while (next + 1 > (int32_t)_tokens.size())
            readToken();

        if (next < (int32_t)_tokens.size() && next >= 0)
            return _tokens.at(next);

        parseError("Failed to read token");
    }

    void ParserBase::advanceCursor(const int32_t n)
    {
        _cursor += n;
    }

    [[noreturn]] void ParserBase::parseErrorThrow(const String& message)
    {
        String full;
        parseErrorMessageImpl(full, message);
        throw ParseError(1, _filePath.fullPath(), _scanner->line(), full);
    }

    void ParserBase::parseErrorMessageImpl(String& dest, const String& message)
    {
        dest = message;
    }

    void ParserBase::parse(const String& file)
    {
        const PathUtil path(file);
        if (!path.exists())
            throw Exception("The supplied file '", file, "' does not exist");

        InputFileStream is(file);
        if (!is.is_open())
            throw Exception("Failed to open the input file '", file, "'");

        // save the base file name

        _file     = path.stem();
        _filePath = path;

        parseImpl(is);
    }

    void ParserBase::parse(IStream& is, const String& file)
    {
        // save some relatively unique name for the file
        if (file.empty())
        {
            String ex;
            StringUtils::scramble(ex, (size_t)this);
            _file = StringCombine("MemoryStream", '.', ex);
        }
        else
            _file = file;

        _filePath = PathUtil(_file);
        parseImpl(is);
    }

    void ParserBase::write(const String& file, const int format)
    {
        std::ofstream os(file);
        if (!os.is_open())
            throw Exception("Failed to open the input file '", file, "'");

        writeImpl(os, format);
    }

    void ParserBase::write(OStream& os, const int format)
    {
        writeImpl(os, format);
    }
} // namespace Hack
