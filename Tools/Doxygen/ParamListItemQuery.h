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
        class ParamListItemQueryVisitor
        {
        public:
            virtual ~ParamListItemQueryVisitor() = default;

            /**
             * \brief Callback for every _text_node
             */
            virtual void visitedText(const String& ) {}
            /**
             * \brief Called when the element <b>parameternamelist</b> is found.
             * \param query Const reference to the ParamNameListQuery class.
             */
            virtual void visitedParameterNameList(const ParamNameListQuery& query) {}
            /**
             * \brief Called when the element <b>parameterdescription</b> is found.
             * \param query Const reference to the DescriptionQuery class.
             */
            virtual void visitedParameterDescription(const DescriptionQuery& query) {}

        };
    }
    /**
     * \brief Implements the <tt>docParamListItem</tt> scaffolding.
     *
     * The following xml provides the source for the <b>docParamListItem</b> 
     * scaffolding.
     *
     * \code{.xml}
     *  <xsd:complexType name="docParamListItem">
     *    <xsd:sequence>
     *      <xsd:element minOccurs="0" name="parameternamelist" type="docParamNameList" maxOccurs="unbounded"/>
     *      <xsd:element name="parameterdescription" type="descriptionType"/>
     *    </xsd:sequence>
     *  </xsd:complexType>
     * \endcode
     */
    class ParamListItemQuery
    {
    private:
        Xml::Node* _node;

    public:
        ParamListItemQuery() :
            _node(nullptr)
        {
        }

        explicit ParamListItemQuery(Xml::Node* node) :
            _node(node)
        {
        }

        ParamListItemQuery(const ParamListItemQuery& other) = default;

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

        void visit(Visitors::ParamListItemQueryVisitor *) const;
        /**
         * \brief Provides access to the <b>parameterdescription</b> attribute.
         */
        void getParameterDescription(DescriptionQuery &dest) const;

        /**
         * \brief Provides access to the <b>parameterdescription</b> attribute.
         */
        DescriptionQuery getParameterDescription() const;

        /**
         * \brief Invokes the supplied callback on <b>parameternamelist</b> elements.
         */
        void foreachParameterNameList(const ParamNameListQueryFunction& invoke) const;


    };

    inline bool ParamListItemQuery::isValid() const
    {
        return _node != nullptr;
    }

    inline void ParamListItemQuery::reset()
    {
        _node = nullptr;
    }

    inline Xml::Node* ParamListItemQuery::node() const
    {
        return _node;
    }

    inline bool ParamListItemQuery::empty() const
    {
        return _node? !_node->hasChildren() : true;
    }

} // namespace MdDox::Doxygen
