# -----------------------------------------------------------------------------
#
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
include (GroupSet)

set(TargetName      Unit)
set(TestTargetName  ${TargetName}Test)

set_group(
    TestTarget_Data 
    Files/Inline:*.inl 
    Files/Xml:*.xml
    Files/Cfg:*.cfg
)

set(TestTarget_SOURCE
    FileCmp.h
    FileCmp.cpp
    Config.cpp
    Parse.cpp
    General.cpp
    ${TestTarget_Data}
)

set(ABSOLUTE_TEST_DIRECTORY  ${CMAKE_CURRENT_SOURCE_DIR})
set(ABSOLUTE_BUILD_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})

configure_file(
    ${CMAKE_CURRENT_SOURCE_DIR}/TestDirectory.h.in
    ${CMAKE_CURRENT_BINARY_DIR}/TestDirectory.h
)

include_directories(. 
    ${GTEST_INCLUDE} 
    ${CMAKE_CURRENT_BINARY_DIR} 
    ${MdDox_SOURCE_DIR}/Source
    ${MdDox_SOURCE_DIR}/Tools
)

add_executable(
    ${TestTargetName}
    ${TestTarget_SOURCE}
)

target_link_libraries(
	${TestTargetName} 
	${GTEST_LIBRARY} 
	Utils 
	MdDoxTree 
	Xml 
	Doxygen
    ${EXTRA_LIBS})

if (MdDox_AUTO_RUN_TEST)

   add_custom_command(
	TARGET  ${TestTargetName} POST_BUILD
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        COMMAND  $<TARGET_FILE:${TestTargetName}>
    )

    if (MSVC)
        set_target_properties(
            ${TestTargetName} 
            PROPERTIES 
            VS_DEBUGGER_WORKING_DIRECTORY  
            ${CMAKE_CURRENT_SOURCE_DIR}
        )
    endif()

endif()
