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

#include "DoxHighlightClass.h"
#include "Utils/Exception.h"
#include "Utils/Console.h"


namespace MdDox::Doxygen
{
    DoxHighlightClassEnum DoxHighlightClass::get(const String &look)
    {
        if (look == "comment")
            return DHC_COMMENT;
        if (look == "preprocessor")
            return DHC_PREPROCESSOR;
        if (look == "normal")
            return DHC_NORMAL;
        if (look == "charliteral")
            return DHC_CHAR_LITERAL;
        if (look == "keywordflow")
            return DHC_KEYWORD_FLOW;
        if (look == "keywordtype")
            return DHC_KEYWORD_TYPE;
        if (look == "keyword")
            return DHC_KEYWORD;
        if (look == "stringliteral")
            return DHC_STRINGLITERAL;
        return DHC_INVALID;
    }
} // namespace MdDox::Doxygen