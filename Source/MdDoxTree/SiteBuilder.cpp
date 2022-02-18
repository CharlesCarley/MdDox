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
#include "SiteBuilder.h"
#include "Config.h"
#include "DocumentWriter.h"
#include "Doxygen/DoxygenIndexQuery.h"
#include "IndexPageWriter.h"
#include "ReferenceMaps.h"
#include "TypeFilter/DoxygenFilter.h"
#include "Utils/Exception.h"
#include "Xml/Parser.h"

namespace MdDox
{
    SiteBuilder::SiteBuilder()
    {
        _singleton    = this;
        _referenceMap = new ReferenceTable();
    }

    SiteBuilder::~SiteBuilder()
    {
        _singleton = nullptr;
        delete _referenceMap;
    }

    void SiteBuilder::dispatchDot() const
    {
        int n = 1;
        for (String& dotSrc : _dotFiles)
        {
            String dia = StringCombine(imageDir, "/dot/", "internal-diagram-", n, ".dot");

            OutputFileStream ofs(dia);
            if (ofs.is_open())
                ofs << dotSrc;
            ++n;
        }
    }

    void SiteBuilder::buildFromXml(DocumentWriter* writer, const String& fileName) const
    {
        if (fileName.empty())
            throw Exception("empty file passed to SiteBuilder::buildFromXml");

        const Path path(fileName);
        if (!exists(path))
        {
            throw Exception("the supplied file to SiteBuilder::buildFromXml(",
                            fileName,
                            ") was not found on disk");
        }

        Xml::Parser index;
        index.applyFilter(Doxygen::getFilter(), Doxygen::getFilterSize());
        index.parse(fileName);

        const Doxygen::DoxygenIndexQuery query(index.root()->firstChildOf("doxygenindex"));

        PathUtil xmlFileDir(PathUtil(fileName).parentDir(1));
        xmlFileDir.appendDirectory("xml");

        IndexPageWriter indexPageWriter(writer, xmlFileDir.rootedDir());
        indexPageWriter.exec(query, PathUtil(outputDir));

        dispatchDot();
    }

    void makeInternalPages(ReferenceTable* table, Config* cfg)
    {
	    const Doxygen::DoxCompoundKindEnum kind = Doxygen::DoxCompoundKindEnum::DCK_PAGE;

        const String projectTitle = cfg->getValue("PROJECT_TITLE");
        const String idx          = "Index";

        String idxPage = projectTitle;
        if (projectTitle.empty())
            idxPage = "Main";

        // pre map these
        table->insertCompound(kind, idx, "index");
        table->insertCompound(kind, idxPage, "indexpage");
        table->insertCompound(kind, "namespaces", "namespace_index");
        table->insertCompound(kind, "Classes", "class_index");
        table->insertCompound(kind, "Directories", "directory_index");
        table->insertCompound(kind, "Pages", "page_index");
    }

    void SiteBuilder::loadConfig(const String& configFile)
    {
        InputFileStream ifs(configFile);

        if (!ifs.is_open())
            throw InputException("failed to load the supplied file ", configFile);

        Config config;
        config.load(ifs);
        showDebug    = config.getBool("SHOW_DEBUG");
        hideLocation = config.getBool("HIDE_LOCATION");

        String value = config.getValue("BACKEND_WRITER");
        if (value == "HTML")
            backendType = BackendHtml;
        else
            backendType = BackendMarkdown;

        outputFileExt = config.getValue("OUTPUT_FILE_EXT");
        if (outputFileExt != ".md" && outputFileExt != ".html")
        {
            outputDir     = "markdown";
            outputFileExt = ".md";
        }
        else
            outputDir = config.getValue("OUTPUT_DIR");
        outputDir = FileSystem::absolute(outputDir).string();

        styleSheet = config.getValue("STYLESHEET");
        imageDir   = config.getValue("IMAGE_DIR");
        inputDir   = FileSystem::currentPath();
        StringUtils::splitRejectEmpty(searchDirs, config.getValue("SEARCH_DIRS"), ',');

        siteUrl = config.getValue("SITE_URL");

        // Allow this to be overridden if it is present.
        fileUrl = config.getValue("FILE_URL");
        if (fileUrl.empty())
            StringCombine(fileUrl, siteUrl, "/blob/master/");

        projectTitle = config.getValue("PROJECT_TITLE");
        projectBrief = config.getValue("PROJECT_BRIEF");

        String dotCfg = config.getValue("DOT_CONFIG");
        if (!dotCfg.empty())
        {
            InputFileStream dotStream(dotCfg);
            if (!dotStream.is_open())
                throw InputException("failed to load the supplied file ", dotCfg);

            _dot.load(dotStream);
        }

    	makeInternalPages(_referenceMap, &config);
    }

