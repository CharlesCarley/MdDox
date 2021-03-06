# -----------------------------------------------------------------------------
#
# Copyright (c) Charles Carley.
#
# This software is provided 'as-is', without any express or implied
# warranty. In no event will the authors be held liable for any damages
# arising from the use of this software.
#
# Permission is granted to anyone to use this software for any purpose,
# including commercial applications, and to alter it and redistribute it
# freely, subject to the following restrictions:
#
# 1. The origin of this software must not be misrepresented; you must not
# claim that you wrote the original software. If you use this software
# in a product, an acknowledgment in the product documentation would be
# appreciated but is not required.
# 2. Altered source versions must be plainly marked as such, and must not be
# misrepresented as being the original software.
# 3. This notice may not be removed or altered from any source distribution.
# ------------------------------------------------------------------------------
include(GitUpdate)
include(StaticRuntime)
include(ExternalTarget)
include(CopyTarget)

set_static_runtime()
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

option(MdDox_BUILD_TEST "Build the unit test program." ON)
option(MdDox_AUTO_RUN_TEST "Automatically run the test program." OFF)
option(MdDox_JUST_MY_CODE "Enable the /JMC flag" ON)
option(MdDox_INSERT_STUBS "Insert stub functions on visits to unused methods " OFF)

set(MdDox_INSTALL_PATH 
	"" CACHE PATH 
	"Specify installation directory")

set(BUILD_GMOCK OFF CACHE BOOL "" FORCE)
set(INSTALL_GTEST OFF CACHE BOOL "" FORCE)

set(GTEST_DIR ${MdDox_SOURCE_DIR}/Test/googletest)
set(GTEST_INCLUDE ${MdDox_SOURCE_DIR}/Test/googletest/googletest/include)

set(GTEST_LIBRARY gtest_main)

set(MdDox_EXTERN ${MdDox_SOURCE_DIR}/Extern)

if (MSVC)
	# globally disable scoped enum warnings
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /wd26812")

	if (MdDox_JUST_MY_CODE)
		# Enable just my code...
		set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /JMC")
	endif()


	if (MdDox_INSERT_STUBS)
		add_definitions(-DINSERT_STUB)
	endif()

	
else()
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC ")
	set(EXTRA_LIBS "stdc++fs")
endif()
