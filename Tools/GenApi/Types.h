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
#include <cstdint>
#include "Utils/String.h"

namespace MdDox::GenApi
{
    enum ElementType
    {
        BASE_TYPE    = 1 << 0,
        SIMPLE_TYPE  = 1 << 1,
        COMPLEX_TYPE = 1 << 2,
        GROUP_TYPE   = 1 << 3,
    };

    struct Element
    {
        int32_t  type;
        uint32_t minOccurs;
        uint32_t maxOccurs;
        String   searchTerm;
        String   genType;
        String   genName;
        int64_t  typeCode;
    	
        bool isRequired;
        bool isUnbounded;
        bool isSingle;
        bool isValid;

        bool operator==(const Element& el) const
        {
            return typeCode == el.typeCode;
        }
    };

    struct Attribute
    {
        String genType;
        String genName;
        String searchTerm;
        bool   isRequired;
    };

}  // namespace MdDox::DoxApi
