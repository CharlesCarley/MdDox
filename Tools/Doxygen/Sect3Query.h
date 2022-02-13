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
        class Sect3QueryVisitor
        {
        public:
            virtual ~Sect3QueryVisitor() = default;

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
             * \brief Called when the element <b>sect4</b> is found.
             * \param query Const reference to the Sect4Query class.
             */
            virtual void visitedSect4(const Sect4Query& query) {}
            /**
             * \brief Called when the element <b>internal</b> is found.
             * \param query Const reference to the InternalS3Query class.
             */
            virtual void visitedInternal(const InternalS3Query& query) {}
            /**
             * \brief Called when the element <b>title</b> is found.
             * \param text Const reference to the internal text.
             */
            virtual void visitedTitle(const String& text) {}

        };
    }
    /**
     * \brief Implements the <tt>docSect3Type</tt> scaffolding.
     *
     * The following xml provides the source for the <b>docSect3Type</b> 
     * scaffolding.
     *
     * \code{.xml}
     *  <xsd:complexType name="docSect3Type" mixed="true">
     *    <xsd:sequence>
     *      <xsd:element name="title" type="xsd:string"/>
     *      <xsd:element minOccurs="0" name="para" type="docParaType" maxOccurs="unbounded"/>
     *      <xsd:element minOccurs="0" name="sect4" type="docSect4Type" maxOccurs="unbounded"/>
     *      <xsd:element minOccurs="0" name="internal" type="docInternalS3Type"/>
     *    </xsd:sequence>
     *    <xsd:attribute name="id" type="xsd:string"/>
     *  </xsd:complexType>
     * \endcode
     */
    class Sect3Query
    {
    private:
        Xml::Node* _node;

    public:
        Sect3Query() :
            _node(nullptr)
        {
        }

        explicit Sect3Query(Xml::Node* node) :
            _node(node)
        {
        }

        Sect3Query(const Sect3Query& other) = default;

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

        void visit(Visitors::Sect3QueryVisitor *) const;
        /**
         * \brief Provides access to the <b>id</b> attribute.
         *
         * \return The <b>id</b> enumerated value or an empty string 
         *  the value is not found. 
         */
        const String& getId(const String& notFound="") const;

        /**
         * \brief Provides access to the <b>title</b> tag's inner text.
         *
         * \return The <b>title's</b> text or the default value if the node is invalid. 
         */
        const String& getTitle(const String& notFound="") const;

        /**
         * \brief Provides access to the <b>internal</b> attribute.
         */
        void getInternal(InternalS3Query &dest) const;

        /**
         * \brief Provides access to the <b>internal</b> attribute.
         */
        InternalS3Query getInternal() const;

        /**
         * \brief Invokes the supplied callback on <b>para</b> elements.
         */
        void foreachParagraph(const ParaQueryFunction& invoke) const;

        /**
         * \brief Invokes the supplied callback on <b>sect4</b> elements.
         */
        void foreachSect4(const Sect4QueryFunction& invoke) const;


    };

    inline bool Sect3Query::isValid() const
    {
        return _node != nullptr;
    }

    inline void Sect3Query::reset()
    {
        _node = nullptr;
    }

    inline Xml::Node* Sect3Query::node() const
    {
        return _node;
    }

    inline bool Sect3Query::empty() const
    {
        return _node? !_node->hasChildren() : true;
    }

} // namespace MdDox::Doxygen
