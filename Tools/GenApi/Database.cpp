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
#include "Database.h"

namespace MdDox::GenApi
{
    Database::Database()  = default;
    Database::~Database() = default;

    bool Database::hasKey(const String& key)
    {
        return _data.find(key) != _data.end();
    }

    const String& Database::value(const String& key, const String& def) const
    {
        const StringMap::const_iterator it = _data.find(key);
        if (it != _data.end())
            return it->second;
        return def;
    }

    Object* Database::object(const String& key) const
    {
        const ObjectMap::const_iterator it = _objects.find(key);
        if (it != _objects.end())
            return it->second;
        return nullptr;
    }

    void Database::insert(const String& key, Xml::Node* value)
    {
        const NodeMap::iterator it = _nodes.find(key);
        if (it == _nodes.end())
            _nodes[key] = value;
    }

    void Database::insert(const String& key, Object* value)
    {
        const ObjectMap::iterator it = _objects.find(key);
        if (it == _objects.end())
            _objects[key] = value;
    }

    void Database::read(const String& file)
    {
        InputFileStream data(file);
        if (!data.is_open())
            return;

        while (!data.eof())
        {
            String oldName, newName;

            data >> oldName;
            data >> newName;

            if (!oldName.empty() && oldName[0] != '#')
            {
                if (_data.find(oldName) == _data.end())
                    _data.insert(std::make_pair(oldName, newName));
            }
        }
    }

    bool Database::contains(const String& str) const
    {
        return _data.find(str) != _data.end();
    }
}  // namespace MdDox::GenApi
