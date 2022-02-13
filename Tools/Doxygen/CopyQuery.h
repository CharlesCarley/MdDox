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
        class CopyQueryVisitor
        {
        public:
            virtual ~CopyQueryVisitor() = default;

            /**
             * \brief Callback for every _text_node
             */
            virtual void visitedText(const String& ) {}
            /**
             * \brief Called when the element <b>para</b> is found.
             * \param query Const reference to the ParaQuery class.
             */
            virtual void visitedParagraph(const ParaQuery& query) {}
            /**
             * \brief Called when the element <b>sect1</b> is found.
             * \param query Const reference to the Sect1Query class.
             */
            virtual void visitedSect1(const Sect1Query& query) {}
            /**
             * \brief Called when the element <b>internal</b> is found.
             * \param query Const reference to the InternalQuery class.
             */
            virtual void visitedInternal(const InternalQuery& query) {}

        };
    }
    /**
     * \brief Implements the <tt>docCopyType</tt> scaffolding.
     *
     * The following xml provides the source for the <b>docCopyType</b> 
     * scaffolding.
     *
     * \code{.xml}
     *  <xsd:complexType name="docCopyType">
     *    <xsd:sequence>
     *      <xsd:element minOccurs="0" name="para" type="docParaType" maxOccurs="unbounded"/>
     *      <xsd:element minOccurs="0" name="sect1" type="docSect1Type" maxOccurs="unbounded"/>
     *      <xsd:element minOccurs="0" name="internal" type="docInternalType"/>
     *    </xsd:sequence>
     *    <xsd:attribute name="link" type="xsd:string"/>
     *  </xsd:complexType>
     * \endcode
     */
    class CopyQuery
    {
    private:
        Xml::Node* _node;

    public:
        CopyQuery() :
            _node(nullptr)
        {
        }

        explicit CopyQuery(Xml::Node* node) :
            _node(node)
        {
        }

        CopyQuery(const CopyQuery& other) = default;

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

        void visit(Visitors::CopyQueryVisitor *) const;
        /**
         * \brief Provides access to the <b>link</b> attribute.
         *
         * \return The <b>link</b> enumerated value or an empty string 
         *  the value is not found. 
         */
        const String& getLink(const String& notFound="") const;

        /**
         * \brief Provides access to the <b>internal</b> attribute.
         */
        void getInternal(InternalQuery &dest) const;

        /**
         * \brief Provides access to the <b>internal</b> attribute.
         */
        InternalQuery getInternal() const;

        /**
         * \brief Invokes the supplied callback on <b>para</b> elements.
         */
        void foreachParagraph(const ParaQueryFunction& invoke) const;

        /**
         * \brief Invokes the supplied callback on <b>sect1</b> elements.
         */
        void foreachSect1(const Sect1QueryFunction& invoke) const;


    };

    inline bool CopyQuery::isValid() const
    {
        return _node != nullptr;
    }

    inline void CopyQuery::reset()
    {
        _node = nullptr;
    }

    inline Xml::Node* CopyQuery::node() const
    {
        return _node;
    }

    inline bool CopyQuery::empty() const
    {
        return _node? !_node->hasChildren() : true;
    }

} // namespace MdDox::Doxygen