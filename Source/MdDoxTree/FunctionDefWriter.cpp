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
#include "FunctionDefWriter.h"
#include "DescriptionWriter.h"
#include "DocumentWriter.h"
#include "Doxygen/EnumValueQuery.h"
#include "Doxygen/LinkedTextQuery.h"
#include "Doxygen/ParamQuery.h"
#include "Doxygen/ReferenceQuery.h"
#include "Link.h"
#include "LinkedTextWriter.h"
#include "LocationWriter.h"
#include "ParameterWriter.h"
#include "TypeFilter/DoxygenFilter.h"
#include "WriteUtils.h"

namespace MdDox
{
    FunctionDefWriter::FunctionDefWriter(DocumentWriter* writer, OStream* out) :
        _writer(writer),
        _stream(out),
        _firstParam(true),
        _firstRef(true),
        _hasDetail(false)
    {
    }

    void FunctionDefWriter::visitedReImplements(const Doxygen::ReimplementQuery& query)
    {
        //_writer->boldText(_out, "FunctionDefWriter.visitedReImplements");
        //_writer->lineBreak(_out);
    }

    void FunctionDefWriter::visitedReImplementedBy(const Doxygen::ReimplementQuery& query)
    {
        //_writer->boldText(_out, "FunctionDefWriter.visitedReImplementedBy");
        //_writer->lineBreak(_out);
    }

    void FunctionDefWriter::visitedEnumValue(const Doxygen::EnumValueQuery& query)
    {
        _writer->inlineText(_out, query.getName());
        _writer->lineBreak(_out);
    }

    void FunctionDefWriter::visitedReferences(const Doxygen::ReferenceQuery& query)
    {
        if (_firstRef)
        {
            _writer->addSection(_out, "References", 4);
            _firstRef = false;
        }

        Reference ref;
        ref.setName(LinkUtils::lastBinaryResolution(query.text()));
        ref.setReference(query.getRefId());

        writeReferenceIconLink(_out, _writer, ref, ICO_CLASS);
    }

    void FunctionDefWriter::visitedReferencedBy(const Doxygen::ReferenceQuery& query)
    {
        //_writer->boldText(_out, "FunctionDefWriter.visitedReferencedBy");
        //_writer->lineBreak(_out);
    }

    void FunctionDefWriter::visitedTemplateParamList(const Doxygen::TemplateParamListQuery& query)
    {
        //_writer->boldText(_out, "FunctionDefWriter.visitedTemplateParamList");
        //_writer->lineBreak(_out);
    }

    void FunctionDefWriter::visitedInitializer(const Doxygen::LinkedTextQuery& query)
    {
        //_writer->boldText(_out, "FunctionDefWriter.visitedInitializer");
        //_writer->lineBreak(_out);
    }

    void FunctionDefWriter::visitedExceptions(const Doxygen::LinkedTextQuery& query)
    {
        //_writer->boldText(_out, "FunctionDefWriter.visitedExceptions");
        //_writer->lineBreak(_out);
    }

    void FunctionDefWriter::visitedBriefDescription(const Doxygen::DescriptionQuery& query)
    {
        _writer->italicText(_out, ")");

        if (!query.empty())
            openDetail();

        DescriptionWriter dw(_writer, &_out);
        if (dw.write(query))
        {
            _writer->lineBreak(_out);
            _writer->lineBreak(_out);
        }
    }

    void FunctionDefWriter::visitedType(const Doxygen::LinkedTextQuery& query)
    {
        LinkedTextWriter link(_writer, &_out);
        link.write(query);
    }

    void FunctionDefWriter::visitedName(const String& text)
    {
        _writer->boldText(_out, text);
        _writer->italicText(_out, "(");
        _firstParam = true;
    }

    void FunctionDefWriter::visitedParameter(const Doxygen::ParamQuery& query)
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

    void FunctionDefWriter::visitedDetailedDescription(const Doxygen::DescriptionQuery& query)
    {
        if (!_hasDetail && !query.empty())
            openDetail();

        DescriptionWriter dw(_writer, &_out);
        if (dw.write(query))
            _writer->lineBreak(_out);
    }

    void FunctionDefWriter::visitedLocation(const Doxygen::LocationQuery& query)
    {
        LocationWriter lw(_writer, &_out);
        lw.write(query);
    }

    void FunctionDefWriter::visitedWrite(const String& text)
    {
        _writer->boldText(_out, "FunctionDefWriter.visitedWrite");
        _writer->lineBreak(_out);
    }

    void FunctionDefWriter::openDetail()
    {
        if (!_hasDetail)
        {
            _hasDetail = true;
            _writer->addSection(_out, "Details", 4);
        }
    }

    bool FunctionDefWriter::write(const Doxygen::MemberDefQuery& mdq)
    {
        if (mdq.isValid())
        {
            int              i = 0;
            Doxygen::SortMap map;
            map[Doxygen::DoxEnumValue]           = i++;
            map[Doxygen::DoxTemplateParamList]   = i++;
            map[Doxygen::DoxType]                = i++;
            map[Doxygen::DoxName]                = i++;
            map[Doxygen::DoxParam]               = i++;
            map[Doxygen::DoxBriefDescription]    = i++;
            map[Doxygen::DoxDetailedDescription] = i++;
            map[Doxygen::DoxDefinition]          = i++;
            map[Doxygen::DoxReferences]          = i++;
            map[Doxygen::DoxLocation]            = i;
            mdq.sort(map);

            _writer->addSection(_out, mdq.getName(), 2);

            mdq.visit(this);

            return syncStream(_stream, _out);
        }
        return false;
    }

}  // namespace MdDox
