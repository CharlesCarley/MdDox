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
#include "Xml/Node.h"
#include <algorithm>
#include <utility>
#include "Attribute.h"
#include "Utils/Char.h"
#include "Utils/Exception.h"
#include "Utils/ParserBase/ParserBase.h"

namespace MdDox::Xml
{
    Node::Node() :
        _typeCode(-1),
        _parent(nullptr),
        _next(nullptr),
        _autoDelete(true)
    {
    }

    Node::Node(String name) :
        _name(std::move(name)),
        _typeCode(-1),
        _parent(nullptr),
        _next(nullptr),
        _autoDelete(true)
    {
    }

    Node::~Node()
    {
        if (_autoDelete)
        {
            for (Node* child : _children)
                delete child;
        }
    }

    void Node::addChild(Node* child)
    {
        if (!child)
            throw MessageException("invalid node supplied to node.addChild");

        child->_parent = this;
        child->_next   = nullptr;
        if (!_children.empty())
            _children.back()->_next = child;

        _children.push_back(child);
    }

    Node* Node::at(const size_t& idx)
    {
        if (idx >= _children.size())
            return nullptr;

        return _children.at(idx);
    }

    const Node* Node::at(const size_t& idx) const
    {
        if (idx >= _children.size())
            return nullptr;

        return _children.at(idx);
    }

    bool Node::contains(const String& attribute)
    {
        const AttributeMap::iterator it = _attributes.find(attribute);
        return it != _attributes.end();
    }

    void Node::insert(const String& attribute, const String& value)
    {
        const AttributeMap::iterator it = _attributes.find(attribute);
        if (it == _attributes.end())
            _attributes.insert(std::make_pair(attribute, value));
    }

    const String& Node::get(const String& attribute)
    {
        const AttributeMap::iterator it = _attributes.find(attribute);
        if (it != _attributes.end())
            return it->second;

        throw NotFound();
    }

    const String& Node::attribute(const String& name, const String& def) const
    {
        const AttributeMap::const_iterator it = _attributes.find(name);
        if (it != _attributes.end())
            return it->second;
        return def;
    }

    int64_t Node::integer(const String& name, int64_t def) const
    {
        const String val = attribute(name);
        if (!val.empty())
            return Char::toInt64(val, def);
        return def;
    }

    bool Node::isTypeOf(const char* tagName) const
    {
        if (!tagName)
            throw MessageException("invalid string supplied");

        return Char::equals(_name.c_str(),
                            tagName,
                            std::max(_name.size(), Char::length(tagName)));
    }

    bool Node::isTypeOf(const int64_t type) const
    {
        return _typeCode == type;
    }

    bool Node::hasChildren() const
    {
        return !_children.empty();
    }

    bool Node::hasChild(const char* str)
    {
        if (!str)
            throw InvalidPointer();

        for (Node* child : _children)
        {
            if (child->isTypeOf(str))
                return true;
        }
        return false;
    }

    void Node::sort(const NodeSortFunc& fnc)
    {
        // Use stable_sort to preserve any
        // order that is already there.
        std::stable_sort(_children.begin(), _children.end(), fnc);
    }

    void Node::siblingsOf(NodeArray& dest, const String& tag)
    {
        if (tag.empty())
            throw MessageException("the supplied tag can not be empty");

        for (Node* child : _children)
        {
            if (child->isTypeOf(tag.c_str()))
                dest.push_back(child);
        }
    }

    const Node& Node::firstChild() const
    {
        if (_children.empty())
            throw IndexOutOfBounds();
        return *_children.at(0);
    }

    Node* Node::getFirstChild(const String& requireType)
    {
        if (_children.empty())
        {
            throw InputException(
                "The supplied node has no children, "
                "therefore the first child '",
                requireType,
                "' of it is undefined");
        }

        Node* chi = _children.at(0);

        if (!requireType.empty() && chi->name() != requireType)
        {
            throw InputException(
                "the top level node is not "
                "a ",
                requireType,
                "node");
        }
        return chi;
    }

    Node* Node::getFirstChild(const int64_t& requireType)
    {
        if (_children.empty())
        {
            throw InputException(
                "The supplied node has no children, "
                "therefore the first child '",
                requireType,
                "' of it is undefined");
        }

        Node* chi = _children.at(0);
        if (chi->getTypeCode() != requireType)
        {
            throw InputException(
                "the top level node is not "
                "a ",
                requireType,
                "node");
        }
        return chi;
    }

    Node* Node::firstChildOf(const String& tag)
    {
        if (tag.empty())
            throw MessageException("the supplied tag can not be empty");

        for (Node* child : _children)
        {
            if (child->isTypeOf(tag.c_str()))
                return child;
        }
        return nullptr;
    }

    Node* Node::firstChildOf(const int64_t& tag)
    {
        for (Node* child : _children)
        {
            if (child->isTypeOf(tag))
                return child;
        }
        return nullptr;
    }

    Node* Node::nextSiblingOf(const String& tag) const
    {
        if (tag.empty())
            throw MessageException("the supplied tag can not be empty");

        Node* nd = _next;
        while (nd != nullptr)
        {
            if (nd->isTypeOf(tag.c_str()))
                return nd;
            nd = nd->_next;
        }
        return nullptr;
    }

    Node* Node::nextSiblingOf(const int64_t& tag) const
    {
        Node* nd = _next;
        while (nd != nullptr)
        {
            if (nd->isTypeOf(tag))
                return nd;
            nd = nd->_next;
        }
        return nullptr;
    }
	
}  // namespace MdDox::Xml
