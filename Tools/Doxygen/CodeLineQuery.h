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

#include "DoxRefKind.h"
#include "DoxBool.h"

namespace MdDox::Doxygen
{
    namespace Visitors
    {
        class CodeLineQueryVisitor
        {
        public:
            virtual ~CodeLineQueryVisitor() = default;

            /**
             * \brief Callback for every _text_node
             */
            virtual void visitedText(const String& ) {}
            /**
             * \brief Called when the element <b>highlight</b> is found.
             * \param query Const reference to the HighlightQuery class.
             */
            virtual void visitedHighlight(const HighlightQuery& query) {}

        };
    }
    /**
     * \brief Implements the <tt>codelineType</tt> scaffolding.
     *
     * The following xml provides the source for the <b>codelineType</b> 
     * scaffolding.
     *
     * \code{.xml}
     *  <xsd:complexType name="codelineType">
     *    <xsd:sequence>
     *      <xsd:element minOccurs="0" name="highlight" type="highlightType" maxOccurs="unbounded"/>
     *    </xsd:sequence>
     *    <xsd:attribute name="lineno" type="xsd:integer"/>
     *    <xsd:attribute name="refid" type="xsd:string"/>
     *    <xsd:attribute name="refkind" type="DoxRefKind"/>
     *    <xsd:attribute name="external" type="DoxBool"/>
     *  </xsd:complexType>
     * \endcode
     */
    class CodeLineQuery
    {
    private:
        Xml::Node* _node;

    public:
        CodeLineQuery() :
            _node(nullptr)
        {
        }

        explicit CodeLineQuery(Xml::Node* node) :
            _node(node)
        {
        }

        CodeLineQuery(const CodeLineQuery& other) = default;

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

        void visit(Visitors::CodeLineQueryVisitor *) const;
        /**
         * \brief Provides access to the <b>refkind</b> element.
         *
         * \return The <b>refkind</b> enumerated value or -1 if the value is not found. 
         */
        DoxRefKindEnum getRefKind() const;

        /**
         * \brief Provides access to the <b>external</b> element.
         *
         * \return The <b>external</b> enumerated value or -1 if the value is not found. 
         */
        DoxBoolEnum getExternal() const;

        /**
         * \brief Provides access to the <b>refid</b> attribute.
         *
         * \return The <b>refid</b> enumerated value or an empty string 
         *  the value is not found. 
         */
        const String& getRefId(const String& notFound="") const;

        /**
         * \brief Provides access to the <b>lineno</b> attribute.
         *
         */
        int64_t getLineNo(int64_t def = -1) const;

        /**
         * \brief Invokes the supplied callback on <b>highlight</b> elements.
         */
        void foreachHighlight(const HighlightQueryFunction& invoke) const;


    };

    inline bool CodeLineQuery::isValid() const
    {
        return _node != nullptr;
    }

    inline void CodeLineQuery::reset()
    {
        _node = nullptr;
    }

    inline Xml::Node* CodeLineQuery::node() const
    {
        return _node;
    }

    inline bool CodeLineQuery::empty() const
    {
        return _node? !_node->hasChildren() : true;
    }

} // namespace MdDox::Doxygen
