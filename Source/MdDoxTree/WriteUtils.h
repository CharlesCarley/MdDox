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
#include "Doxygen/CompoundDefQuery.h"
#include "MdDoxTree/IconSet.h"
#include "MdDoxTree/Reference.h"
#include "Utils/String.h"

namespace MdDox
{
    class Page;
    class DocumentWriter;

    /**
	 * \brief Defines a navigation bar from a list of names that are
	 * separated with the binary resolution operator.
	 */
    extern void writeNamespaceTitleBar(OStream&                     out,
                                       DocumentWriter*              writer,
                                       const Reference&             item,
                                       [[deprecated]] const String& split);

    /**
	 * \brief Defines a navigation bar from a list of names that are
	 * separated with a path separator.
	 */
    extern void writeDirectoryTitleBar(OStream&                     out,
                                       DocumentWriter*              writer,
                                       const Reference&             item,
                                       [[deprecated]] const String& split);

    extern void writeFilePath(OStream&        out,
                              DocumentWriter* writer,
                              const String&   path);

    extern void writeReferenceIconLink(OStream& out, DocumentWriter* writer, const Reference& ref, IconId id);
    extern void writeExternalIconLink(OStream& out, DocumentWriter* writer, const Reference& ref, IconId id);
    extern void writeReferenceIconLinkHeading(OStream& out, DocumentWriter* writer, const Reference& ref, const IconId id);
    extern void writeReferenceIconStub(OStream& out, DocumentWriter* writer, const Reference& ref, const IconId id);


    extern bool syncStream(OStream* stream, OutputStringStream &out);

}  // namespace MdDox
