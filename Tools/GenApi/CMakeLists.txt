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
set(TargetName GenApi)
set(TargetGroup Tools)

list(APPEND CMAKE_MODULE_PATH 
	 ${MdDox_SOURCE_DIR}/Tools/ResourceCompiler/CMake 
)

include(ResourceCompiler)

include_directories(${MdDox_SOURCE_DIR}/Source)

set(Target_MAPS 
    Attributes.txt
    Complex.txt
    Enums.txt
    Elements.txt
    Groups.txt
    Header.txt
    Simple.txt
)

file(GLOB Target_TMPL Resources/*.txt)

add_resources(Target_RES Resources "MdDox::GenApi" ${Target_TMPL})

source_group("Database" FILES ${Target_MAPS})
source_group("Resources" FILES ${Target_TMPL})

set(Target_SRC
    Main.cpp
    Common.cpp
    Generator.cpp
    Database.cpp
    Complex.cpp
    Simple.cpp
    Group.cpp
    Compound.xsd
    ${Target_TMPL}
    ${Target_RES}
    ${Target_MAPS}
)

set(Target_HDR
    Writer.h
    Types.h
    Common.h
    Database.h
    Generator.h
    Object.h
    Complex.h
    Simple.h
    Group.h
)

add_executable(${TargetName} 
             ${Target_SRC}
             ${Target_HDR})

target_link_libraries(${TargetName} Utils Xml TypeFilter ${EXTRA_LIBS})

copy_target(${TargetName} ${MdDox_BINARY_DIR}/build_files) 
    
if (NOT MdDox_INSTALL_PATH STREQUAL  "")
    copy_target(${TargetName} ${MdDox_INSTALL_PATH}) 
endif()

if (TargetFolders)
    set_target_properties(${TargetName} PROPERTIES FOLDER "${TargetGroup}")
endif()

if (MSVC)
    # Usage: GenDoxygenApi <options> <arg[0] .. arg[n]>
    #
    #    -h, --help        Display this help message
    #    -i, --input       Specify input file
    #    -o, --out         Specify an output directory
    #    -c, --complex     Log complexType names
    #    -s, --simple      Log simpleType names
    #    -a, --attributes  Log attribute names
    #    -e, --element     Log element names
    #    -g, --group       Log group names
    #    -n, --enum        Log enum values

    set_target_properties(
        ${TargetName} 
        PROPERTIES 
        VS_DEBUGGER_WORKING_DIRECTORY  
        "${CMAKE_CURRENT_SOURCE_DIR}"
    )

    set_target_properties(
        ${TargetName} 
        PROPERTIES 
        VS_DEBUGGER_COMMAND_ARGUMENTS  
        "-i compound.xsd -o ${CMAKE_CURRENT_SOURCE_DIR}/../Doxygen/"
    )


endif()