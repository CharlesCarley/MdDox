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
#include "ReferenceTable.h"

#include "Link.h"

namespace MdDox
{
    ReferenceTable::~ReferenceTable()
    {
        for (auto& [id, ref] : _members)
            delete ref;
        for (auto& [id, ref] : _compound)
            delete ref;
    }

    void ReferenceTable::insertCompound(const Doxygen::DoxCompoundKindEnum& kind,
                                        const String&                       name,
                                        const String&                       id)
    {
        const CompoundReferenceMap::const_iterator it = _compound.find(id);
        if (it == _compound.end())
        {
            CompoundReference* cref = new CompoundReference();
            cref->setName(name);
            cref->setReference(id);
            cref->setKind(kind);


        	if (kind > 0 && kind < Doxygen::DCK_MAX)
        	{
                CompoundNameMap& cnm = _nameMap[kind];

        		if (kind == Doxygen::DCK_NAMESPACE)
        		{
        			// store the name space by its last name 
                    String lu = LinkUtils::lastBinaryResolution(name);

        			const CompoundNameMap::const_iterator cit = cnm.find(lu);
                    if (cit == cnm.end())
                        cnm.insert(std::make_pair(lu, cref));
        		}

        	}

        	

            _compound.insert(std::make_pair(id, cref));
        }
        else
        {
            Console::writeLine("Ignoring insertCompound duplicate: ", id);
        }
    }

    CompoundReference* ReferenceTable::getCompoundRef(const String& id)
    {
        const CompoundReferenceMap::const_iterator it = _compound.find(id);
        if (it != _compound.end())
            return it->second;
        return nullptr;
    }

    Reference ReferenceTable::findNamespace(const String& nsName) const
    {
        const CompoundNameMap& cnm = _nameMap[Doxygen::DoxCompoundKindEnum::DCK_NAMESPACE];

        Reference ref;

    	const CompoundNameMap::const_iterator it = cnm.find(nsName);
        if (it != cnm.end())
        {
            CompoundReference* cref = it->second;
            if (cref)
            {
                ref.setName(cref->getName());
                ref.setReference(cref->getReference());
            }
        }
        return ref;
    }

    void ReferenceTable::insertMember(const Doxygen::DoxMemberKindEnum& kind,
                                      const String&                     name,
                                      const String&                     id)
    {
        const MemberReferenceMap::const_iterator it = _members.find(id);
        if (it == _members.end())
        {
            MemberReference* cref = new MemberReference();
            cref->setName(name);
            cref->setReference(id);
            cref->setKind(kind);

            _members.insert(std::make_pair(id, cref));
        }
        else
        {
            Console::writeLine("Ignoring insertMember duplicate: ", id);
        }
    }

    MemberReference* ReferenceTable::getMemberRef(const String& id)
    {
        const MemberReferenceMap::const_iterator it = _members.find(id);
        if (it != _members.end())
            return it->second;
        return nullptr;
    }

}  // namespace MdDox
