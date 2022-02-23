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
#include "Doxygen/DoxCompoundKind.h"
#include "Doxygen/DoxMemberKind.h"
#include "Reference.h"

namespace MdDox
{
    class CompoundReference : public Reference
    {
    private:
        Doxygen::DoxCompoundKindEnum _kind{Doxygen::DCK_INVALID};

    public:
        CompoundReference()  = default;
        ~CompoundReference() = default;

        const Doxygen::DoxCompoundKindEnum& getKind() const;

        void setKind(const Doxygen::DoxCompoundKindEnum& kind);
    };

    class MemberReference : public Reference
    {
    private:
        Doxygen::DoxMemberKindEnum _kind{Doxygen::DMK_INVALID};

    public:
        MemberReference()  = default;
        ~MemberReference() = default;

        const Doxygen::DoxMemberKindEnum& getKind() const;

        void setKind(const Doxygen::DoxMemberKindEnum& kind);

        CompoundReference* findParent() const;
    	
    };

    inline const Doxygen::DoxCompoundKindEnum& CompoundReference::getKind() const
    {
        return _kind;
    }

    inline void CompoundReference::setKind(const Doxygen::DoxCompoundKindEnum& kind)
    {
        _kind = kind;
    }

    inline const Doxygen::DoxMemberKindEnum& MemberReference::getKind() const
    {
        return _kind;
    }

    inline void MemberReference::setKind(const Doxygen::DoxMemberKindEnum& kind)
    {
        _kind = kind;
    }

}  // namespace MdDox
