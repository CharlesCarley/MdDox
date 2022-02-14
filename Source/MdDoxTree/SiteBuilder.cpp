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
#include "TypeFilter/DoxygenFilter.h"
#include "Utils/Exception.h"
#include "Xml/Parser.h"

namespace MdDox
{
    SiteBuilder::SiteBuilder()
    {
        _singleton = this;
    }

    SiteBuilder::~SiteBuilder()
    {
        _singleton = nullptr;
    }

    void SiteBuilder::dispatchDot() const
    {
        int n = 1;
        for (String& dotSrc : _dotFiles)
        {
            String dia = StringCombine(imageDir, "/", "internal-diagram-", n, ".dot");

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

        IndexPageWriter iq(writer, xmlFileDir.rootedDir());
        iq.exec(query, PathUtil(outputDir));

        dispatchDot();
    }

    void SiteBuilder::loadConfig(const String& cfg)
    {
        InputFileStream ifs(cfg);

        if (!ifs.is_open())
            throw InputException("failed to load the supplied file ", cfg);

        Config config;
        config.load(ifs);
        showDebug = config.getBool("SHOW_DEBUG");

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
        inputDir   = std::filesystem::current_path().string();
        StringUtils::splitRejectEmpty(searchDirs, config.getValue("SEARCH_DIRS"), ',');

        siteUrl = config.getValue("SITE_URL");
        baseUrl = config.getValue("BASE_URL");

        projectRoot  = config.getValue("PROJECT_ROOT");
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
    }

    void SiteBuilder::registerCompound(const String& name, const String& reference) const
    {
        ReferenceMap::iterator it = _ids.find(name);
        if (it == _ids.end())
            _ids.insert(std::make_pair(name, reference));
        else
        {
            Console::writeLine("Ignoring duplicate refId. first registered as ",
                               it->second,
                               " but now seen as ",
                               reference);
        }

        it = _names.find(reference);
        if (it == _names.end())
            _names.insert(std::make_pair(reference, name));
        else
        {
            Console::writeLine("Ignoring duplicate refId. first registered as ",
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
            Console::writeLine("Ignoring duplicate refId. first registered as ",
                               it->first,
                               " but now seen as ",
                               member);
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
        return StringCombine("internal-diagram-", _dotFiles.size(), ".dot.svg");
    }

    SiteBuilder* SiteBuilder::_singleton = nullptr;

    const SiteBuilder& SiteBuilder::get()
    {
        if (!_singleton)
            throw InvalidPointer();
        return *_singleton;
    }

}  // namespace MdDox
