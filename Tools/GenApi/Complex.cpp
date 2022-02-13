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
#include "Complex.h"
#include <utility>
#include "Utils/Exception.h"
#include "Utils/Path.h"
#include "Utils/String.h"

namespace MdDox::GenApi
{
    Complex::Complex(Xml::Node* node, String name, String type) :
        Group(node, std::move(name), std::move(type))
    {
    }

    Complex::~Complex() = default;

    void Complex::write(const String& output)
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

}  // namespace MdDox::GenApi
