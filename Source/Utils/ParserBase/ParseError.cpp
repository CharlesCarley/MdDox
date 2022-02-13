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
#include "Utils/ParserBase/ParseError.h"

namespace MdDox
{
    String ParseError::getError(const int     stage,
                                const String& file,
                                const size_t& line,
                                const String& message)
    {
        OutputStringStream oss;
        oss << file << '(' << line << ')' << ':';

        if (stage == 0)
            oss << " syntax error: ";
        else if (stage == 1)
            oss << " parse error: ";
        else if (stage == 2)
            oss << " compile error: ";

        oss << message << std::endl;
        return oss.str();
    }
} // namespace MdDoc