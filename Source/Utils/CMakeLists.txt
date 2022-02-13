# -----------------------------------------------------------------------------
#   Copyright (c) Charles Carley.
#
#   This software is provided 'as-is', without any express or implied
# warranty. In no event will the authors be held liable for any damages
# arising from the use of this software.
#
#   Permission is granted to anyone to use this software for any purpose,
# including commercial applications, and to alter it and redistribute it
# freely, subject to the following restrictions:
#
# 1. The origin of this software must not be misrepresented; you must not
#    claim that you wrote the original software. If you use this software
#    in a product, an acknowledgment in the product documentation would be
#    appreciated but is not required.
# 2. Altered source versions must be plainly marked as such, and must not be
#    misrepresented as being the original software.
# 3. This notice may not be removed or altered from any source distribution.
# ------------------------------------------------------------------------------
set(TargetName Utils )
set(TargetGroup Common )


set(Utils_CL_HDR
    CommandLine/Option.h
    CommandLine/Parser.h
    CommandLine/Scanner.h
    CommandLine/Token.h
)

set(Utils_CL_SRC
    CommandLine/Parser.cpp
    CommandLine/Scanner.cpp
)

source_group("CommandLine\\Header" FILES ${Utils_CL_HDR})
source_group("CommandLine\\Source" FILES ${Utils_CL_SRC})


set(Utils_PB_HDR
    ParserBase/ParserBase.h
    ParserBase/ScannerBase.h
    ParserBase/TokenBase.h
    ParserBase/ParseError.h

)


set(Utils_PB_SRC
    ParserBase/ParserBase.cpp
    ParserBase/ScannerBase.cpp
    ParserBase/ParseError.cpp
)


source_group("ParserBase\\Header" FILES ${Utils_PB_HDR})
source_group("ParserBase\\Source" FILES ${Utils_PB_SRC})

set(Utils_HDR
    Char.h
    Console.h
    IndexCache.h
    FileSystem.h
    Path.h
    String.h
    TypeFilter.h
    TextStreamWriter.h
    Exception.h
)

set(Utils_SRC
    Char.cpp
    Console.cpp
    String.cpp
    FileSystem.cpp
    Path.cpp
    TypeFilter.cpp
)

if (WIN32)
    set(Utils_PLAT_HDR 
        Win32/CrtUtils.h
    )
    set(Utils_PLAT_SRC 
        Win32/CrtUtils.cpp
    )
endif()


source_group("Header" FILES ${Utils_HDR} ${Utils_PLAT_HDR})
source_group("Source" FILES ${Utils_SRC} ${Utils_PLAT_SRC})


include_directories(../)

add_library(${TargetName} 
    ${Utils_SRC}      ${Utils_HDR} 
    ${Utils_CL_SRC}   ${Utils_CL_HDR} 
    ${Utils_PB_SRC}   ${Utils_PB_HDR} 
    ${Utils_PLAT_SRC} ${Utils_PLAT_HDR}
)

target_link_libraries(${TargetName})

set_target_properties(${TargetName} PROPERTIES FOLDER "${TargetGroup}")
