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
set(TargetName MdDox)
set(TargetGroup )


include_directories(${MdDox_SOURCE_DIR}/Source ${MdDox_SOURCE_DIR}/Tools)
add_executable(${TargetName} Main.cpp)
target_link_libraries(${TargetName} Utils Xml Doxygen MdDoxTree ${EXTRA_LIBS})

copy_target(${TargetName} ${MdDox_BINARY_DIR}/build_files) 
    
if (NOT MdDox_INSTALL_PATH STREQUAL  "")
    copy_target(${TargetName} ${MdDox_INSTALL_PATH}) 
endif()

if (TargetFolders)
    set_target_properties(${TargetName} PROPERTIES FOLDER "${TargetGroup}")
endif()


if (MSVC)

    set_target_properties(
        ${TargetName} 
        PROPERTIES 
        VS_DEBUGGER_WORKING_DIRECTORY  
        "${CMAKE_SOURCE_DIR}/Current/xml"
    )

    set_target_properties(
        ${TargetName} 
        PROPERTIES 
        VS_DEBUGGER_COMMAND_ARGUMENTS  
        "-i index.xml --config ../MdDox.cfg"
    )

endif()