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
#include "Doxygen/DoxCompoundKind.h"
#include "Doxygen/DoxMemberKind.h"
#include "ReferenceIdentifiers.h"
#include "Utils/Config.h"
#include "Utils/String.h"

namespace MdDox
{
    class ReferenceTable;
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
     * properties to control the final output.
     * \br
     *
     * The following diagram outlines its main routine.
     * \br
     *
     * \dot
     * digraph {
     *
     *   layout  = dot;
     *   bgcolor = "${graph-bg}";
     *   rankdir = "LR";
     *   labelloc= "t"
     *   label   = "Build Routine"
     *   fontname= "${font-family}"
     *   fontsize= "${font-size}"
     *   margin  = "${node-primary-margin}"
     *
     *   node [
     *     shape     = none
     *     style     = none
     *     fontname  = "${font-family}"
     *     fontsize  = "${font-size}"
     *     fontcolor = "${node-primary-text}"
     *     color     = "${node-primary-border}"
     *     fillcolor = "${node-primary-exe}"
     *     margin    = "0.01"
     *   ]
     *   edge [
     *     arrowsize = "${arrow-size}"
     *     fontname  = "${font-family}"
     *     fontsize  = "${font-size}"
     *     color     = "${node-primary-edge}"
     *     fontcolor = "${node-primary-text}"
     *   ]
     *   SiteBuilder->Config[dir=back]
     *
     *   {rank=same Config SiteBuilder}
     *
     *   SiteBuilder->buildFromXml
     *   buildFromXml->Build
     *   buildFromXml->WriteIndex
     *   buildFromXml->Dispatch
     *   buildFromXml->ConvertGraphs
     *   Dispatch->BuildItem
     *   Dispatch->WriteItem
     * }
     * \enddot
     * \br
     *
     * It needs to have all configuration parameters set before running. From
     * there, it needs to load %Doxygen's index file. With the input, it writes a
     * primary index, class index, page index, namespace index, and directory index.
     *
     * The application will then branch off and iterate over all individual elements
     * which will invoke writers for each element.
     * 
     */
    class SiteBuilder
    {
    private:
        static SiteBuilder*     _singleton;
        mutable ReferenceMap    _ids;
        mutable ReferenceMap    _names;
        mutable ReferenceMap    _members;
        mutable StringArray     _dotFiles;
        mutable Config          _dot;
        mutable ReferenceTable* _referenceMap;

        /**
         * \brief Writes all dot files to disk.
         */
        void dispatchDot() const;

        friend class ReferenceTable;

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
         * \brief Adds a new compound reference to the ReferenceTable
         */
        void insertCompound(const Doxygen::DoxCompoundKindEnum& kind,
                            const String&                       name,
                            const String&                       id) const;

        /**
         * \brief Adds a new member reference to the ReferenceTable
         */
        void insertMember(const Doxygen::DoxMemberKindEnum& kind,
                          const String&                     name,
                          const String&                     id) const;

        /**
         * \brief Extracts a Reference object out of the ReferenceTable
         */
        Reference getRefId(const String& id) const;

        CompoundReference* getCompoundRef(const String& id) const;

        MemberReference* getMemberRef(const String& id) const;

        Reference findNamespace(const String& name) const;

        Reference findDirectory(const String& name) const;

        String getCompoundName(const String& id) const;

        /**
         * \brief Registers a dot source. 
         * \return The file name the source will be written as.
         */
        String registerDot(const String& text) const;

        /**
         * \brief Provides singleton access to the site builder.
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
         * \brief Enables or disables links to the XML input source
         * file for the current page. 
         *
    	 * Maps to the config option \c SHOW_DEBUG
         */
        bool showDebug{false};

        /**
         * \brief Enables or disables location links to the source
         *
    	 * Maps to the config option \c HIDE_LOCATION
         */
        bool hideLocation{false};

        /**
         * \brief Defines the backend writer 
         *
    	 * Maps to the config option \c BACKEND_WRITER
    	 * \n 
    	 * Should be either \c HTML or \c MD
    	 * the default value is BackendMarkdown
         */
        BackendWriter backendType{BackendMarkdown};

        int pageIndex[4]{
            Doxygen::DCK_PAGE,
            Doxygen::DCK_DIR,
            Doxygen::DCK_NAMESPACE,
            Doxygen::DCK_CLASS,
        };

        /**
         * \brief Allows the page brief print to be switched on or off. 
         */
        bool pagesShowBrief{false};
    };

}  // namespace MdDox