    void SiteBuilder::insertCompound(const Doxygen::DoxCompoundKindEnum& kind,
                                     const String&                       name,
                                     const String&                       id) const
    {
        if (_referenceMap)
            _referenceMap->insertCompound(kind, name, id);
    }

    CompoundReference* SiteBuilder::getCompoundRef(const String& id) const
    {
        if (_referenceMap)
            return _referenceMap->getCompoundRef(id);
        return nullptr;
    }

    String SiteBuilder::getCompoundName(const String& id) const
    {
        if (_referenceMap)
        {
            CompoundReference* ref = _referenceMap->getCompoundRef(id);
            if (ref)
                return ref->getName();
        }
        return "";
    }

    void SiteBuilder::insertMember(const Doxygen::DoxMemberKindEnum& kind,
                                   const String&                     name,
                                   const String&                     id) const
    {
        if (_referenceMap)
            _referenceMap->insertMember(kind, name, id);
    }

    MemberReference* SiteBuilder::getMemberRef(const String& id) const
    {
        if (_referenceMap)
            return _referenceMap->getMemberRef(id);
        return nullptr;
    }

    void SiteBuilder::registerCompound(const String& name, const String& reference) const
    {
        ReferenceMap::iterator it = _ids.find(name);
        if (it == _ids.end())
            _ids.insert(std::make_pair(name, reference));
        else
        {
            Console::writeLine("Ignoring duplicate refId. First registered as ",
                               it->second,
                               " but now seen as ",
                               reference);
        }

        it = _names.find(reference);
        if (it == _names.end())
            _names.insert(std::make_pair(reference, name));
        else
        {
            Console::writeLine("Ignoring duplicate name. first registered as ",
                               it->second,
                               " but now seen as ",
                               reference);
        }
    }

    void SiteBuilder::registerMember(const String& member, const String& compound) const
    {
        const ReferenceMap::iterator it = _members.find(member);
        if (it == _members.end())
            _members.insert(std::make_pair(member, compound));
        else
        {
            if (it->second != compound)
                Console::writeLine("Member.refId: ", it->first, " with varying data");
            else
                Console::writeLine("Ignoring duplicate member.refId: ", it->first);
        }
    }

    const String& SiteBuilder::findReference(const String& name, const String& defaultValue) const
    {
        const ReferenceMap::iterator it = _ids.find(name);
        if (it != _ids.end())
            return it->second;
        return defaultValue;
    }

    const String& SiteBuilder::findName(const String& name, const String& defaultValue) const
    {
        const ReferenceMap::iterator it = _names.find(name);
        if (it != _names.end())
            return it->second;
        return defaultValue;
    }

    const String& SiteBuilder::findMember(const String& name, const String& defaultValue) const
    {
        const ReferenceMap::iterator it = _members.find(name);
        if (it != _members.end())
            return it->second;
        return defaultValue;
    }

    String SiteBuilder::registerDot(const String& text) const
    {
        String source = text;

        const StringMap& attributes = _dot.attributes();
        for (const auto& [key, value] : attributes)
            StringUtils::replaceAll(source, source, StringCombine("${", key, "}"), value);

        _dotFiles.push_back(source);
        return StringCombine("dot/internal-diagram-", _dotFiles.size(), ".dot.svg");
    }

    SiteBuilder* SiteBuilder::_singleton = nullptr;

    const SiteBuilder& SiteBuilder::get()
    {
        if (!_singleton)
            throw InvalidPointer();
        return *_singleton;
    }

}  // namespace MdDox
