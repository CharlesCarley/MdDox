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
#include "MdDoxTree/SectionDefListingWriter.h"
#include "DocumentWriter.h"
#include "MdDoxTree/MemberDefListingWriter.h"
#include "MdDoxTree/WriteUtils.h"
#include "TypeFilter/DoxygenFilter.h"

namespace MdDox
{
    SectionDefListingWriter::SectionDefListingWriter(DocumentWriter* writer, OStream* out) :
        _writer(writer),
        _stream(out),
        _depth(2)
    {
    }

    void SectionDefListingWriter::setDepth(int depth)
    {
        _depth = depth;
    }

    void SectionDefListingWriter::visitedMemberDef(const Doxygen::MemberDefQuery& query)
    {
        MemberDefListingWriter writer(_writer, &_out);
        writer.write(query);
    }

    void SectionDefListingWriter::visitedDescription(const Doxygen::DescriptionQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void SectionDefListingWriter::visitedHeader(const String& text)
    {
        WRITE_STUB(_writer, _out);
    }

    void SectionDefListingWriter::writeHeading(Doxygen::DoxSectionKindEnum kind)
    {
        switch (kind)
        {
        case Doxygen::DSK_DEFINE:
            _writer->addSection(_out, "Definitions", _depth);
            break;
        case Doxygen::DSK_FUNC:
            _writer->addSection(_out, "Functions", _depth);
            break;
        case Doxygen::DSK_ENUM:
            _writer->addSection(_out, "Enums", _depth);
            break;
        case Doxygen::DSK_VAR:
            _writer->addSection(_out, "Variables", _depth);
            break;
        case Doxygen::DSK_PUBLIC_STATIC_FUNC:
            _writer->addSection(_out, "Public Static Methods", _depth);
            break;
        case Doxygen::DSK_PRIVATE_STATIC_FUNC:
            _writer->addSection(_out, "Private Static Methods", _depth);
            break;
        case Doxygen::DSK_PROTECTED_STATIC_FUNC:
            _writer->addSection(_out, "Protected Static Methods", _depth);
            break;
        case Doxygen::DSK_PUBLIC_FUNC:
            _writer->addSection(_out, "Public Methods", _depth);
            break;
        case Doxygen::DSK_PRIVATE_FUNC:
            _writer->addSection(_out, "Private Methods", _depth);
            break;
        case Doxygen::DSK_PRIVATE_ATTRIB:
            _writer->addSection(_out, "Private Members", _depth);
            break;
        case Doxygen::DSK_TYPEDEF:
            _writer->addSection(_out, "Typedefs", _depth);
            break;
        case Doxygen::DSK_PUBLIC_ATTRIB:
            _writer->addSection(_out, "Public Members", _depth);
            break;
        case Doxygen::DSK_PUBLIC_TYPE:
            _writer->addSection(_out, "Public Typedefs", _depth);
            break;
        case Doxygen::DSK_PROTECTED_FUNC:
            _writer->addSection(_out, "Protected Methods", _depth);
            break;
        case Doxygen::DSK_PROTECTED_STATIC_ATTRIB:
            _writer->addSection(_out, "Protected Static Members", _depth);
            break;
        case Doxygen::DSK_PROTECTED_ATTRIB:
            _writer->addSection(_out, "Protected Members", _depth);
            break;
        case Doxygen::DSK_PUBLIC_STATIC_ATTRIB:
            _writer->addSection(_out, "Public Static Members", _depth);
            break;
        case Doxygen::DSK_PRIVATE_STATIC_ATTRIB:
            _writer->addSection(_out, "Private Static Members", _depth);
            break;
        case Doxygen::DSK_PRIVATE_TYPE:
            _writer->addSection(_out, "Private Typedefs", _depth);
            break;
        case Doxygen::DSK_PROTECTED_TYPE:
            _writer->addSection(_out, "Protected Typedefs", _depth);
            break;
        case Doxygen::DSK_FRIEND:
            _writer->addSection(_out, "Friends", _depth);
            break;
        case Doxygen::DSK_USER_DEFINED:
            _writer->addSection(_out, "DSK_USER_DEFINED", _depth);
            break;
        case Doxygen::DSK_PACKAGE_STATIC_FUNC:
            _writer->addSection(_out, "DSK_PACKAGE_STATIC_FUNC", _depth);
            break;
        case Doxygen::DSK_PUBLIC_SLOT:
            _writer->addSection(_out, "DSK_PUBLIC_SLOT", _depth);
            break;
        case Doxygen::DSK_PACKAGE_STATIC_ATTRIB:
            _writer->addSection(_out, "DSK_PACKAGE_STATIC_ATTRIB", _depth);
            break;
        case Doxygen::DSK_SIGNAL:
            _writer->addSection(_out, "DSK_SIGNAL", _depth);
            break;
        case Doxygen::DSK_PROPERTY:
            _writer->addSection(_out, "DSK_PROPERTY", _depth);
            break;
        case Doxygen::DSK_DCOP_FUNC:
            _writer->addSection(_out, "DSK_DCOP_FUNC", _depth);
            break;
        case Doxygen::DSK_PRIVATE_SLOT:
            _writer->addSection(_out, "DSK_PRIVATE_SLOT", _depth);
            break;
        case Doxygen::DSK_EVENT:
            _writer->addSection(_out, "DSK_EVENT", _depth);
            break;
        case Doxygen::DSK_PACKAGE_FUNC:
            _writer->addSection(_out, "DSK_PACKAGE_FUNC", _depth);
            break;
        case Doxygen::DSK_RELATED:
            _writer->addSection(_out, "DSK_RELATED", _depth);
            break;
        case Doxygen::DSK_PROTECTED_SLOT:
            _writer->addSection(_out, "DSK_PROTECTED_SLOT", _depth);
            break;
        case Doxygen::DSK_PACKAGE_TYPE:
            _writer->addSection(_out, "DSK_PACKAGE_TYPE", _depth);
            break;
        case Doxygen::DSK_PACKAGE_ATTRIB:
            _writer->addSection(_out, "DSK_PACKAGE_ATTRIB", _depth);
            break;
        case Doxygen::DSK_PROTOTYPE:
            _writer->addSection(_out, "DSK_PROTOTYPE", _depth);
            break;
        case Doxygen::DSK_INVALID:
            _writer->addSection(_out, "DSK_INVALID", _depth);
            break;
        default:
            break;
        }
    }

    bool SectionDefListingWriter::write(const Doxygen::SectionDefQuery& sec)
    {
        if (sec.isValid())
        {
            writeHeading((Doxygen::DoxSectionKindEnum)sec.getKind());

            int i = 0;

            Doxygen::SortMap map;
            map[Doxygen::DoxHeader]      = i++;
            map[Doxygen::DoxDescription] = i++;
            map[Doxygen::DoxMemberDef]   = i;
            sec.sort(map);

            sec.visit(this);

            return syncStream(_stream, _out);
        }
        return false;
    }

}  // namespace MdDox
