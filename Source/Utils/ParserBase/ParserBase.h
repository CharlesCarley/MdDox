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
#include <vector>
#include "Utils/ParserBase/ScannerBase.h"
#include "Utils/ParserBase/TokenBase.h"

namespace MdDox
{
    class ScannerBase;

    /**
     * \brief Base that handles common parse functionality.
     */
    class ParserBase
    {
    public:
        typedef std::vector<TokenBase> Tokens;

    protected:
        Tokens       _tokens;
        int32_t      _cursor;
        ScannerBase* _scanner;
        String       _file;
        PathUtil     _filePath;

        virtual void parseImpl(IStream& is) = 0;

        virtual void writeImpl(OStream& is, int format = 0) = 0;

        TokenBase getToken(int32_t offs);

        void advanceCursor(int32_t n = 1);

        void readToken(int32_t n = 1);

        template <typename... Args>
        [[noreturn]] void parseError(const String& what, Args&&... args);

    private:
        [[noreturn]] void parseErrorThrow(const String& message);

        size_t line() const;

    protected:
        virtual void parseErrorMessageImpl(String& dest, const String& message);

    public:
        ParserBase();
        virtual ~ParserBase();

        /**
         * \brief Attempts to load the supplied file. 
         * \param file The file system path to the file.
         *
         * \throws MdDox::Exception if the supplied path does not exist on disk.
         * or cannot be opened.
         */
        void parse(const String& file);

        /**
         * \copybrief MdDox::ParserBase::parse
         * \param is 
         * \param file 
         */
        void parse(IStream& is, const String& file = "");

        void write(const String& file, int format = 0);

        void write(OStream& os, int format = 0);

        /**
         * \return The file name or memory stream name associated with this parser.
         */
        String filename() const;
    };

    template <typename... Args>
    [[noreturn]] void ParserBase::parseError(const String& what, Args&&... args)
    {
        OutputStringStream oss;
        oss << what;
        ((oss << std::forward<Args>(args)), ...);
        parseErrorThrow(oss.str());
    }

    inline String ParserBase::filename() const
    {
        return _filePath.fullPath();
    }

    inline size_t ParserBase::line() const
    {
        if (_scanner)
            return _scanner->line();
        return 0;
    }

}  // namespace MdDox
