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
#include "Xml/Node.h"

namespace MdDox::GenApi
{
    class Writer
    {
    public:
        Writer() = default;
        virtual ~Writer() = default;


        static void indent(OStream& out, int n);

        static void newLine(OStream& out, int n);

        static void next(OStream& out, int n);

        template <typename... Args>
        void text(OStream& out, int n, Args&&... args);
    };

    template <typename... Args>
    void Writer::text(OStream& out, const int n, Args&&... args)
    {
        newLine(out, 1);
        indent(out, n);
        OutputStringStream oss;
        ((oss << std::forward<Args>(args)), ...);
        out << oss.str();
    }

    inline void Writer::indent(OStream& out, int n)
    {
        while (n-- > 0)
            out << ' ';
    }

    inline void Writer::newLine(OStream& out, int n)
    {
        while (n-- > 0)
            out << std::endl;
    }

    inline void Writer::next(OStream& out, int n)
    {
        newLine(out, 1);
        indent(out, n);
    }
}  // namespace MdDox::DoxApi
