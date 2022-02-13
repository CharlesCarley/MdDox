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

#include "DoxLanguage.h"
#include "Utils/Exception.h"
#include "Utils/Console.h"


namespace MdDox::Doxygen
{
    DoxLanguageEnum DoxLanguage::get(const String &look)
    {
        if (look == "Unknown")
            return DL_UNKNOWN;
        if (look == "Tcl")
            return DL_TCL;
        if (look == "IDL")
            return DL_IDL;
        if (look == "Objective-C")
            return DL_OBJECTIVE_C;
        if (look == "Java")
            return DL_JAVA;
        if (look == "D")
            return DL_D;
        if (look == "C#")
            return DL_CSHARP;
        if (look == "PHP")
            return DL_PHP;
        if (look == "C++")
            return DL_CPLUSPLUS;
        if (look == "Javascript")
            return DL_JAVASCRIPT;
        if (look == "Python")
            return DL_PYTHON;
        if (look == "Fortran")
            return DL_FORTRAN;
        if (look == "VHDL")
            return DL_VHDL;
        if (look == "XML")
            return DL_XML;
        if (look == "SQL")
            return DL_SQL;
        if (look == "Markdown")
            return DL_MARKDOWN;
        return DL_INVALID;
    }
} // namespace MdDox::Doxygen