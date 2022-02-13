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

#include "DoxMemberKind.h"
#include "Utils/Exception.h"
#include "Utils/Console.h"


namespace MdDox::Doxygen
{
    DoxMemberKindEnum DoxMemberKind::get(const String &look)
    {
        if (look == "define")
            return DMK_DEFINE;
        if (look == "enum")
            return DMK_ENUM;
        if (look == "property")
            return DMK_PROPERTY;
        if (look == "event")
            return DMK_EVENT;
        if (look == "variable")
            return DMK_VARIABLE;
        if (look == "typedef")
            return DMK_TYPEDEF;
        if (look == "function")
            return DMK_FUNCTION;
        if (look == "signal")
            return DMK_SIGNAL;
        if (look == "prototype")
            return DMK_PROTOTYPE;
        if (look == "friend")
            return DMK_FRIEND;
        if (look == "dcop")
            return DMK_DCOP;
        if (look == "slot")
            return DMK_SLOT;
        if (look == "interface")
            return DMK_INTERFACE;
        if (look == "service")
            return DMK_SERVICE;
        return DMK_INVALID;
    }
} // namespace MdDox::Doxygen