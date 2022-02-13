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
#include "Doxygen/DoxygenIndexQuery.h"
#include "MdDoxTree/IconSet.h"
#include "MdDoxTree/Reference.h"
#include "Utils/Path.h"

namespace MdDox
{
    class Reference;
    class DocumentWriter;
    class IndexPageFilter;

    class IndexPageWriter final : public Doxygen::Visitors::DoxygenIndexQueryVisitor
    {
    private:
        OutputFileStream* _stream;
        DocumentWriter*   _writer;
        String            _indexDir;
        PathUtil          _outDir;

        void dispatchFilter(const IndexPageFilter& filter) const;

        String makeFilename(const Reference& ref) const;

        void writeReferenceList(OStream& out, IconId icon, const String& heading, const ReferenceList& list) const;
        void writeReferenceListDirectory(OStream& out, IconId icon, const String& heading, const ReferenceList& list) const;

    public:
        IndexPageWriter(DocumentWriter* writer, String indexDir);

        void exec(const Doxygen::DoxygenIndexQuery& query, const PathUtil& outDir);
    };

}  // namespace MdDox::Reflect
