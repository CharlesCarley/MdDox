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

#include "DoxCompoundKind.h"

namespace MdDox::Doxygen
{
    namespace Visitors
    {
        class CompoundIndexQueryVisitor
        {
        public:
            virtual ~CompoundIndexQueryVisitor() = default;

            /**
             * \brief Callback for every _text_node
             */
            virtual void visitedText(const String& ) {}
            /**
             * \brief Called when the element <b>member</b> is found.
             * \param query Const reference to the MemberIndexQuery class.
             */
            virtual void visitedMember(const MemberIndexQuery& query) {}
            /**
             * \brief Called when the element <b>name</b> is found.
             * \param text Const reference to the internal text.
             */
            virtual void visitedName(const String& text) {}

        };
    }
    /**
     * \brief Implements the <tt>CompoundIndexType</tt> scaffolding.
     *
     * The following xml provides the source for the <b>CompoundIndexType</b> 
     * scaffolding.
     *
     * \code{.xml}
     *  <xsd:complexType name="CompoundIndexType">
     *    <xsd:sequence>
     *      <xsd:element name="name" type="xsd:string"/>
     *      <xsd:element minOccurs="0" name="member" type="MemberIndexType" maxOccurs="unbounded"/>
     *    </xsd:sequence>
     *    <xsd:attribute name="refid" type="xsd:string" use="required"/>
     *    <xsd:attribute name="kind" type="CompoundKind" use="required"/>
     *  </xsd:complexType>
     * \endcode
     */
    class CompoundIndexQuery
    {
    private:
        Xml::Node* _node;

    public:
        CompoundIndexQuery() :
            _node(nullptr)
        {
        }

        explicit CompoundIndexQuery(Xml::Node* node) :
            _node(node)
        {
        }

        CompoundIndexQuery(const CompoundIndexQuery& other) = default;

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

        void visit(Visitors::CompoundIndexQueryVisitor *) const;
        /**
         * \brief Provides access to the <b>kind</b> element.
         *
         * \return The <b>kind</b> enumerated value or -1 if the value is not found. 
         */
        DoxCompoundKindEnum getKind() const;

        /**
         * \brief Provides access to the <b>refid</b> attribute.
         *
         * \return The <b>refid</b> enumerated value or an empty string 
         *  the value is not found. 
         */
        const String& getRefId(const String& notFound="") const;

        /**
         * \brief Provides access to the <b>name</b> tag's inner text.
         *
         * \return The <b>name's</b> text or the default value if the node is invalid. 
         */
        const String& getName(const String& notFound="") const;

        /**
         * \brief Invokes the supplied callback on <b>member</b> elements.
         */
        void foreachMember(const MemberIndexQueryFunction& invoke) const;


    };

    inline bool CompoundIndexQuery::isValid() const
    {
        return _node != nullptr;
    }

    inline void CompoundIndexQuery::reset()
    {
        _node = nullptr;
    }

    inline Xml::Node* CompoundIndexQuery::node() const
    {
        return _node;
    }

    inline bool CompoundIndexQuery::empty() const
    {
        return _node? !_node->hasChildren() : true;
    }

} // namespace MdDox::Doxygen
