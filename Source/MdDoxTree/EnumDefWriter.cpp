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
#include "EnumDefWriter.h"
#include "DescriptionWriter.h"
#include "DocumentWriter.h"
#include "Doxygen/EnumValueQuery.h"
#include "Doxygen/LinkedTextQuery.h"
#include "Doxygen/ParamQuery.h"
#include "Doxygen/ReferenceQuery.h"
#include "FunctionDefWriter.h"
#include "LinkedTextWriter.h"
#include "LocationWriter.h"
#include "SiteBuilder.h"
#include "TypeFilter/DoxygenFilter.h"
#include "WriteUtils.h"

namespace MdDox
{
    EnumDefWriter::EnumDefWriter(DocumentWriter* writer, OStream* out) :
        _writer(writer),
        _stream(out),
        _list(true)
    {
    }

    void EnumDefWriter::visitedReImplements(const Doxygen::ReimplementQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void EnumDefWriter::visitedReImplementedBy(const Doxygen::ReimplementQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void EnumDefWriter::visitedEnumValue(const Doxygen::EnumValueQuery& query)
    {
        const String                    name   = query.getName();
        const Doxygen::DescriptionQuery brief  = query.getBriefDescription();
        const Doxygen::DescriptionQuery detail = query.getDetailedDescription();

        if (!_list)
        {
            if (!brief.empty() && !detail.empty())
            {
                _writer->addSection(_out, name, 4);
                _writer->lineBreak(_out);

                DescriptionWriter dw(_writer, &_out);
                if (dw.write(query.getBriefDescription()))
                {
                    _writer->lineBreak(_out);
                    _writer->lineBreak(_out);
                }

                dw = DescriptionWriter(_writer, &_out);
                if (dw.write(query.getDetailedDescription()))
                    _writer->lineBreak(_out);
            }
        }
        else
        {
            if (!brief.empty() && !detail.empty())
            {
                Reference ref;
                ref.setName(name);
                ref.setId(name);
                writeReferenceIconLinkHeading(_out, _writer, ref, ICO_ENUM);
            }
            else
            {
                Reference ref;
                ref.setName(name);
                ref.setId(name);

                writeReferenceIconStub(_out, _writer, ref, ICO_ENUM);
            }
        }
    }

    void EnumDefWriter::visitedReferences(const Doxygen::ReferenceQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void EnumDefWriter::visitedReferencedBy(const Doxygen::ReferenceQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void EnumDefWriter::visitedTemplateParamList(const Doxygen::TemplateParamListQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void EnumDefWriter::visitedInitializer(const Doxygen::LinkedTextQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void EnumDefWriter::visitedExceptions(const Doxygen::LinkedTextQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void EnumDefWriter::visitedBriefDescription(const Doxygen::DescriptionQuery& query)
    {
        if (_list)
        {
            DescriptionWriter dw(_writer, &_out);
            if (dw.write(query))
            {
                _writer->lineBreak(_out);
                _writer->lineBreak(_out);
            }
        }
    }

    void EnumDefWriter::visitedType(const Doxygen::LinkedTextQuery& query)
    {
        if (_list)
        {
            LinkedTextWriter link(_writer, &_out);
            link.write(query);
        }
    }

    void EnumDefWriter::visitedName(const String& text)
    {
        if (_list)
        {
            _writer->boldText(_out, text);
            _writer->lineBreak(_out);
        }
    }

    void EnumDefWriter::visitedParameter(const Doxygen::ParamQuery& query)
    {
        WRITE_STUB(_writer, _out);
    }

    void EnumDefWriter::visitedDetailedDescription(const Doxygen::DescriptionQuery& query)
    {
        if (_list)
        {
            DescriptionWriter dw(_writer, &_out);
            if (dw.write(query))
                _writer->lineBreak(_out);
        }
    }

    void EnumDefWriter::visitedLocation(const Doxygen::LocationQuery& query)
    {
        if (!SiteBuilder::get().hideLocation)
        {
            if (!_list)
            {
                LocationWriter obj(_writer, &_out);
                obj.write(query);
            }
        }

    }

    void EnumDefWriter::visitedWrite(const String& text)
    {
        WRITE_STUB(_writer, _out);
    }

    bool EnumDefWriter::write(const Doxygen::MemberDefQuery& mdq)
    {
        if (mdq.isValid())
        {
            int     i = 0;
            Doxygen::SortMap map;
            map[Doxygen::DoxName]                = i++;
            map[Doxygen::DoxType]                = i++;
            map[Doxygen::DoxBriefDescription]    = i++;
            map[Doxygen::DoxEnumValue]           = i++;
            map[Doxygen::DoxDetailedDescription] = i++;
            map[Doxygen::DoxLocation]            = i;
            mdq.sort(map);

            _writer->addSection(_out, mdq.getName(), 2);

            _list = true;
            mdq.visit(this);
            _list = false;
            mdq.visit(this);

            return syncStream(_stream, _out);
        }
        return false;
    }
}  // namespace MdDox
