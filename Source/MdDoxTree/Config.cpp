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
#include "Config.h"
#include "Utils/Char.h"
#include "Utils/ParserBase/ParserBase.h"

namespace MdDox
{
    Config::Config() = default;

    void Config::load(IStream& input)
    {
        String key, value;

        while (!input.eof())
        {
            char ch;
            input.read(&ch, 1);

            if (ch == '#')
                scanComment(input);
            else if (isLetter(ch))
            {
                input.putback(ch);

                value.clear();
                key.clear();
                scanKey(key, input);
            }
            else if (ch == '=')
            {
                if (key.empty())
                    throw MessageException("Assignment operator without an identifier");

                value.clear();
                scanValue(value, input);

                if (!value.empty())
                {
                    _attributes[key] = value;

                    value.clear();
                    key.clear();
                }
            }
        }
    }

    bool Config::contains(const String& key)
    {
        const StringMap::const_iterator it = _attributes.find(key);
        return it != _attributes.end();
    }

    void Config::scanToQuote(IStream& input)
    {
        while (!input.eof())
        {
            const char ch = next(input);
            if (ch == '\"')
                return;
            if (ch != ' ' && ch != '\t')
                throw InputException("Unknown character parsed '", ch, '\'');
        }
        throw MessageException("End of file scan");
    }

    void Config::scanValue(String& dest, IStream& input)
    {
        if (input.peek() != '\"')
            scanToQuote(input);

        while (!input.eof())
        {
            const char ch = next(input);

            switch (ch)
            {
            case ':':
            case '#':
            case ',':
            case '.':
            case '/':
            case '@':
            case '(':
            case ')':
            case Digits09:
            case LowerCaseAz:
            case UpperCaseAz:
                dest.push_back(ch);
                break;
            case '\"':
                if (input.peek() != ';')
                    throw MessageException("Expected a terminating semicolon");
                next(input);
                return;
            default:
                throw InputException("Unknown character parsed '", ch, '\'');
            }
        }

        throw MessageException("End of file scan");
    }

    void Config::scanKey(String& dest, IStream& input)
    {
        bool lock = false;
        while (!input.eof())
        {
            const char ch = next(input);

            switch (ch)
            {
            case '_':
            case '-':
            case Digits09:
            case LowerCaseAz:
            case UpperCaseAz:
                if (!lock)
                    dest.push_back(ch);
                else
                    throw InputException("Unknown character parsed '", ch, '\'');
                break;
            case '\t':
            case ' ':
                lock = true;
                break;
            case '=':
                input.putback(ch);
                return;
            default:
                throw InputException("Unknown character parsed '", ch, '\'');
            }
        }

        throw MessageException("End of file scan");
    }

    void Config::scanComment(IStream& input)
    {
        while (!input.eof())
        {
            const char ch = next(input);

            switch (ch)
            {
            case '\r':
            case '\n':
                if (ch == '\r' && input.peek() == '\n')
                    next(input);
                return;
            default:
                break;
            }
        }
    }

    char Config::next(IStream& input)
    {
        char ch;
        input.read(&ch, 1);
        return ch;
    }

    const String& Config::getValue(const String& key, const String& def)
    {
        const StringMap::const_iterator it = _attributes.find(key);
        if (it != _attributes.end())
            return it->second;
        return def;
    }

    bool Config::getBool(const String& key, const bool def)
    {
        const String& v = getValue(key);
        if (v != "true")
            return def;
        return true;
    }

    int Config::getInt(const String& key, const int def)
    {
        return Char::toInt32(getValue(key), def);
    }

}  // namespace MdDox
