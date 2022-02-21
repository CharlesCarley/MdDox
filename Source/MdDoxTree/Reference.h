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
#include "Utils/String.h"

namespace MdDox
{
    class Reference;
    using ReferenceList = std::vector<Reference>;

    class Reference
    {
    protected:
        String _name;
        String _ref;

    public:
        Reference()  = default;
        ~Reference() = default;

        const String& getName() const;

        void setName(const String& name);

        const String& getId() const;

        void setId(const String& ref);

        bool empty() const;
    };

    inline const String& Reference::getName() const
    {
        return _name;
    }

    inline void Reference::setName(const String& name)
    {
        _name = name;
    }

    inline const String& Reference::getId() const
    {
        return _ref;
    }

    inline void Reference::setId(const String& ref)
    {
        _ref = ref;
    }

    inline bool Reference::empty() const
    {
        return _ref.empty();
    }
}  // namespace MdDox
