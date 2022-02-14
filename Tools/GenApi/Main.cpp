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
#include "Generator.h"
#include "Resources.h"
#include "Utils/CommandLine/Parser.h"
#include "Utils/Console.h"
#include "Utils/Exception.h"
#include "Utils/Win32/CrtUtils.h"
#include "Xml/Parser.h"

using namespace std;

namespace MdDox::GenApi
{
    /**
     * \brief Document
     */
    enum Options
    {
        OptInputFile,
        OptOutDir,
        OptLogComplexTypes,
        OptLogSimpleTypes,
        OptLogAttributeNames,
        OptLogElementNames,
        OptLogGroupNames,
        OptOpLogEnumValues,
        OptionsMax,
    };

    /**
     * \brief Document
     */
    constexpr CommandLine::Switch Switches[OptionsMax] = {
        {
            OptInputFile,
            'i',
            "input",
            "Specify input file",
            true,
            1,
        },
        {
            OptOutDir,
            'o',
            "out",
            "Specify an output directory",
            true,
            1,
        },
        {
            OptLogComplexTypes,
            'c',
            "complex",
            "Log complexType names",
            true,
            0,
        },
        {
            OptLogSimpleTypes,
            's',
            "simple",
            "Log simpleType names",
            true,
            0,
        },
        {
            OptLogAttributeNames,
            'a',
            "attributes",
            "Log attribute names",
            true,
            0,
        },
        {
            OptLogElementNames,
            'e',
            "element",
            "Log element names",
            true,
            0,
        },
        {
            OptLogGroupNames,
            'g',
            "group",
            "Log group names",
            true,
            0,
        },
        {
            OptOpLogEnumValues,
            'n',
            "enum",
            "Log enum values",
            true,
            0,
        },
    };

    /**
     * \brief Entry point for the GenApi program.
     *
     * \code{.txt}
     * Usage: GenApi <options> <arg[0] .. arg[n]>
     *
     *      -h, --help        Display this help message
     *      -i, --input       Specify input file
     *      -o, --out         Specify an output directory
     *      -c, --complex     Log complexType names
     *      -s, --simple      Log simpleType names
     *      -a, --attributes  Log attribute names
     *      -e, --element     Log element names
     *      -g, --group       Log group names
     *      -n, --enum        Log enum values
     * \endcode
	 */
    class Application
    {
    private:
        PathUtil _indexFile;
        PathUtil _outDir;

        bool _complex{false};
        bool _simple{false};
        bool _attributeNames{false};
        bool _elementNames{false};
        bool _groupNames{false};
        bool _enumValues{false};

    public:
        Application() = default;

        bool parse(const int argc, char** argv)
        {
            CommandLine::Parser p;
            if (p.parse(argc, argv, Switches, OptionsMax) < 0)
                return false;

            _indexFile = PathUtil(FileSystem::absolute(p.string(OptInputFile)).string());
            _outDir    = PathUtil(FileSystem::absolute(p.string(OptOutDir)).string());

            _complex        = p.isPresent(OptLogComplexTypes);
            _simple         = p.isPresent(OptLogSimpleTypes);
            _attributeNames = p.isPresent(OptLogAttributeNames);
            _elementNames   = p.isPresent(OptLogElementNames);
            _groupNames     = p.isPresent(OptLogGroupNames);
            _enumValues     = p.isPresent(OptOpLogEnumValues);

            if (_indexFile.empty())
            {
                String usage;
                p.usage(usage);
                throw Exception(usage, "missing input file");
            }
            return true;
        }

        static void logType(StringMap& dest, Xml::Node* node, const char* name, const char* attr)
        {
            if (node->isTypeOf(name))
            {
                const String& ib = node->attribute(attr);
                if (!ib.empty())
                    dest[ib] = ib;
            }
            if (node->hasChildren())
            {
                for (auto* child : node->children())
                    logType(dest, child, name, attr);
            }
        }

        void log(const StringMap& map) const
        {
            StringArray arr;
            size_t      max = 0;
            for (const auto& [a, b] : map)
            {
                max = std::max<size_t>(max, a.size());
                arr.push_back(a);
            }

            std::sort(arr.begin(), arr.end());

            max += 1;
            for (auto& a : arr)
            {
                OutputStringStream spc;
                spc << setw(max - a.size()) << ' ';

                Console::writeLine(a, spc.str(), a);
            }
        }

        void logComplex(Xml::Node* node) const
        {
            StringMap dest;

            logType(dest, node, "xsd:complexType", "name");
            log(dest);
        }

        void logSimple(Xml::Node* node) const
        {
            StringMap dest;
            logType(dest, node, "xsd:simpleType", "name");
            log(dest);
        }

        void logAttributeNames(Xml::Node* node) const
        {
            StringMap dest;
            logType(dest, node, "xsd:attribute", "name");
            log(dest);
        }

        void logElementNames(Xml::Node* node) const
        {
            StringMap dest;
            logType(dest, node, "xsd:element", "name");
            log(dest);
        }

        void logGroupNames(Xml::Node* node) const
        {
            StringMap dest;
            logType(dest, node, "xsd:group", "name");
            log(dest);
        }

        void logEnumValues(Xml::Node* node) const
        {
            StringMap dest;
            logType(dest, node, "xsd:enumeration", "value");
            log(dest);
        }

        int go() const
        {
            const PathUtil path(_indexFile);

            Xml::Parser psr;
            psr.parse(path.fullPath());

            const bool any = _complex ||
                             _simple ||
                             _attributeNames ||
                             _elementNames ||
                             _groupNames ||
                             _enumValues;
            if (any)
            {
                if (_complex)
                    logComplex(psr.root());
                if (_simple)
                    logSimple(psr.root());
                if (_attributeNames)
                    logAttributeNames(psr.root());
                if (_elementNames)
                    logElementNames(psr.root());
                if (_groupNames)
                    logGroupNames(psr.root());
                if (_enumValues)
                    logEnumValues(psr.root());
            }
            else
            {
                const Generator gen(psr.root());
                gen.write(_outDir);
            }
            return 0;
        }
    };

}  // namespace MdDox::GenApi

int main(const int argc, char** argv)
{
    MdDox::CrtTestMemory();



	
    int rc = 0;
    try
    {
        MdDox::GenApi::Application app;
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
