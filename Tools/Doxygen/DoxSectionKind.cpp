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

#include "DoxSectionKind.h"
#include "Utils/Exception.h"
#include "Utils/Console.h"


namespace MdDox::Doxygen
{
    DoxSectionKindEnum DoxSectionKind::get(const String &look)
    {
        if (look == "private-static-func")
            return DSK_PRIVATE_STATIC_FUNC;
        if (look == "user-defined")
            return DSK_USER_DEFINED;
        if (look == "public-type")
            return DSK_PUBLIC_TYPE;
        if (look == "package-static-func")
            return DSK_PACKAGE_STATIC_FUNC;
        if (look == "public-func")
            return DSK_PUBLIC_FUNC;
        if (look == "public-slot")
            return DSK_PUBLIC_SLOT;
        if (look == "package-static-attrib")
            return DSK_PACKAGE_STATIC_ATTRIB;
        if (look == "protected-static-func")
            return DSK_PROTECTED_STATIC_FUNC;
        if (look == "public-attrib")
            return DSK_PUBLIC_ATTRIB;
        if (look == "signal")
            return DSK_SIGNAL;
        if (look == "property")
            return DSK_PROPERTY;
        if (look == "dcop-func")
            return DSK_DCOP_FUNC;
        if (look == "private-slot")
            return DSK_PRIVATE_SLOT;
        if (look == "event")
            return DSK_EVENT;
        if (look == "public-static-func")
            return DSK_PUBLIC_STATIC_FUNC;
        if (look == "typedef")
            return DSK_TYPEDEF;
        if (look == "package-func")
            return DSK_PACKAGE_FUNC;
        if (look == "public-static-attrib")
            return DSK_PUBLIC_STATIC_ATTRIB;
        if (look == "related")
            return DSK_RELATED;
        if (look == "protected-type")
            return DSK_PROTECTED_TYPE;
        if (look == "protected-func")
            return DSK_PROTECTED_FUNC;
        if (look == "protected-attrib")
            return DSK_PROTECTED_ATTRIB;
        if (look == "protected-slot")
            return DSK_PROTECTED_SLOT;
        if (look == "protected-static-attrib")
            return DSK_PROTECTED_STATIC_ATTRIB;
        if (look == "define")
            return DSK_DEFINE;
        if (look == "package-type")
            return DSK_PACKAGE_TYPE;
        if (look == "package-attrib")
            return DSK_PACKAGE_ATTRIB;
        if (look == "private-type")
            return DSK_PRIVATE_TYPE;
        if (look == "private-func")
            return DSK_PRIVATE_FUNC;
        if (look == "func")
            return DSK_FUNC;
        if (look == "private-attrib")
            return DSK_PRIVATE_ATTRIB;
        if (look == "private-static-attrib")
            return DSK_PRIVATE_STATIC_ATTRIB;
        if (look == "friend")
            return DSK_FRIEND;
        if (look == "prototype")
            return DSK_PROTOTYPE;
        if (look == "enum")
            return DSK_ENUM;
        if (look == "var")
            return DSK_VAR;
        return DSK_INVALID;
    }
} // namespace MdDox::Doxygen