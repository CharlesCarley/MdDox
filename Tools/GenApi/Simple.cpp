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
#include "Simple.h"
#include "Group.h"
#include "Utils/Exception.h"
#include "Utils/Path.h"
#include "Utils/String.h"
#include "Xml/Writer.h"

namespace MdDox
{
    class PathUtil;
}

namespace MdDox::GenApi
{
    Simple::Simple(Xml::Node* node, String name, String type, String header) :
        Object(std::move(name)),
        _node(node),
        _tagType(std ::move(type)),
        _header(std::move(header))
    {
        for (char ch : _name)
        {
            if (ch >= 'A' && ch <= 'Z')
                _prefix.push_back(ch);
        }
    }

    Simple::~Simple() = default;

    void Simple::writeHeader(OutputFileStream& out)
    {
        out << _header;
        text(out, 0x00, "#pragma once");
        text(out, 0x00, "#include \"Doxygen.h\"");
        newLine(out, 2);
        text(out, 0x00, "namespace MdDox::Doxygen");
        text(out, 0x00, '{');

        text(out, 0x04, "/**");
        text(out, 0x05, "* The following xml provides the <b>", _tagType, "</b> declaration.");
        text(out, 0x05, "*");
        text(out, 0x05, "*");
        text(out, 0x05, "* \\code{.xml}");
        OutputStringStream oss;
        Xml::Writer        w(_node);
        w.setIndent(0x02);
        w.setWriteXml(false);
        w.write(oss);
        StringArray lines;
        StringUtils::split(lines, oss.str(), '\n');
        for (auto& line : lines)
            text(out, 0x05, "* ", line);
        text(out, 0x05, "* \\endcode");
        text(out, 0x04, " */");

        text(out, 0x04, "enum ", _name, "Enum");
        text(out, 0x04, '{');
        text(out, 0x08, _prefix, "_INVALID=", -1, ',');
        for (auto& [key, val] : _enums)
        {
            text(out, 0x08, "/**");
            text(out, 0x09, "* \\brief Definition for the <tt>", _tagType, ".", key, "</tt> value.");
            text(out, 0x09, "*/");
            text(out, 0x08, _prefix, "_", val, ',');
        }
        text(out, 0x04, "};");
        newLine(out, 1);
        text(out, 0x04, "class ", _name);
        text(out, 0x04, '{');
        text(out, 0x04, "public:");
        text(out, 0x08, "static ", _name, "Enum get(const String &);");
        text(out, 0x04, "};");

        text(out, 0x00, "} // namespace MdDox::Doxygen");
    }

    void Simple::writeSource(OutputFileStream& out)
    {
        out << _header;

        text(out, 0x00, "#include \"", _name, ".h\"");
        text(out, 0x00, "#include \"Utils/Exception.h\"");
        text(out, 0x00, "#include \"Utils/Console.h\"");
        newLine(out, 2);

        text(out, 0x00, "namespace MdDox::Doxygen");
        text(out, 0x00, "{");

        text(out, 0x04, _name, "Enum ", _name, "::get(const String &look)");
        text(out, 0x04, '{');
        for (auto& [old, val] : _enums)
        {
            text(out, 0x08, "if (look == \"", old, "\")");
            text(out, 0x0C, "return ", _prefix, "_", val, ';');
        }
        text(out, 0x08, "return ", _prefix, "_INVALID;");
        text(out, 0x04, '}');

        text(out, 0x00, "} // namespace MdDox::Doxygen");
    }

    void Simple::write(const String& output)
    {
        PathUtil obj(output);

        String hdr = StringCombine(obj.rootedDir(), obj.stem(), ".h");
        String src = StringCombine(obj.rootedDir(), obj.stem(), ".cpp");

        OutputFileStream header(hdr);
        if (!header.is_open())
            throw Exception("failed to open the output file: ", hdr);

        writeHeader(header);
        header.close();

        OutputFileStream source(src);
        if (!source.is_open())
            throw Exception("failed to open the output file: ", src);

        writeSource(source);
        source.close();
    }

    void Simple::addEnumValue(const String& searchTerm, const String& value)
    {
        if (_enums.find(searchTerm) == _enums.end())
            _enums[searchTerm] = value;
    }
}  // namespace MdDox::GenApi
