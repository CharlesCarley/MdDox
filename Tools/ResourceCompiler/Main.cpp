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
#include <cstdint>
#include <iostream>
#include <iomanip>
#include "Utils/CommandLine/Parser.h"
#include "Utils/Console.h"
#include "Utils/Exception.h"
#include "Utils/Path.h"
#include "Utils/TextStreamWriter.h"
#include "Utils/Win32/CrtUtils.h"
using namespace std;

namespace MdDox::ResourceCompiler
{
    /**
     * \brief ResourceCompiler command line options
     */
    enum Option
    {
        /**
         * \brief Specify an output file name.
         *
         * <tt>-o [file-stem-name]</tt>
         *
         *  The output files will be split between
         *  a source and header file with the supplied name.
         */
        OptOutputFileName,

        /**
         * \brief Specify a root namespace name
         *
         * <tt>-n [namespace]</tt>
         *
         * 
         */
        OptNameSpace,
        OptionsMax,
    };

    /**
     * \brief Provides and array of CommandLine::Switch objects foreach
     * \ref ResourceCompiler::Option "Option"
     */
    constexpr CommandLine::Switch Switches[OptionsMax] = {
        {
            OptOutputFileName,
            'o',
            nullptr,
            "Specify the output file name",
            true,
            1,
        },
        {
            OptNameSpace,
            'n',
            nullptr,
            "Specify a root namespace",
            true,
            1,
        },
    };

    struct Resource
    {
        String data;
        size_t size;
    };

    using ResourceMap = std::unordered_map<String, Resource>;

    /**
     * \brief Entry point for the ResourceCompiler.
     * 
     */
    class Application
    {
    private:
        String      _namespace;
        String      _output;
        StringArray _input;
        ResourceMap _resources;

    public:
        Application() = default;

        bool parse(const int argc, char** argv)
        {
            CommandLine::Parser p;
            if (p.parse(argc, argv, Switches, OptionsMax) < 0)
                return false;

            _output    = p.string(OptOutputFileName, 0, "Resources");
            _namespace = p.string(OptNameSpace, 0, "");
            _input     = p.arguments();

            if (_input.empty())
                throw MessageException("No input files");
            return true;
        }

        void loadInput(const String& input)
        {
            InputFileStream in(input);
            if (!in.is_open())
                throw InputException("Failed to open the supplied file '", input, '\'');

            String name = PathUtil(input).stem();

            OutputStringStream srcImpl;
            OutputStringStream bufferImpl;

            size_t len = 0;

            bufferImpl << std::setfill(' ') << std::setw(0x0B) << ' ';

            char ch;
            while (in.read(&ch, 1))
            {
                const uint16_t v = (uint8_t)ch;
                bufferImpl << "0x"
                           << std::setfill('0')
                           << std::setw(2)
                           << std::hex << (uint16_t)v
                           << ",";

                if (len % 13 == 12)
                {
                    bufferImpl << std::endl;
                    bufferImpl << std::setfill(' ') << std::setw(0x0B) << ' ';
                }

                ++len;
            }
            bufferImpl << "0x00";

            srcImpl << std::setw(0x07) << ' ' << "constexpr uint8_t "
                    << name
                    << "[";
            srcImpl << len + 1 << "]={" << std::endl;
            srcImpl << bufferImpl.str() << std::endl;
            srcImpl << std::setw(0x07) << ' ' << "};" << std::endl;
            _resources[name] = {srcImpl.str(), len};
        }

        void writeHeader(OStream& out)
        {
            WriteUtils::write(out, 0x00, "#pragma once");
            WriteUtils::write(out, 0x00, "#include <string>");
            WriteUtils::writeLine(out, 0x00, 2, "#include <cstdint>");

            String namespaceName;

            if (!_namespace.empty())
                StringCombine(namespaceName, _namespace, "::Resources");
            else
                namespaceName = "Resources";

            WriteUtils::write(out, 0x00, "namespace ", namespaceName);
            WriteUtils::write(out, 0x00, '{');
            WriteUtils::write(out, 0x04, "class Resource");
            WriteUtils::write(out, 0x04, '{');
            WriteUtils::write(out, 0x04, "public:");

            bool first = true;

            for (auto& [name, source] : _resources)
            {
                if (!first)
                    WriteUtils::newLine(out, 1);
                first = false;
                WriteUtils::write(out,
                                  0x08,
                                  "static std::string get",
                                  StringUtils::toUpperFirst(name),
                                  "();");

                WriteUtils::write(out,
                                  0x08,
                                  "static void get",
                                  StringUtils::toUpperFirst(name),
                                  "(std::string &dest);");
            }

            WriteUtils::write(out, 0x04, "};");
            WriteUtils::write(out, 0x00, "} // namespace ", namespaceName);
        }

        void writeSource(OStream& out)
        {
            WriteUtils::writeLine(out, 0x00, 2, "#include \"", _output, ".h\"");
            String namespaceName;

            if (!_namespace.empty())
                StringCombine(namespaceName, _namespace, "::Resources");
            else
                namespaceName = "Resources";

            WriteUtils::write(out, 0x00, "namespace ", namespaceName);
            WriteUtils::write(out, 0x00, '{');

            bool first = true;

            for (auto& [name, source] : _resources)
            {
                if (!first)
                    WriteUtils::newLine(out, 1);
                first = false;

                String methodName = StringCombine("get", StringUtils::toUpperFirst(name));

                WriteUtils::write(out,
                                  0x04,
                                  "std::string Resource::",
                                  methodName,
                                  "()");
                WriteUtils::write(out, 0x04, '{');
                WriteUtils::write(out, 0x08, "std::string cpyOnReturn;");
                WriteUtils::write(out, 0x08, methodName, "(cpyOnReturn);");
                WriteUtils::write(out, 0x08, "return cpyOnReturn;");
                WriteUtils::writeLine(out, 0x04, 2, '}');

                WriteUtils::write(out,
                                  0x04,
                                  "void Resource::",
                                  methodName,
                                  "(std::string &dest)");
                WriteUtils::write(out, 0x04, '{');
                WriteUtils::write(out, 0x00, source.data);
                WriteUtils::write(out, 0x08, "dest.assign((const char*)", name, ", ", source.size, ");");
                WriteUtils::write(out, 0x04, '}');
            }

            WriteUtils::write(out, 0x00, "} // namespace ", namespaceName);
        }

        int go()
        {
            for (const String& input : _input)
                loadInput(input);


        	

        	OutputFileStream src(StringCombine("",_output, ".h"));
            if (src.is_open())
				writeHeader(src);

        	src.close();
            src.open(StringCombine("", _output, ".cpp"));
        	
            if (src.is_open())
                writeSource(src);

        	return 0;
        }
    };

}  // namespace MdDox::ResourceCompiler

int main(const int argc, char** argv)
{
    MdDox::CrtTestMemory();
    int rc = 0;
    try
    {
        MdDox::ResourceCompiler::Application app;
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
