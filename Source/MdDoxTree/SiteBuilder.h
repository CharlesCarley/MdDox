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
#include "Utils/String.h"

namespace MdDox
{
    class Page;
    class DocumentWriter;

	enum BackendWriter
	{
		/**
		 * \brief Use MdDox::HtmlDocumentWriter to output documents.
		 */
		BackendHtml,
        /**
		 * \brief Use MdDox::MarkdownDocumentWriter to output documents.
		 */
        BackendMarkdown,
	};

    /**
     * \brief Container that is used to map a reference id attribute to a name.
     */
    using ReferenceMap = std::unordered_map<String, String>;

    /**
     * \brief The site builder runs the main loop, and provides static
     * access to properties during the build stage. 
     *
     * <b>The site builder</b> handles setting up and running the main loop.
     * It stores references to other pages and general configuration
     * properties.
     * <br/>
     * <br/>
     * The following diagram outlines its main routine.
     * 
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
     *      SiteBuilder->Config[dir=back];
     *
     *      {rank=same Config SiteBuilder}
     *
     *      SiteBuilder->buildFromXml
     *      buildFromXml->Build
     *      buildFromXml->WriteIndex
     *      buildFromXml->Dispatch
     *      buildFromXml->ConvertGraphs
     *      Dispatch->BuildItem
     *      Dispatch->WriteItem
     * }
     * \enddot
     * <br/>
     *
     * First, it should have all necessary configuration parameters before running.
     * From there, it needs to load an index file. Then based on the contents of the index,
     * It should write the primary index. After that, It should dispatch all sub-page writers.
     * Page writers can register graph files during their dispatch routine. After all pages have
     * completed any registered graph files are processed.
     *
     * 
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
    	

        /**
         * \brief Writes all dot files to disk.
         */
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

    	/**
    	 * \brief Attempts to load the supplied config file.
    	 *
    	 * \param configFile The path to the file's location.
    	 *
    	 * Uses MdDox::Config to collect configuration options.
    	 */
    	void loadConfig(const String& configFile);

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
         *
         * Maps to the config option \c PROJECT_TITLE
         */
        String projectTitle;

        /**
         * \brief Defines a brief description for the current project.
         *
         * Maps to the config option \c PROJECT_BRIEF
         */
        String projectBrief;
        
        /**
         * \brief Defines the file extension for pages.
         *
         * Maps to the config option \c OUTPUT_FILE_EXT
         */
        String outputFileExt;

    	/**
         * \brief Defines the image lookup directory.
         *
         * Maps to the config option \c IMAGE_DIR
         */
        String imageDir;

        /**
         * \brief Defines the input xml directory.
         */
        String inputDir;

        /**
         * \brief Defines the output directory for pages.
         *
         * Maps to the config option \c OUTPUT_DIR
         */
        String outputDir;

        /**
         * \brief Defines the GitHub project URL.
         *
         * Maps to the config option \c SITE_URL
         */
        String siteUrl;

        /**
         * \brief Defined as <tt>${siteUrl}/blob/master/</tt>
         *
         * Used to link local file paths to GitHub URLs 
         * \n
         * Maps to the config option \c FILE_URL
         */
        String fileUrl;

        /**
         * \brief Defines the MdDox::HtmlDocumentWriter style sheet
         * 
         * Maps to the config option \c STYLESHEET
         */
        String styleSheet;

        /**
         * \brief Enables or disables links to the input source
         * file for the current page. 
         *
    	 * Maps to the config option \c SHOW_DEBUG
         */
        bool showDebug{false};

        /**
         * \brief Defines the backend writer 
         *
    	 * Maps to the config option \c BACKEND_WRITER
    	 * \n 
    	 * Should be either \c HTML or \c MD
    	 * the default value is BackendMarkdown
         */
        BackendWriter backendType{BackendMarkdown};

        StringArray searchDirs;

        mutable String indexName;
    };

}  // namespace MdDox
