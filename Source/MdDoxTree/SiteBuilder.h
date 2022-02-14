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
#include <unordered_map>
#include "Config.h"
#include "Utils/Path.h"
#include "Utils/String.h"

namespace MdDox
{
    class Page;
    class DocumentWriter;

    /**
     * \brief Container that is used to map a reference id attribute to a name.
     */
    using ReferenceMap = std::unordered_map<String, String>;

    /**
     * \brief The site builder runs the main loop, and provides static
     * access to properties during the build stage. 
     *
     * <b>The site builder</b> handles setting up and running the main loop.
     * It handles storing mapped references to other pages, and general configuration
     * properties
     * <br/>
     * <br/>
     * The following diagram outlines its main routine.
     * \dot
     * digraph {
     *      bgcolor = none;
     *      rankdir = "LR";
     *      node [
     *          shape     = none
     *          fontname  = "${font-family}"
     *          fontcolor = "${text}"
     *          fontsize  = "${font-size}"
     *      ]
     *      edge [
     *          arrowsize = "${arrow-size}"
     *          color     = "${edge-red}"
     *      ]
     *      SiteBuilder->Config;
     *
     *      {rank=same Config SiteBuilder}
     *
     *      SiteBuilder->buildFromXml
     *      buildFromXml->Build
     *      buildFromXml->WriteIndex
     *      buildFromXml->Dispatch
     *      Dispatch->BuildItem
     *      Dispatch->WriteItem
     *      SiteBuilder->ConvertGraphs
     * }
     * \enddot
     * <br/>
     *
     * First, it should have all necessary configuration parameters before running.
     * From there, it needs to load an index file.  Then based on the contents of the index,
     * It should write the primary index. After that, It should dispatch all sub-page writers.
     * Page writers can register graph files during their dispatch routine. After all pages have completed,
     * any registered graph files get processed.
     */
    class SiteBuilder
    {
    private:
        static SiteBuilder*  _singleton;
        mutable ReferenceMap _ids;
        mutable ReferenceMap _names;
        mutable ReferenceMap _members;
        mutable StringArray  _dotFiles;
        mutable Config       _dot;

        void dispatchDot() const;

    public:
        SiteBuilder();
        ~SiteBuilder();

        /**
         * \brief Builds the supplied file.
         * \param writer The document writer to use.
         * \param fileName the file name to build.
         */
        void buildFromXml(DocumentWriter* writer, const String& fileName) const;


    	void loadConfig(const String& cfg);

        /**
         * \brief Register a name that can be linked to a reference
         * \param name the name to store the reference by
         * \param reference the reference to store 
         */
        void registerCompound(const String& name, const String& reference) const;

        
        /**
         * \brief Enables a member reference to be bound to a compound reference.
         */
        void registerMember(const String& member, const String& compound) const;

    	
        const String& findReference(const String& name, const String& defaultValue = "") const;

        const String& findName(const String& name, const String& defaultValue = "") const;

    	const String& findMember(const String& name, const String& defaultValue = "") const;

        String registerDot(const String& text) const;

        /**
         * \brief Provides singleton access for extracting config parameters.
         */
        static const SiteBuilder& get();

    public:

        /**
         * \brief Defines a title for the current project.
         */
        String projectTitle;

        /**
         * \brief Defines a brief description for the current project.
         */
        String projectBrief;

        /**
         * \brief 
         */
        String projectRoot;

        /**
         * \brief 
         */
        String outputFileExt;
        /**
         * \brief 
         */
        String imageDir;

        /**
         * \brief 
         */
        String inputDir;

        /**
         * \brief 
         */
        String outputDir;

        /**
         * \brief 
         */
        String siteUrl;

        /**
         * \brief 
         */
        String baseUrl;

        /**
         * \brief 
         */
        StringArray searchDirs;

        /**
         * \brief 
         */
        bool showDebug{false};

        String styleSheet;

        mutable String indexName;
    };

}  // namespace MdDox
