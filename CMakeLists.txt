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
cmake_minimum_required(VERSION 3.6)
project(MdDox 
	VERSION 1.0.0 
    HOMEPAGE_URL "https://github.com/CharlesCarley/MdDox"
	DESCRIPTION "A doxygen to markdown utility tool"
)

enable_language(CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Set the module path to include scripts

list(APPEND CMAKE_MODULE_PATH 
	 ${MdDox_SOURCE_DIR}/CMake 
	 ${MdDox_SOURCE_DIR}/CMake/Modules
)

include(Configure)
subdirs(CMake)

set(TargetFolders TRUE)
set(MdDox_INCLUDE ${MdDox_SOURCE_DIR}/Source)

add_subdirectory(Source)
add_subdirectory(Tools)

if (MdDox_BUILD_TEST)
	set(TargetGroup Extern)
	add_subdirectory(${GTEST_DIR})

	if (TargetFolders)
		set_target_properties(gtest_main PROPERTIES FOLDER "${TargetGroup}")
		set_target_properties(gtest PROPERTIES FOLDER "${TargetGroup}")
	endif()

	add_subdirectory(Test)

endif()
add_subdirectory(Current)
