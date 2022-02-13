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
#include "DotWriter.h"
#include <iomanip>
#include "Utils/TextStreamWriter.h"
#include "Xml/Node.h"

namespace MdDox
{
    using namespace Xml;
    using namespace WriteUtils;

    class DotWriterImpl
    {
    private:
        Node*              _root;
        NodeArray*         _list;
        OStream*           _stream;
        OutputStringStream _out;

        void writeNodeDecl(Node* nd)
        {
            String name;
            StringUtils::scramble(name, (size_t)nd, false);
            write(_out, 0x02, name, '[');
            write(_out, 0x04, "shape    = none");
            write(_out, 0x04, "label    = \"", nd->name(), "\"");
            write(_out, 0x04, "margin   = \"0.01\"");
            write(_out, 0x04, "fontname = \"${font-family}\"");
            write(_out, 0x04, "fontsize = \"${font-size}\"");
            write(_out, 0x04, "fontcolor= \"${text}\"");
            write(_out, 0x02, ']');
        }

        void lineTo(Node* a, const Node* b)
        {
            String na, nb;
            StringUtils::scramble(na, (size_t)a, false);
            StringUtils::scramble(nb, (size_t)b, false);
            write(_out, 0x02, na, "->", nb);
        }

    public:
        DotWriterImpl(Node* root, NodeArray* list, OStream* stream) :
            _root(root),
            _list(list),
            _stream(stream)
        {
        }

        void writeHeader()
        {
            write(_out, 0x00, "digraph {");
            write(_out, 0x02, "rankdir = \"LR\"");
            write(_out, 0x02, "bgcolor = none;");
            write(_out, 0x02, "layout  = dot;");
            write(_out, 0x02, "edge [");
            write(_out, 0x04, "arrowsize = \"${arrow-size}\"");
            write(_out, 0x04, "color     = \"${grey-table-edge}\"");
            write(_out, 0x02, "]");
        }

        void writeFooter()
        {
            write(_out, 0x00, '}');
        }

        void writeNode(Node* node)
        {
            writeNodeDecl(node);
            for (auto* child : node->children())
                writeNode(child);
            for (auto* child : node->children())
                lineTo(node, child);
        }

        void writeContent()
        {
            writeHeader();
            if (_root)
                writeNode(_root);
            else if (_list)
            {
                for (Node* node : *_list)
                    writeNode(node);
            }
            writeFooter();

            const String dest = _out.str();
            _stream->write(dest.c_str(), dest.size());
        }
    };

    DotWriter::DotWriter(Node* root) :
        _root(root),
        _list(nullptr)
    {
    }

    DotWriter::DotWriter(Xml::NodeArray* list) :
        _root(nullptr),
        _list(list)
    {
    }

    void DotWriter::write(OStream& out) const
    {
        DotWriterImpl impl(_root, _list, &out);
        impl.writeContent();
    }
}  // namespace MdDox
