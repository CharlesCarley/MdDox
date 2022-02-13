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

#include "DoxProtectionKind.h"

namespace MdDox::Doxygen
{

    /**
     * \brief Implements the <tt>refType</tt> scaffolding.
     *
     * The following xml provides the source for the <b>refType</b> 
     * scaffolding.
     *
     * \code{.xml}
     *  <xsd:complexType name="refType">
     *    <xsd:simpleContent>
     *      <xsd:extension base="xsd:string">
     *        <xsd:attribute name="refid" type="xsd:string"/>
     *        <xsd:attribute name="prot" type="DoxProtectionKind" use="optional"/>
     *      </xsd:extension>
     *    </xsd:simpleContent>
     *  </xsd:complexType>
     * \endcode
     */
    class RefQuery
    {
    private:
        Xml::Node* _node;

    public:
        RefQuery() :
            _node(nullptr)
        {
        }

        explicit RefQuery(Xml::Node* node) :
            _node(node)
        {
        }

        RefQuery(const RefQuery& other) = default;

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
        /**
         * \brief Provides access to the <b>prot</b> element.
         *
         * \return The <b>prot</b> enumerated value or -1 if the value is not found. 
         */
        DoxProtectionKindEnum getProt() const;

        /**
         * \brief Provides access to the <b>refid</b> attribute.
         *
         * \return The <b>refid</b> enumerated value or an empty string 
         *  the value is not found. 
         */
        const String& getRefId(const String& notFound="") const;


    };

    inline bool RefQuery::isValid() const
    {
        return _node != nullptr;
    }

    inline void RefQuery::reset()
    {
        _node = nullptr;
    }

    inline Xml::Node* RefQuery::node() const
    {
        return _node;
    }

    inline bool RefQuery::empty() const
    {
        return _node? !_node->hasChildren() : true;
    }

} // namespace MdDox::Doxygen
