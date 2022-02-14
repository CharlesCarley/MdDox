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

#include <deque>
#include <fstream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <vector>
#include <iomanip>

namespace MdDox
{
    /**
     * \brief Declaration of a string.
     */
    using String = std::string;

    /**
     * \brief Structure to hold a double ended queue of strings.
     */
    using StringDeque = std::deque<std::string>;

    /**
     * \brief Structure to hold a vector of strings.
     */
    using StringArray = std::vector<std::string>;
    /**
     * \brief Structure to hold a key value string.
     */
    using StringMap = std::unordered_map<std::string, std::string>;

    /**
     * \brief Declaration of an input/output string stream.
     */
    using StringStream = std::stringstream;

    /**
     * \brief Declaration of an input only string stream.
     */
    using InputStringStream = std::istringstream;

    /**
     * \brief Declaration of an output only string stream.
     */
    using OutputStringStream = std::ostringstream;

    /**
     * \brief Declaration of the input stream base class.
     */
    using IStream = std::istream;

    /**
     * \brief Declaration of the output stream base class.
     */
    using OStream = std::ostream;

    /**
     * \brief Declaration of the input file stream class.
     */
    using InputFileStream = std::ifstream;

    /**
     * \brief Declaration of the output file stream class.
     */
    using OutputFileStream = std::ofstream;

    /**
     * \brief Provides general string conversion utility routines.
     */
    class StringUtils
    {
    public:
        /**
         * \brief Splits the supplied string into a list of sub-strings.
         * \param destination The structure that will hold the sub-strings.
         * \param input The input string to split.
         * \param separator The value that determines a split.
         */
        static void split(StringArray&  destination,
                          const String& input,
                          char          separator);

        /**
         * \copydoc StringUtils::split
         *
         *  Removes any empty strings from the result.
         */
        static void splitRejectEmpty(StringArray&  destination,
                                     const String& input,
                                     char          separator);

        /**
         * \copydoc StringUtils::split
         */
        static void split(StringArray&  destination,
                          const String& input,
                          const String& separator);

        /**
         * \copydoc StringUtils::split
         */
        static void split(StringDeque&  destination,
                          const String& input,
                          const String& separator);

        /**
         * \brief Converts the supplied integer to base 64 and uses a
         * nonsensical symbol alphabet to produce a randomized string.
         *
         * \param destination The string that will hold the scrambled value.
         * \param value The value to scramble.
         * \param randomize If true, the result will randomly be shifted.
         *
         * \code{.txt}
         * Randomized:
         *   1ILtZEF
         *   h804iWy
         *   DpZzzmg
         *   I0BBSCd
         *   
         * Not-Randomized:
         *   n1mLZd3
         *   n1mLZd3
         *   n1mLZd3
         *   n1mLZd3
         * \endcode
         */
        static void scramble(String& destination, size_t value, bool randomize=true);


    	static String scramble(const String& value, bool randomize = true);

        /**
         * \brief Scrambles and combines a contextually unique counter,
         * time stamp, and a memory address.
         *
         * Used to generate a unique string without using a GUID.
         *
         * \param destination The string that will hold the generated value
         * \param counter A reference to an external counter variable.
         * \param seed The memory address to mix into the generated value.
         */
        static void generate(String& destination, int& counter, void* seed);

        /**
         * \brief Removes any white space characters from the start and end of the string.
         * \param destination The destination storage.
         * \param input The input string that needs to be trimmed.
         */
        static void trimWhiteSpace(String& destination, const String& input);

        /**
         * \brief Removes all occurrences of the supplied character from the
         * left hand side of the string.
         * \param destination The destination storage.
         * \param input The input string that needs to be trimmed.
         * \param character the character to trim.
         */
        static void trimL(String& destination, const String& input, char character);

        /**
         * \brief Removes all occurrences of the supplied character from the
         * right hand side of the string.
         * \param destination The destination storage.
         * \param input The input string that needs to be trimmed.
         * \param character the character to trim.
         */
        static void trimR(String& destination, const String& input, char character);


        /**
         * \brief A combination of trimL and trimR 
         * \param destination The destination storage.
         * \param input The input string that needs to be trimmed.
         * \param character the character to trim.
         */
        static void trim(String& destination, const String& input, char character);

        static void splitLine(StringArray& dest, const String& input, char swap = '$');

        static void replaceAll(String& dest, const String& input, const String& a, const String& b);

        static void toLower(String& dest, const String& in);

        static void toUpper(String& dest, const String& in);

        static String toLowerFirst(const String& in);

        static String toUpperFirst(const String& in);

    };

    template <typename... Args>
    void StreamMerge(OutputStringStream& dest, Args&&... args)
    {
        OutputStringStream oss;
        ((oss << std::forward<Args>(args)), ...);
        dest << oss.str() << std::endl;
    }

    template <typename... Args>
    void StringCombine(String& dest, Args&&... args)
    {
        OutputStringStream oss;
        ((oss << std::forward<Args>(args)), ...);
        dest = oss.str();
    }

    template <typename... Args>
    String StringCombine(Args&&... args)
    {
        OutputStringStream oss;
        ((oss << std::forward<Args>(args)), ...);
        return oss.str();
    }

}  // namespace MdDox
