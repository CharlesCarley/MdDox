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

#include "DoxAccessor.h"
#include "Utils/Exception.h"
#include "Utils/Console.h"


namespace MdDox::Doxygen
{
    DoxAccessorEnum DoxAccessor::get(const String &look)
    {
        if (look == "assign")
            return DA_ASSIGN;
        if (look == "copy")
            return DA_COPY;
        if (look == "retain")
            return DA_RETAIN;
        if (look == "weak")
            return DA_WEAK;
        if (look == "strong")
            return DA_STRONG;
        if (look == "unretained")
            return DA_UNRETAINED;
        return DA_INVALID;
    }
} // namespace MdDox::Doxygen