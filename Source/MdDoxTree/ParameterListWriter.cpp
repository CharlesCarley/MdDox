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
#include "MdDoxTree/ParameterListWriter.h"
#include "DocumentWriter.h"
#include "Doxygen/ParamListItemQuery.h"
#include "Doxygen/ParamNameListQuery.h"
#include "Doxygen/ParamNameQuery.h"
#include "MdDoxTree/DescriptionWriter.h"
#include "MdDoxTree/WriteUtils.h"

namespace MdDox
{
    class NameListVisitor final : public Doxygen::Visitors::ParamNameListQueryVisitor
    {
    private:
        DocumentWriter*    _writer;
        OStream*           _stream;
        OutputStringStream _out;

        void visitedParameterName(const Doxygen::ParamNameQuery& query) override
        {
            _writer->italicText(_out, query.text());
            _writer->inlineText(_out, ": ");
        }

    public:
        NameListVisitor(DocumentWriter* writer, OStream* out) :
            _writer(writer),
            _stream(out)
        {
        }

        bool write(const Doxygen::ParamNameListQuery& paramList)
        {
            if (paramList.isValid())
            {
                paramList.visit(this);
                return syncStream(_stream, _out);
            }
            return false;
        }
    };

    class ListItemVisitor final : public Doxygen::Visitors::ParamListItemQueryVisitor
    {
    private:
        DocumentWriter*    _writer;
        OStream*           _stream;
        OutputStringStream _out;

        void visitedParameterNameList(const Doxygen::ParamNameListQuery& query) override
        {
            NameListVisitor nl(_writer, &_out);
            nl.write(query);
        }

        void visitedParameterDescription(const Doxygen::DescriptionQuery& query) override
        {
            DescriptionWriter dw(_writer, &_out);
            dw.write(query);
        }

    public:
        ListItemVisitor(DocumentWriter* writer, OStream* out) :
            _writer(writer),
            _stream(out)
        {
        }

        bool write(const Doxygen::ParamListItemQuery& paramList)
        {
            if (paramList.isValid())
            {
                _writer->beginListItem(_out);
                paramList.visit(this);
                _writer->endListItem(_out);
                return syncStream(_stream, _out);
            }
            return false;
        }
    };

    ParameterListWriter::ParameterListWriter(DocumentWriter* writer, OStream* out) :
        _writer(writer),
        _stream(out)
    {
    }

    void ParameterListWriter::visitedParameterItem(const Doxygen::ParamListItemQuery& query)
    {
        ListItemVisitor li(_writer, &_out);
        li.write(query);
    }

    bool ParameterListWriter::write(const Doxygen::ParamListQuery& paramList)
    {
        if (paramList.isValid())
        {
            _writer->lineBreak(_out);
            _writer->beginList(_out);
            paramList.visit(this);
            _writer->endList(_out);
            return syncStream(_stream, _out);
        }
        return false;
    }

}  // namespace MdDox
