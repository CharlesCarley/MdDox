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
#include "MdDoxTree/GraphWriter.h"
#include "DocumentWriter.h"
#include "Doxygen/ChildNodeQuery.h"
#include "Doxygen/NodeQuery.h"
#include "MdDoxTree/DotWriter.h"
#include "MdDoxTree/SiteBuilder.h"
#include "MdDoxTree/WriteUtils.h"

namespace MdDox
{
    class GraphNode : public Xml::Node
    {
    public:
        GraphNode() :
            Node()
        {
            _autoDelete = false;
        }

        explicit GraphNode(const String& name) :
            Node(name)
        {
            _autoDelete = false;
        }
    };

    GraphWriter::GraphWriter(DocumentWriter* writer, OStream* out) :
        _writer(writer),
        _stream(out)
    {
    }

    GraphWriter::~GraphWriter()
    {
        for (auto& [id, node] : _idMap)
            delete node;
    }

    void GraphWriter::visitedNode(const Doxygen::NodeQuery& query)
    {
        GraphNodeDecl nd;
        nd.id    = query.getId();
        nd.label = LinkUtils::LBR(query.getLabel("undefined"));

        query.foreachChildNode(
            [&nd](const Doxygen::ChildNodeQuery& cnq)
            {
                nd.children.push_back(cnq.getRefId());
            });

        _nodes.insert(std::make_pair(nd.id, nd));
        _idMap.insert(std::make_pair(nd.id, new GraphNode(nd.label)));
    }

    void GraphWriter::writeLinks()
    {
        Xml::NodeArray na;

        for (auto& [id, node] : _nodes)
        {
            Xml::NodeMap::const_iterator it = _idMap.find(id);
            if (it != _idMap.end())
            {
                Xml::Node* nd = it->second;

                if (node.children.empty())
                    na.push_back(nd);
                else
                {
                    for (const String& cid : node.children)
                    {
                        Xml::NodeMap::const_iterator cit = _idMap.find(cid);
                        if (cit != _idMap.end())
                            cit->second->addChild(nd);
                    }
                }
            }
        }

        OutputStringStream out;
        const DotWriter    dw(&na);
        dw.write(out);

        const String file = SiteBuilder::get().registerDot(out.str());

        _writer->image(_out, file);
        _writer->lineBreak(_out);
    }

    bool GraphWriter::write(const Doxygen::GraphQuery& query)
    {
        if (query.isValid())
        {
            query.visit(this);

            writeLinks();

            return syncStream(_stream, _out);
        }
        return false;
    }

}  // namespace MdDox
