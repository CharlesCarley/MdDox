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
        class ListOfAllMembersQueryVisitor
        {
        public:
            virtual ~ListOfAllMembersQueryVisitor() = default;

            /**
             * \brief Callback for every _text_node
             */
            virtual void visitedText(const String& ) {}
            /**
             * \brief Called when the element <b>member</b> is found.
             * \param query Const reference to the MemberRefQuery class.
             */
            virtual void visitedMember(const MemberRefQuery& query) {}

        };
    }
    /**
     * \brief Implements the <tt>listofallmembersType</tt> scaffolding.
     *
     * The following xml provides the source for the <b>listofallmembersType</b> 
     * scaffolding.
     * \n\n
     * \code{.xml}
     *  <xsd:complexType name="listofallmembersType">
     *    <xsd:sequence>
     *      <xsd:element minOccurs="0" name="member" type="memberRefType" maxOccurs="unbounded"/>
     *    </xsd:sequence>
     *  </xsd:complexType>
     * \endcode
     */
    class ListOfAllMembersQuery : public Query
    {
    public:
        ListOfAllMembersQuery() = default;
        ListOfAllMembersQuery(const ListOfAllMembersQuery& other) = default;

        explicit ListOfAllMembersQuery(Xml::Node* node) :
            Query(node)
        {
        }

        void visit(Visitors::ListOfAllMembersQueryVisitor *) const;
        /**
         * \brief Invokes the supplied callback on <b>member</b> elements.
         */
        void foreachMember(const MemberRefQueryFunction& invoke) const;


    };
} // namespace MdDox::Doxygen
