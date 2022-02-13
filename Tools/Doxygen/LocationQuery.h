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

    /**
     * \brief Implements the <tt>locationType</tt> scaffolding.
     *
     * The following xml provides the source for the <b>locationType</b> 
     * scaffolding.
     *
     * \code{.xml}
     *  <xsd:complexType name="locationType">
     *    <xsd:attribute name="file" type="xsd:string"/>
     *    <xsd:attribute name="line" type="xsd:integer"/>
     *    <xsd:attribute name="column" type="xsd:integer" use="optional"/>
     *    <xsd:attribute name="bodyfile" type="xsd:string"/>
     *    <xsd:attribute name="bodystart" type="xsd:integer"/>
     *    <xsd:attribute name="bodyend" type="xsd:integer"/>
     *  </xsd:complexType>
     * \endcode
     */
    class LocationQuery
    {
    private:
        Xml::Node* _node;

    public:
        LocationQuery() :
            _node(nullptr)
        {
        }

        explicit LocationQuery(Xml::Node* node) :
            _node(node)
        {
        }

        LocationQuery(const LocationQuery& other) = default;

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
         * \brief Provides access to the <b>bodyfile</b> attribute.
         *
         * \return The <b>bodyfile</b> enumerated value or an empty string 
         *  the value is not found. 
         */
        const String& getBodyFile(const String& notFound="") const;

        /**
         * \brief Provides access to the <b>file</b> attribute.
         *
         * \return The <b>file</b> enumerated value or an empty string 
         *  the value is not found. 
         */
        const String& getFile(const String& notFound="") const;

        /**
         * \brief Provides access to the <b>bodystart</b> attribute.
         *
         */
        int64_t getBodyStart(int64_t def = -1) const;

        /**
         * \brief Provides access to the <b>column</b> attribute.
         *
         */
        int64_t getColumn(int64_t def = -1) const;

        /**
         * \brief Provides access to the <b>line</b> attribute.
         *
         */
        int64_t getLine(int64_t def = -1) const;

        /**
         * \brief Provides access to the <b>bodyend</b> attribute.
         *
         */
        int64_t getBodyEnd(int64_t def = -1) const;


    };

    inline bool LocationQuery::isValid() const
    {
        return _node != nullptr;
    }

    inline void LocationQuery::reset()
    {
        _node = nullptr;
    }

    inline Xml::Node* LocationQuery::node() const
    {
        return _node;
    }

    inline bool LocationQuery::empty() const
    {
        return _node? !_node->hasChildren() : true;
    }

} // namespace MdDox::Doxygen
