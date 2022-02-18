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
#include <map>
#include "ReferenceIdentifiers.h"

namespace MdDox
{
    using CompoundReferenceMap = std::map<String, CompoundReference*>;
    using MemberReferenceMap   = std::map<String, MemberReference*>;

    class ReferenceTable
    {
    private:
        CompoundReferenceMap _compound;
        MemberReferenceMap   _members;

    public:
        ReferenceTable() = default;
        ~ReferenceTable();

        void insertCompound(const Doxygen::DoxCompoundKindEnum& kind, const String& name, const String& id);

    	CompoundReference* getCompoundRef(const String& id);

        void insertMember(const Doxygen::DoxMemberKindEnum& kind, const String& name, const String& id);

    	MemberReference* getMemberRef(const String& id);
    };

}  // namespace MdDox
