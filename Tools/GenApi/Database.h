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
    namespace Xml
    {
        class Node;
    }
}  // namespace MdDox

namespace MdDox::GenApi
{
    class Object;

    using NodeMap   = std::unordered_map<String, Xml::Node*>;
    using ObjectMap = std::unordered_map<String, Object*>;

    class Database
    {
    protected:
        StringMap _data;
        NodeMap   _nodes;
        ObjectMap _objects;

    public:
        Database();
        ~Database();

        bool          hasKey(const String& key);
        const String& value(const String& key, const String& def = "") const;
        Object*       object(const String& key) const;

        void insert(const String& key, Xml::Node* value);
        void insert(const String& key, Object* value);

        NodeMap::const_iterator begin() const
        {
            return _nodes.begin();
        }

        NodeMap::const_iterator end() const
        {
            return _nodes.end();
        }

        const ObjectMap& getObjects() const
        {
            return _objects;
        }

        void read(const String& file);
        bool contains(const String& str) const;
    };

}  // namespace MdDox::DoxApi
