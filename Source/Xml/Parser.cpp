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
#include "Xml/Parser.h"
#include "Utils/Char.h"
#include "Utils/TypeFilter.h"
#include "Xml/Node.h"
#include "Xml/Scanner.h"
#include "Xml/Token.h"

namespace MdDox::Xml
{
    Parser::Parser()
    {
        _root    = new Node();
        _scanner = new Scanner();
    }

    Parser::~Parser()
    {
        delete _root;
        _root = nullptr;

        delete _scanner;
        _scanner = nullptr;
    }

    void Parser::applyFilter(const TypeFilter* filter, size_t filterSize)
    {
        makeTypeFilter(_filter, filter, filterSize);
    }

    void Parser::parseErrorMessageImpl(String& dest, const String& message)
    {
        OutputStringStream oss;
        oss << message << std::endl;

        while (_stack.size() > 1)
        {
            Node* nd = _stack.top();
            oss << nd->name() << std::endl;
            _stack.pop();

            delete nd;
        }

        dest = oss.str();
    }

    Node* Parser::createTag(const String& name)
    {
        Node* node = new Node(name);
        _stack.push(node);
        return node;
    }

    Node& Parser::top()
    {
        if (_stack.empty())
            parseError("empty stack");
        return *_stack.top();
    }

    Node* Parser::root() const
    {
        if (!_root)
            throw InvalidPointer();
        return _root;
    }

    void Parser::reduceRule()
    {
        if (_stack.size() > 1)
        {
            Node* b = _stack.top();
            _stack.pop();

            if (_filter.empty())
            {
                Node* a = _stack.top();
                a->addChild(b);
            }
            else
            {
                const TypeFilterMap::iterator it = _filter.find(b->name());
                if (it != _filter.end())
                {
                    Node* a = _stack.top();
                    b->setTypeCode(it->second);

                    a->addChild(b);
                }
                else
                    delete b;
            }
        }
    }

    void Parser::dropRule()
    {
        if (_stack.size() > 1)
        {
            Node* b = _stack.top();
            _stack.pop();
            delete b;
        }
    }

    void Parser::ruleAttributeList()
    {
        int8_t t0 = getToken(0).getType();

        if (t0 != TOK_EN_TAG && t0 != TOK_SLASH)
        {
            do
            {
                ruleAttribute();
                t0 = getToken(0).getType();

                if (t0 == TOK_EOF)
                    parseError("unexpected end of file");

            } while (t0 != TOK_EN_TAG && t0 != TOK_SLASH);
        }
    }

    void Parser::ruleAttribute()
    {
        const int8_t t0 = getToken(0).getType();
        const int8_t t1 = getToken(1).getType();
        const int8_t t2 = getToken(2).getType();

        if (t0 != TOK_IDENTIFIER)
            parseError("expected an identifier");
        if (t1 != TOK_EQUALS)
            parseError("expected an equals sign");
        if (t2 != TOK_STRING)
            parseError("expected an equals sign");

        Node& node = top();

        String identifier;
        _scanner->string(identifier, getToken(0).getIndex());

        if (node.contains(identifier))
            parseError(node.name(), " duplicate attribute ", identifier);

        String value;
        _scanner->string(value, getToken(2).getIndex());

        node.insert(identifier, value);
        advanceCursor(3);
    }

    void Parser::ruleXmlRoot()
    {
        int8_t       t0 = getToken(0).getType();
        const int8_t t1 = getToken(1).getType();
        const int8_t t2 = getToken(2).getType();

        if (t0 != TOK_ST_TAG)
            parseError("expected the '<' character");
        if (t1 != TOK_QUESTION)
            parseError("expected the '/' character");
        if (t2 != TOK_KW_XML)
            parseError("expected the xml keyword");

        advanceCursor(3);
        t0 = getToken(0).getType();

        while (t0 != TOK_QUESTION)
        {
            ruleAttribute();
            t0 = getToken(0).getType();
            if (t0 == TOK_EOF)
                parseError("unexpected end of file");
        }

        advanceCursor();
        t0 = getToken(0).getType();
        if (t0 != TOK_EN_TAG)
            parseError("unexpected token ", Char::toHexString((uint8_t)t0));
        advanceCursor();
    }

