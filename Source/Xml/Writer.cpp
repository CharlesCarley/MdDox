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
#include "Xml/Writer.h"
#include <iomanip>
#include "Utils/FileSystem.h"
#include "Xml/Node.h"

namespace MdDox::Xml
{
    constexpr size_t Indent = 2;

    Writer::Writer(Node* root) :
        _root(root)
    {
    }

    void Writer::setIndent(int indent)
    {
        _indent = indent;
    }

    void Writer::setWriteXml(bool value)
    {
        _writeXml = value;
    }

    void Writer::openTag(Node* tag)
    {
        if (!tag)
            return;

        _out << std::setw((size_t)(_indent - 1)) << ' ';
        _out << '<' << tag->name();
        writeAttributes(tag);
        _out << '>' << std::endl;
        _indent += Indent;
    }

    void Writer::closeTag(Node* tag)
    {
        if (!tag)
            return;

        _indent -= Indent;
        _out << std::setw((size_t)(_indent - 1)) << ' ';
        _out << '<' << '/' << tag->name() << '>' << std::endl;
    }

    void Writer::inlineTag(Node* tag)
    {
        if (!tag)
            return;

        _out << std::setw((size_t)(_indent - 1)) << ' ';
        _out << '<'
             << tag->name();

        writeAttributes(tag);
        _out << "/>" << std::endl;
    }

    void Writer::writeAttributes(Node* tag)
    {
        if (!tag)
            return;

        if (tag->hasAttributes())
        {
            const AttributeMap& attr = tag->attributes();
            for (const auto& [k, v] : attr)
            {
                _out << " ";
                _out << k << '=' << '"' << v << '"';
            }
        }
    }

    void Writer::writeTag(Node* tag)
    {
        if (!tag)
            return;

        String name, typeValue;
        if (tag->hasChildren())
        {
            openTag(tag);

            for (Node* element : tag->children())
                writeTag(element);
            closeTag(tag);
        }
        else
            inlineTag(tag);
    }

    void Writer::write(OStream& output)
    {
        if (_writeXml)
            _out << "<?xml version=\"1.0\"?>" << std::endl;

        writeTag(_root);

        const String dest = _out.str();
        output.write(dest.c_str(), dest.size());
    }
}  // namespace MdDox::Xml
