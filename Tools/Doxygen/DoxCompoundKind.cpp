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

#include "DoxCompoundKind.h"
#include "Utils/Exception.h"
#include "Utils/Console.h"


namespace MdDox::Doxygen
{
    DoxCompoundKindEnum DoxCompoundKind::get(const String &look)
    {
        if (look == "class")
            return DCK_CLASS;
        if (look == "interface")
            return DCK_INTERFACE;
        if (look == "namespace")
            return DCK_NAMESPACE;
        if (look == "struct")
            return DCK_STRUCT;
        if (look == "service")
            return DCK_SERVICE;
        if (look == "union")
            return DCK_UNION;
        if (look == "protocol")
            return DCK_PROTOCOL;
        if (look == "category")
            return DCK_CATEGORY;
        if (look == "page")
            return DCK_PAGE;
        if (look == "exception")
            return DCK_EXCEPTION;
        if (look == "singleton")
            return DCK_SINGLETON;
        if (look == "module")
            return DCK_MODULE;
        if (look == "type")
            return DCK_TYPE;
        if (look == "file")
            return DCK_FILE;
        if (look == "group")
            return DCK_GROUP;
        if (look == "example")
            return DCK_EXAMPLE;
        if (look == "dir")
            return DCK_DIR;
        return DCK_INVALID;
    }
} // namespace MdDox::Doxygen