    void Parser::ruleStartTag()
    {
        const Token& t0 = getToken(0);
        const Token& t1 = getToken(1);

        if (t0.getType() != TOK_ST_TAG)
            parseError("expected the < character");
        if (t1.getType() != TOK_IDENTIFIER)
            parseError("expected a tag identifier");

        String value;
        _scanner->string(value, t1.getIndex());
        if (value.empty())
            parseError("empty tag name");

        advanceCursor(2);

        createTag(value);

        ruleAttributeList();

        // Test exit state from the attribute list call
        // > means leave node on the stack
        // / means remove the node from the stack

        const int8_t et0 = getToken(0).getType();

        if (et0 == TOK_SLASH)
        {
            const int8_t et1 = getToken(1).getType();
            if (et1 != TOK_EN_TAG)
                parseError("expected the '>' character ");

            reduceRule();
            advanceCursor(2);
        }
        else if (et0 != TOK_EN_TAG)
            parseError("expected the '>' character ");
        else
            advanceCursor();
    }

    void Parser::ruleContent()
    {
        const Token& t0 = getToken(0);
        if (t0.getType() != TOK_TEXT)
            parseError("expected content text");

        String content;

        Scanner* scn = (Scanner*)_scanner;
        scn->getCode(content, t0.getIndex());

        if (content.empty())
            parseError("unexpected empty content token");

        top().text(content);

        Node* node = createTag("_text_node");
        node->text(content);
        reduceRule();

        advanceCursor();
    }

    void Parser::ruleEndTag()
    {
        // '<' '/'
        const int8_t t0 = getToken(0).getType();
        const int8_t t1 = getToken(1).getType();
        const int8_t t2 = getToken(2).getType();
        const int8_t t3 = getToken(3).getType();

        if (t0 != TOK_ST_TAG)
            parseError("expected the '<' character");
        if (t1 != TOK_SLASH)
            parseError("expected the '/' character");
        if (t2 != TOK_IDENTIFIER)
            parseError("expected a tag identifier");
        if (t3 != TOK_EN_TAG)
            parseError("expected the '>' character");

        String identifier;
        _scanner->string(identifier, getToken(2).getIndex());

        if (identifier != top().name())
        {
            parseError("closing tag mis-match between '",
                       top().name(),
                       '\'',
                       " and '",
                       identifier,
                       '\'');
        }

        if (identifier.empty())
            parseError("empty closing tag");

        advanceCursor(4);
        reduceRule();
    }

    void Parser::ruleObject()
    {
        const int8_t t0 = getToken(0).getType();
        const int8_t t1 = getToken(1).getType();
        const int8_t t2 = getToken(2).getType();

        if (t0 == TOK_ST_TAG && t1 == TOK_IDENTIFIER)
            ruleStartTag();
        else if (t0 == TOK_ST_TAG && t1 == TOK_SLASH && t2 == TOK_IDENTIFIER)
            ruleEndTag();
        else
            ruleContent();
    }

    void Parser::ruleObjectList()
    {
        const int8_t t0 = getToken(0).getType();
        const int8_t t1 = getToken(1).getType();

        if (t1 == TOK_QUESTION)
        {
            createTag("xml");

            ruleXmlRoot();

            // If this actually controlled the parser
            // set it here, but it's not so just drop it.
            dropRule();
        }
        else if (t0 == TOK_ST_TAG || t0 == TOK_TEXT)
            ruleObject();
        else
            parseError("unknown token parsed 0x", Char::toHexString((uint8_t)t0));
    }

    void Parser::parseImpl(IStream& input)
    {
        // make sure the token cursor is at zero
        // initially and attach the input stream
        // to the scanner
        _cursor = 0;
        _scanner->attach(&input, _filePath);

        _stack.push(_root);

        while (_cursor <= (int32_t)_tokens.size())
        {
            const int8_t tok = getToken(0).getType();
            if (tok == TOK_EOF)
                break;

            const int32_t op = _cursor;
            ruleObjectList();

            // if the cursor did not
            // advance force it to.
            if (op == _cursor)
                advanceCursor();
        }
    }

    void Parser::writeImpl(OStream& output, int)
    {
    }
}  // namespace MdDox::Xml
