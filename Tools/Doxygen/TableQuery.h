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
        class TableQueryVisitor
        {
        public:
            virtual ~TableQueryVisitor() = default;

            /**
             * \brief Callback for every _text_node
             */
            virtual void visitedText(const String& ) {}
            /**
             * \brief Called when the element <b>caption</b> is found.
             * \param query Const reference to the CaptionQuery class.
             */
            virtual void visitedCaption(const CaptionQuery& query) {}

        };
    }
    /**
     * \brief Implements the <tt>docTableType</tt> scaffolding.
     *
     * The following xml provides the source for the <b>docTableType</b> 
     * scaffolding.
     *
     * \code{.xml}
     *  <xsd:complexType name="docTableType">
     *    <xsd:sequence>
     *      <xsd:element minOccurs="0" name="row" type="docRowType" maxOccurs="unbounded"/>
     *      <xsd:element minOccurs="0" name="caption" type="docCaptionType"/>
     *    </xsd:sequence>
     *    <xsd:attribute name="rows" type="xsd:integer"/>
     *    <xsd:attribute name="cols" type="xsd:integer"/>
     *  </xsd:complexType>
     * \endcode
     */
    class TableQuery
    {
    private:
        Xml::Node* _node;

    public:
        TableQuery() :
            _node(nullptr)
        {
        }

        explicit TableQuery(Xml::Node* node) :
            _node(node)
        {
        }

        TableQuery(const TableQuery& other) = default;

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

        void visit(Visitors::TableQueryVisitor *) const;
        /**
         * \brief Provides access to the <b>caption</b> attribute.
         */
        void getCaption(CaptionQuery &dest) const;

        /**
         * \brief Provides access to the <b>caption</b> attribute.
         */
        CaptionQuery getCaption() const;

        /**
         * \brief Provides access to the <b>rows</b> attribute.
         *
         */
        int64_t getRows(int64_t def = -1) const;

        /**
         * \brief Provides access to the <b>cols</b> attribute.
         *
         */
        int64_t getCols(int64_t def = -1) const;


    };

    inline bool TableQuery::isValid() const
    {
        return _node != nullptr;
    }

    inline void TableQuery::reset()
    {
        _node = nullptr;
    }

    inline Xml::Node* TableQuery::node() const
    {
        return _node;
    }

    inline bool TableQuery::empty() const
    {
        return _node? !_node->hasChildren() : true;
    }

} // namespace MdDox::Doxygen
