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
#include "MdDoxTree/HtmlDocumentWriter.h"
#include "MdDoxTree/MarkdownDocumentWriter.h"
#include "MdDoxTree/SiteBuilder.h"
#include "Utils/CommandLine/Parser.h"
#include "Utils/Console.h"
#include "Utils/Exception.h"
#include "Utils/Win32/CrtUtils.h"
#include "Xml/Parser.h"

using namespace std;

namespace MdDox
{
    /**
     * \brief Usage Options
     *
     * \code
     * Usage: MdDox <options> <arg[0] .. arg[n]>
     *
     *      -h, --help    Display this help message
     *      -o, --output  Specify an output directory
     *                      If one is not specified the current directory will be used
     *
     *      -i, --index   Specify the index.xml file to use
     *                      <path>
     *
     *      -t, --type    Specify the generator backend type
     *                      <id>
     *                       md   - Generates a GFM markdown site.
     *                       html - Generates a HTML site.
     * \endcode
     */
    enum Options
    {
        /**
         * \brief Provides the option to specify an output directory.
         * 
         * - <tt>      -o <file-path></tt>
         * - <tt>--output <file-path></tt>
         * <br/>
         * \note if an output path is not specified then the current working directory
         * will be used as the output directory.
         */
        OptOutputDirectory,
        /**
         * \brief Provides the option to specify the index file.
         * 
         * - <tt>     -i [file-path]</tt>
         * - <tt>--input [file-path]</tt>
         * <br/>
         */
        OptIndexFile,
        /**
         * \brief Provides the option to load a config file. 
         * 
         * - <tt>      -c [file]</tt> 
         * - <tt>--config [file]</tt>
         * <br/>
         */
        OptConfigFile,
        OpMax,
    };

    constexpr CommandLine::Switch Switches[OpMax] = {
        {
            OptOutputDirectory,
            'o',
            "output",
            "Specify an output directory\n"
            " <path>\n"
            "  If one is not specified the current directory will be used\n\n",
            true,
            1,
        },
        {
            OptIndexFile,
            'i',
            "index",
            "Specify the index.xml file to use\n"
            " <path>\n\n",
            false,
            1,
        },
        {
            OptConfigFile,
            'c',
            "config",
            "Loads the supplied config file\n",
            false,
            1,
        },
    };

    /**
     * \brief Application is the primary entry point.
     *
     * The application's responsibility is to collect enough
     * information to instantiate a SiteBuilder.
     */
    class Application
    {
    private:
        DocumentWriter* _writer;
        PathUtil        _indexFile;
        PathUtil        _outDir;
        String          _config;

    public:
        Application() :
            _writer(nullptr)
        {
        }

        ~Application()
        {
            delete _writer;
        }

        /**
         * \brief Interprets the supplied command line variables.
         * \return True on success, otherwise, false if the parser fails to parse the arguments.
         * \see MdDox::CommandLine
         */
        bool parse(const int argc, char** argv)
        {
            CommandLine::Parser p;
            if (p.parse(argc, argv, Switches, OpMax) < 0)
                return false;

            _outDir    = PathUtil(FileSystem::absolute(p.string(OptOutputDirectory)).string());
            _indexFile = PathUtil(FileSystem::absolute(p.string(OptIndexFile)).string());
            _config    = PathUtil(FileSystem::absolute(p.string(OptConfigFile)).string()).fullPath();

            if (_indexFile.empty())
            {
                String usage;
                p.usage(usage);
                throw Exception(usage, "missing index file");
            }
            return true;
        }

        /**
         * \brief Is the primary application routine.
         * \return Zero on success or not at all if an internal exception is raised. 
         */
        int go()
        {
            SiteBuilder builder;
            builder.loadConfig(_config);

            switch (builder.backendType)
            {
            case BackendMarkdown:
                _writer = new MarkdownDocumentWriter();
                break;
            case BackendHtml:
                _writer = new HtmlDocumentWriter();
                break;
            default:
                throw Exception("unknown writer type");
            }

            builder.buildFromXml(_writer, _indexFile.fullPath());
            return 0;
        }
    };

}  // namespace MdDox

int main(const int argc, char** argv)
{
    MdDox::CrtTestMemory();
    int rc = 1;
    try
    {
        MdDox::Application app;
        if (app.parse(argc, argv))
            rc = app.go();
    }
    catch (std::exception& ex)
    {
        MdDox::Console::writeError(ex.what());
    }

    MdDox::CrtDump();
    return rc;
}
