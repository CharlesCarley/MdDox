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
#include <functional>
#include <unordered_map>
#include "Utils/String.h"

namespace MdDox::Xml
{
    class Node;
    class Attribute;

    using NodeSortFunc = std::function<bool(Node* a, Node* b)>;

	
    /**
     * \brief Defines the attribute storage container.
     */
    typedef std::unordered_map<String, String> AttributeMap;

    /**
     * \brief Defines the child node storage array container.
     */
    typedef std::vector<Node*> NodeArray;

    /**
     * \brief Defines a name lookup map for nodes.
     */
    typedef std::unordered_map<String, Node*> NodeMap;

    /**
     * \brief Provides an unbounded N-ary tree structure to store an XML document.
     *
     * A node represents a single XML tag. As such, a node in a tree can have
     * only one parent and (N) number of descendant nodes. Each node in the
     * tree is allowed to have any number of attributes attached to it.\br
     *
     * In order to keep the internal text inlined with tag based nodes,
     * the parser creates a specialty node with the name <tt>_text_node</tt>.
     * The text node is pushed as an extra child node to the current node on
     * the top of the parse stack.\br
     *
     * To keep this library generic, all attributes are defined as a string,
     * and any extra type of serialization is undefined. With one exception,
     * an optional type filter can be applied before parsing the file. The
     * filter allows integer type info to be associated with node, which allows
     * nodes be type-checked with integers instead of strings.
     */
    class Node
    {
    private:
        String       _name;
        String       _text;
        int64_t      _typeCode;
        AttributeMap _attributes;
        Node*        _parent;
        Node*        _next;
        NodeArray    _children;

    protected:
        bool _autoDelete;

    public:
        /**
         * \brief Default constructor.
         */
        Node();

        /**
         * \brief Constructs a node with a name.
         * \param name The name to associate with this node.
         */
        explicit Node(String name);

        /**
         * \brief Default destructor.
         *
         * Deletes all child nodes.
         */
        ~Node();

        /**
         * \brief Appends a child node to the current list of children, and sets the child node's parent
         * to the current instance.
         * \param child The node to append.
         */
        void addChild(Node* child);

        /**
         * \brief Provides access to the array of child nodes attached to this node.
         * \return Const access to the array of children.
         */
        const NodeArray& children() const;

        /**
         * \brief Provides access to the child node at the supplied index.
         * \param idx The index of the child node.
         * \return The node at the supplied index.
         */
        Node* at(const size_t& idx);

        /**
         *\copydoc at
         */
        const Node* at(const size_t& idx) const;

        /**
         * \return The number of children attached to this node.
         */
        size_t size() const;

        /**
         * \brief Provides access to this nodes parent.
         * \note All nodes except the root node have a parent.
         * \return The parent node of this node.  
         */
        Node* parent() const;

        /**
         * \return The name associated with this node.
         */
        const String& name() const;

        /**
         * \brief Provides access to plan text content associated with this node.
         *
         * Any text that is placed in between tags gets pushed to the list of children
         * for a specific node. It is defined by the name \c _text_node
         *
         *
         * <b>For example:</b>
         * \code{.xml}
         * <root>
         *  <foo>A<b>B</b>C</foo>
         * </root>
         * \endcode
         *
         * Would be defined as
         * \code{.txt}
         * -root
         * --foo
         * ---_text_node
         * ---b
         * ----_text_node
         * ---_text_node
         * \endcode
         * \return Any text associated with this node.
         */
        const String& text() const;

        /**
         * \brief Provides the ability to set the inner text on the node.
         * \param text The text to store in the node.
         */
        void text(const String& text);

        /**
         * \brief Provides access to any type code associated with the node.
         */
        int64_t getTypeCode() const;

        /**
         * \brief Associates a type code for this node.
         */
        void setTypeCode(int64_t code);

        const AttributeMap& attributes() const;

        bool contains(const String& attribute);

        void insert(const String& attribute, const String& value);

        const String& get(const String& attribute);

        void siblingsOf(NodeArray&, const String& tag);

        /**
         * \return a const reference to the first element in the  _children vector
         */
        const Node& firstChild() const;

        Node* getFirstChild(const String& requireType);

        Node* getFirstChild(const int64_t& requireType);

        Node* firstChildOf(const String& tag);

        Node* firstChildOf(const int64_t& tag);

        Node* firstParentOf(const String& tag);

        Node* firstParentOf(const int64_t& tag);

        Node* nextSiblingOf(const String& tag) const;

        Node* nextSiblingOf(const int64_t& tag) const;

        /**
         * \brief Looks up the supplied name in the attribute map.
         * \param name The search term
         * \param def The default value if the search fails.
         * \return The found attribute value on success, otherwise returns the default value.
         */
        const String& attribute(const String& name, const String& def = "") const;

        /**
         * \copydoc Xml::Node::attribute
         */
        int64_t integer(const String& name, int64_t def = -1) const;

        /**
         * \brief Compares the supplied string with the internal tag name 
         * \param tagName The name of the XML tag to test for equality.
         * \return True if the two match.
         */
        bool isTypeOf(const char* tagName) const;

        /**
         * \brief Compares the supplied string with the internal tag name 
         * \param type The type of the XML tag to test for equality.
         * \return True if the two match.
         */
        bool isTypeOf(int64_t type) const;

        /**
         * \return true if the _children member is not empty
         */
        bool hasChildren() const;

        /**
         * \brief Preforms a linear search over of all child nodes
         * and matches the node's name with the supplied string.
         * \param str the search parameter.
         * \return true on the first match otherwise false.
         */
        bool hasChild(const char* str);

        /**
         * \return True if the node has any text data associated with it.
         */
        bool hasText() const;

        /**
         * \return True if the node has attributes attached to it.
         */
        bool hasAttributes() const;

    	void sort(const NodeSortFunc &fnc);
    };

    inline const NodeArray& Node::children() const
    {
        return _children;
    }

    inline Node* Node::parent() const
    {
        return _parent;
    }

    inline const String& Node::name() const
    {
        return _name;
    }

    inline const String& Node::text() const
    {
        return _text;
    }

    inline void Node::text(const String& text)
    {
        _text = text;
    }

    inline const AttributeMap& Node::attributes() const
    {
        return _attributes;
    }

    inline bool Node::hasText() const
    {
        return !_text.empty();
    }

    inline bool Node::hasAttributes() const
    {
        return !_attributes.empty();
    }

    inline size_t Node::size() const
    {
        return _children.size();
    }

    inline int64_t Node::getTypeCode() const
    {
        return _typeCode;
    }

    inline void Node::setTypeCode(const int64_t code)
    {
        _typeCode = code;
    }

}  // namespace MdDox::Xml
