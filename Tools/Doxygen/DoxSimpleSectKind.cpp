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

#include "DoxSimpleSectKind.h"
#include "Utils/Exception.h"
#include "Utils/Console.h"


namespace MdDox::Doxygen
{
    DoxSimpleSectKindEnum DoxSimpleSectKind::get(const String &look)
    {
        if (look == "see")
            return DSSK_SEE;
        if (look == "version")
            return DSSK_VERSION;
        if (look == "return")
            return DSSK_RETURN;
        if (look == "authors")
            return DSSK_AUTHORS;
        if (look == "author")
            return DSSK_AUTHOR;
        if (look == "since")
            return DSSK_SINCE;
        if (look == "note")
            return DSSK_NOTE;
        if (look == "attention")
            return DSSK_ATTENTION;
        if (look == "date")
            return DSSK_DATE;
        if (look == "warning")
            return DSSK_WARNING;
        if (look == "pre")
            return DSSK_PRE;
        if (look == "post")
            return DSSK_POST;
        if (look == "copyright")
            return DSSK_COPYRIGHT;
        if (look == "invariant")
            return DSSK_INVARIANT;
        if (look == "remark")
            return DSSK_REMARK;
        if (look == "par")
            return DSSK_PAR;
        if (look == "rcs")
            return DSSK_RCS;
        return DSSK_INVALID;
    }
} // namespace MdDox::Doxygen