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
#include "MemberDefWriter.h"
#include "DescriptionWriter.h"
#include "DocumentWriter.h"
#include "Doxygen/EnumValueQuery.h"
#include "Doxygen/LinkedTextQuery.h"
#include "Doxygen/ParamQuery.h"
#include "Doxygen/ReferenceQuery.h"
#include "EnumDefWriter.h"
#include "FunctionDefWriter.h"
#include "Link.h"
#include "LinkedTextWriter.h"
#include "LocationWriter.h"
#include "ParameterWriter.h"
#include "TypeFilter/DoxygenFilter.h"
#include "WriteUtils.h"

namespace MdDox
{
    MemberDefWriter::MemberDefWriter(DocumentWriter* writer, OStream* out) :
        _writer(writer),
        _stream(out)
    {
    }

    void MemberDefWriter::visitedReImplements(const Doxygen::ReimplementQuery& query)
    {
        _writer->boldText(_out, "MemberDefWriter.visitedReImplements");
        _writer->lineBreak(_out);
    }

    void MemberDefWriter::visitedReImplementedBy(const Doxygen::ReimplementQuery& query)
    {
        _writer->boldText(_out, "MemberDefWriter.visitedReImplementedBy");
        _writer->lineBreak(_out);
    }

    void MemberDefWriter::visitedEnumValue(const Doxygen::EnumValueQuery& query)
    {
        _writer->inlineText(_out, query.getName());
        _writer->lineBreak(_out);
    }

    void MemberDefWriter::visitedReferences(const Doxygen::ReferenceQuery& query)
    {
        Reference ref;
        ref.setName(LinkUtils::lastBinaryResolution(query.text()));
        ref.setReference(query.getCompoundRef());

    	writeReferenceIconLink(_out, _writer, ref, ICO_CLASS);
    }

    void MemberDefWriter::visitedReferencedBy(const Doxygen::ReferenceQuery& query)
    {
        _writer->boldText(_out, "MemberDefWriter.visitedReferencedBy");
        _writer->lineBreak(_out);
    }

    void MemberDefWriter::visitedTemplateParamList(const Doxygen::TemplateParamListQuery& query)
    {
        _writer->boldText(_out, "MemberDefWriter.visitedTemplateParamList");
        _writer->lineBreak(_out);
    }

    void MemberDefWriter::visitedInitializer(const Doxygen::LinkedTextQuery& query)
    {
        // jump to the source instead...

        // _writer->boldText(_out, "MemberDefWriter.visitedInitializer");
        // _writer->lineBreak(_out);
    }

    void MemberDefWriter::visitedExceptions(const Doxygen::LinkedTextQuery& query)
    {
        _writer->boldText(_out, "MemberDefWriter.visitedExceptions");
        _writer->lineBreak(_out);
    }

    void MemberDefWriter::visitedBriefDescription(const Doxygen::DescriptionQuery& query)
    {
        DescriptionWriter dw(_writer, &_out);
        if (dw.write(query))
        {
            _writer->lineBreak(_out);
            _writer->lineBreak(_out);
        }
    }
    void MemberDefWriter::visitedType(const Doxygen::LinkedTextQuery& query)
    {
        LinkedTextWriter link(_writer, &_out);
        link.write(query);
    }

    void MemberDefWriter::visitedName(const String& text)
    {
        _name = text;
        _writer->boldText(_out, text);
        _writer->lineBreak(_out);
    }

    void MemberDefWriter::visitedParameter(const Doxygen::ParamQuery& query)
    {
        if (!query.empty())
        {
            _writer->beginParagraph(_out);

            _writer->embedContent(_out, ICO_H_SPACE_24);

            ParameterWriter obj(_writer, &_out);
            obj.write(query);
            _writer->endParagraph(_out);
        }
    }

    void MemberDefWriter::visitedDetailedDescription(const Doxygen::DescriptionQuery& query)
    {
        DescriptionWriter dw(_writer, &_out);
        if (dw.write(query))
            _writer->lineBreak(_out);
    }

    void MemberDefWriter::visitedLocation(const Doxygen::LocationQuery& query)
    {
        LocationWriter lw(_writer, &_out);
        lw.write(query);
    }

    void MemberDefWriter::visitedWrite(const String& text)
    {
        _writer->boldText(_out, "MemberDefWriter.visitedWrite");
        _writer->lineBreak(_out);
    }

    bool MemberDefWriter::write(const Doxygen::MemberDefQuery& mdq)
    {
        if (mdq.isValid())
        {
            if (mdq.getKind() == Doxygen::DMK_FUNCTION)
            {
                FunctionDefWriter fdw(_writer, _stream);
                return fdw.write(mdq);
            }

            if (mdq.getKind() == Doxygen::DMK_ENUM)
            {
                EnumDefWriter edw(_writer, _stream);
                return edw.write(mdq);
            }

            int              i = 0;
            Doxygen::SortMap map;
            map[Doxygen::DoxEnumValue]           = i++;
            map[Doxygen::DoxType]                = i++;
            map[Doxygen::DoxName]                = i++;
            map[Doxygen::DoxParam]               = i++;
            map[Doxygen::DoxBriefDescription]    = i++;
            map[Doxygen::DoxDetailedDescription] = i++;
            map[Doxygen::DoxDefinition]          = i++;
            map[Doxygen::DoxLocation]            = i;
            mdq.sort(map);

            _writer->addSection(_out, mdq.getName(), 2);

            mdq.visit(this);

            return syncStream(_stream, _out);
        }
        return false;
    }
}  // namespace MdDox
