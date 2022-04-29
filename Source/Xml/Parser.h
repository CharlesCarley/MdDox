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
#include <stack>
#include "Utils/ParserBase/ParserBase.h"
#include "Utils/String.h"
#include "Utils/TypeFilter.h"
#include "Xml/Node.h"

namespace MdDox {
	struct TypeFilter;
}

/**
 * \brief Provides a grouping of classes that handle parsing XML files.
 *
 * <b>Typical Usage:</b>
 * The Parser is easy to use, just create an instance of the parser then invoke it's parse method.
 * \br
 * Internally, any parse and syntax errors will throw an exception so it needs to be wrapped
 * in a try catch block. On a successful parse, the root method will return the root node of the tree.
 * \br
 * The following shows example usage.
 * \code{.cpp}
 * using namespace MdDox;
 * try
 * {
 *      Xml::Parser parser;
 *      parser.parse("file.xml");
 *
 *      Xml::Node *root = parser.root();
 *
 *      Xml::Writer writer(root);
 *      writer.write(std::cout);
 * }
 * catch(Exception &ex)
 * {
 *      Console::writeLine(ex.what());
 * }
 * \endcode
 *
 */
namespace MdDox::Xml
{
    class Scanner;
    
    /**
     * \brief Provides a string based Cache implementation.
     */
    using StringCache = Cache<String>;

    /**
     * \brief Provides a stack structure to build the node tree.
     */
    using NodeStack = std::stack<Node*>;

    /**
     * \brief Parser is the XML based implementation of the ParseBase base class.
     * 
     * It's primary responsibility is to manage the Scanner and build the Node tree.
     *
     *
     * It uses the following grammar to define an XML document.
	 *
	 * \code{.txt}
	 * <Document> ::=  <XmlRoot> 
	 *              |  <ObjectList>
	 *              |
	 *
	 * <XmlRoot> ::= '<?xml' <AttributeList> '?>' <Object>
	 *
	 * <ObjectList> ::= <Object> <ObjectList>
	 *                | <Object>
	 *
	 * <Content> ::= <ObjectList>
	 *             | <Text> <Content>
	 *             |
	 *
	 * <Object> ::= <StartObject>  <Content> <EndObject>
	 *
	 * <StartObject>  ::= '<' Identifier <AttributeList> '>'
	 *                  | '<' Identifier <AttributeList> '/' '>'
	 *
	 * <EndObject>    ::= '<' '/' Identifier '>'
	 *
	 * <AttributeList> ::= <Attribute> <AttributeList>
	 *                   |
	 *
	 * <Attribute> ::=  <AttributeName> '=' String
	 * <AttributeName> ::= Identifier
	 *                   | Identifier ':' Identifier
	 * <Text> ::= Content
	 *          | String
	 *          | Identifier
	 * \endcode
     */
    class Parser final : public ParserBase
    {
    private:
        StringCache   _labels;
        Node*         _root;
        NodeStack     _stack;
        TypeFilterMap _filter;

    private:
        /**
         * \brief Implements the actual parse loop.
         * \param input The input stream to read from.
         */
        void parseImpl(IStream& input) override;

        /**
         * \brief Implements a write method to write the node tree to file. 
         * \param output The output stream to write to.
         * \param format Provides a custom format argument to pass down to the implementation.
         */
        void writeImpl(OStream& output, int format = 0) override;

        void ruleAttributeList();

        void ruleAttribute();

        void ruleObject();

        void ruleStartTag();

        void ruleContent();

        void ruleEndTag();

        void ruleXmlRoot();

        void ruleObjectList();

        Node* createTag(const String& name);

        void reduceRule();

        void dropRule();

        Node& top();

        void parseErrorMessageImpl(String& dest, const String& message) override;

    public:
        Parser();
        ~Parser() override;

    	void applyFilter(const TypeFilter *, size_t filterSize);
        /**
         * \brief Provides access to the root of the node tree.
         */
        Node* root() const;
    };

}  // namespace MdDox::Xml
