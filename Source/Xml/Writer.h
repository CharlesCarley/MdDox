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
#include "Utils/String.h"

namespace MdDox::Xml
{
    class Node;

    /**
     * \brief Is a utility class that is used to write the xml
     * text structure to the supplied stream from the
     * supplied root node.
     */
    class Writer
    {
    private:
        Node*              _root;
        OutputStringStream _out;
        int                _indent{0};
        bool               _writeXml{true};

        void openTag(Node* tag);

        void closeTag(Node* tag);

        void inlineTag(Node* tag);

        void writeAttributes(Node* tag);

        void writeTag(Node* tag);

    public:
        /**
         * \brief Constructs a Writer with a node.
         * \param root The node to print.
         * 
         * When write is invoked, the text based structure will be logged
         * to the supplied stream.  
         */
        explicit Writer(Node* root);

        ~Writer() = default;

        /**
         * \brief Sets the indentation level per depth.  
         * \param indent The number of spaces per level.
         */
        void setIndent(int indent);

        /**
         * \brief Enables the xml header.
         * \param value If this is true the xml header
         * will be written to the stream
         *
         * \code{.xml}
         * <?xml version="1.0"?>
         * \endcode
         */
        void setWriteXml(bool value);

        /**
         * \brief Writes the contents of the node to
         * the supplied output stream.
         * \param output The output stream to use.
         */
        void write(OStream& output);
    };

}  // namespace MdDox::Xml
