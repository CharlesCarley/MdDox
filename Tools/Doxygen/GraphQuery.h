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
#include "Doxygen.h"


namespace MdDox::Doxygen
{
    namespace Visitors
    {
        class GraphQueryVisitor
        {
        public:
            virtual ~GraphQueryVisitor() = default;

            /**
             * \brief Callback for every _text_node
             */
            virtual void visitedText(const String& ) {}
            /**
             * \brief Called when the element <b>node</b> is found.
             * \param query Const reference to the NodeQuery class.
             */
            virtual void visitedNode(const NodeQuery& query) {}

        };
    }
    /**
     * \brief Implements the <tt>graphType</tt> scaffolding.
     *
     * The following xml provides the source for the <b>graphType</b> 
     * scaffolding.
     *
     * \code{.xml}
     *  <xsd:complexType name="graphType">
     *    <xsd:sequence>
     *      <xsd:element name="node" type="nodeType" maxOccurs="unbounded"/>
     *    </xsd:sequence>
     *  </xsd:complexType>
     * \endcode
     */
    class GraphQuery
    {
    private:
        Xml::Node* _node;

    public:
        GraphQuery() :
            _node(nullptr)
        {
        }

        explicit GraphQuery(Xml::Node* node) :
            _node(node)
        {
        }

        GraphQuery(const GraphQuery& other) = default;

        /**
         * \brief Checks to see if the internal node is usable.
         */
        bool isValid() const;

        /**
         * \brief Checks to see if the internal node has children.
         */
        bool empty() const;

        /**
         * \brief Resets the internal node pointer to null.
         */
        void reset();

        /**
         * \brief Returns the wrapped node pointer.
         */
        Xml::Node* node() const;

        /**
         * \brief Sorts the nodes in the query based on priority of type.
         */
        void sort(const SortMap& childOrder) const;

        /**
         * \brief Provides access to the node's inner text.
         * \return The text data associated with this node the default value.
         */
        const String& text(const String& def="") const;

        void visit(Visitors::GraphQueryVisitor *) const;
        /**
         * \brief Invokes the supplied callback on <b>node</b> elements.
         */
        void foreachNode(const NodeQueryFunction& invoke) const;


    };

    inline bool GraphQuery::isValid() const
    {
        return _node != nullptr;
    }

    inline void GraphQuery::reset()
    {
        _node = nullptr;
    }

    inline Xml::Node* GraphQuery::node() const
    {
        return _node;
    }

    inline bool GraphQuery::empty() const
    {
        return _node? !_node->hasChildren() : true;
    }

} // namespace MdDox::Doxygen
