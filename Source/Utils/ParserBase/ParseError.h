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
#include "Utils/Exception.h"

namespace MdDox
{
    /**
     * \brief Custom exception that logs a file, line number and a message.
     */
    class ParseError final : public Exception
    {
    private:
        static String getError(int           stage,
                               const String& file,
                               const size_t& line,
                               const String& message = "");
    public:
        explicit ParseError() :
            Exception(getError(-1, "", 0))
        {
        }

        explicit ParseError(const String& message) :
            Exception(getError(-1, "", 0, message))
        {
        }

        /**
         * \brief Constructs the exception with a file, line and a message.
         * \param stage code to supply a parse stage.
         * - 0 means syntax error.
         * - 1 means parse error.
         * - 2 means compile error.
         * \param file The name of the file that contains the error.
         * \param line The line number of the error.
         * \param message an extra message for the error.
         *
         * The message if formatted as:
         * \c file  (\c line) : \c stage : \c message
         */
        explicit ParseError(const int     stage,
                            const String& file,
                            const size_t  line,
                            const String& message) :
            Exception(getError(stage, file, line, message))
        {
        }

    };
} // namespace Hack
