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
find_package(Doxygen)
find_package (Python COMPONENTS Interpreter)

set(MdDoxBuilder_ProjectName    ${CMAKE_PROJECT_NAME}         CACHE STRING "")
set(MdDoxBuilder_ProjecVersion  ${MdDox_PROJECT_VERSION}      CACHE STRING "")
set(MdDoxBuilder_ProjecUrl      ${MdDox_PROJECT_HOMEPAGE_URL} CACHE STRING "")
set(MdDoxBuilder_Brief          ${MdDox_PROJECT_DESCRIPTION}  CACHE STRING "")
set(MdDoxBuilder_ALL     FALSE)
set(MdDoxBuilder_BackEnd md)

# function(MdDoxMakeQuotedStringList Output ARGN)
macro(MdDoxMakeQuotedStringList Output)

	set(${Output} )
	set(WhiteSpace "                       ")
	set(First TRUE)
	foreach(String ${ARGN})
		if (First)
			set(${Output} "\"${String}\"")
		else()
			set(${Output} "${${Output}}\\\n${WhiteSpace}\"${String}\"")
		endif()
		set(First FALSE)
	endforeach()
	message(STATUS "${Output} = ${${Output}}")
endmacro()

# function(MdDoxMakeStringList Output ARGN)
macro(MdDoxMakeStringList Output)
	set(${Output} )
	set(WhiteSpace "                         ")
	set(First TRUE)
	foreach(String ${ARGN})
		if (First)
			set(${Output} "${String}")
		else()
			set(${Output} "${${Output}}\\\n${WhiteSpace}${String}")
		endif()
		set(First FALSE)
	endforeach()
	message(STATUS "${Output} = ${${Output}}")
endmacro()


# function(MdDox [<arg1> ...])
function(MdDox ConfigIn ConfigOut)
	if (DOXYGEN_FOUND)
		set(TargetName "${MdDoxBuilder_ProjectName}Target")

		MdDoxMakeQuotedStringList(SourceLocation ${MdDoxBuilder_SourceLocation})
		MdDoxMakeQuotedStringList(SourceExclude  ${MdDoxBuilder_SourceExclude})
		MdDoxMakeQuotedStringList(ExamplePaths   ${MdDoxBuilder_ExamplePaths})
		MdDoxMakeQuotedStringList(ImagePaths     ${MdDoxBuilder_ImagePaths})
		MdDoxMakeStringList(SymbolExclude        ${MdDoxBuilder_SymbolExclude})
		
		message(STATUS " ------ MdDox : ${TargetName} ------ ")
		message(STATUS " ")
		message(STATUS "Using Doxygen  : ${DOXYGEN_VERSION}")
		message(STATUS "ProjectName    : ${MdDoxBuilder_ProjectName}")
		message(STATUS "ProjectVersion : ${MdDoxBuilder_ProjecVersion}")
		message(STATUS "Brief          : ${MdDoxBuilder_Brief}")
		message(STATUS "SourceLocation : ${MdDoxBuilder_SourceLocation}")
		message(STATUS "OutputDir      : ${MdDoxBuilder_OutputDir}")
		message(STATUS "ExamplePaths   : ${MdDoxBuilder_ExamplePaths}")
		message(STATUS "ImagePaths     : ${MdDoxBuilder_ImagePaths}")
		message(STATUS " ")
		message(STATUS "ConfigIn       : ${ConfigIn} ")
		message(STATUS "ConfigOut      : ${ConfigOut} ")
		message(STATUS " ")
		message(STATUS " ------ MdDox  ------ ")
		
		if (NOT EXISTS "${MdDoxBuilder_OutputDir}/images")
			file(MAKE_DIRECTORY "${MdDoxBuilder_OutputDir}/images")
		endif()

		if (NOT EXISTS "${MdDoxBuilder_OutputDir}/markdown")
			file(MAKE_DIRECTORY "${MdDoxBuilder_OutputDir}/markdown")
		endif()

		if (NOT EXISTS "${MdDoxBuilder_OutputDir}/html")
			file(MAKE_DIRECTORY "${MdDoxBuilder_OutputDir}/html")
		endif()

		configure_file(${ConfigIn} ${ConfigOut})
		
		file(GLOB PagesINL ${MdDoxBuilder_OutputDir}/pages/*.inl)
		file(GLOB PagesH   ${MdDoxBuilder_OutputDir}/pages/*.h)
		source_group("Pages" FILES ${PagesINL})
		source_group("Pages" FILES ${PagesH})


		file(GLOB OutputMd ${MdDoxBuilder_OutputDir}/markdown/index.md)
		if (EXISTS "${CMAKE_SOURCE_DIR}/README.md")
			list(APPEND OutputMd "${CMAKE_SOURCE_DIR}/README.md")
		endif()
		source_group("Markdown" FILES ${OutputMd})

		set(TargetName_SRC
			${ConfigIn} 
			${ConfigOut} 
			${PagesINL} 
			${PagesH} 
			${OutputMd}
			${MdDoxBuilder_Config}
			${MdDoxBuilder_ExtraSource}
			${ARGN}
		)
		
		if (EXISTS "${MdDoxBuilder_OutputDir}/html/index.html")
			list(APPEND TargetName_SRC "${MdDoxBuilder_OutputDir}/html/index.html")
			source_group("Html" FILES "${MdDoxBuilder_OutputDir}/html/index.html")
		endif()

		if (EXISTS "${MdDoxBuilder_OutputDir}/html/style.css")
			list(APPEND TargetName_SRC "${MdDoxBuilder_OutputDir}/html/style.css")
			source_group("Html" FILES "${MdDoxBuilder_OutputDir}/html/style.css")
		endif()

		if (EXISTS "${MdDoxBuilder_OutputDir}/html/light-style.css")
			list(APPEND TargetName_SRC "${MdDoxBuilder_OutputDir}/html/light-style.css")
			source_group("Html" FILES "${MdDoxBuilder_OutputDir}/html/light-style.css")
		endif()

		if (EXISTS "${MdDoxBuilder_OutputDir}/xml/compound.xsd")
			list(APPEND TargetName_SRC "${MdDoxBuilder_OutputDir}/xml/compound.xsd")
			source_group("Xml" FILES "${MdDoxBuilder_OutputDir}/xml/compound.xsd")
		endif()

		if (EXISTS "${MdDoxBuilder_OutputDir}/Layout.xml")
			list(APPEND TargetName_SRC "${MdDoxBuilder_OutputDir}/Layout.xml")
			source_group("Xml" FILES "${MdDoxBuilder_OutputDir}/Layout.xml")
		endif()

		if (MdDoxBuilder_AutoBuild)
			set(_MdDoxBuilder_ALL ALL)
		endif()

		add_custom_target(${TargetName} ${_MdDoxBuilder_ALL}
			COMMENT "Building Documentation" 

			WORKING_DIRECTORY ${MdDoxBuilder_OutputDir}
			COMMAND ${DOXYGEN_EXECUTABLE} ${ConfigOut}
			SOURCES ${TargetName_SRC}
		)

		# run the MdDox target after doxygen... 
		add_custom_command(TARGET ${TargetName} POST_BUILD
			COMMENT "Invoking MdDox" 
			WORKING_DIRECTORY ${MdDoxBuilder_OutputDir}/xml
			COMMAND MdDox -i index.xml -t ${MdDoxBuilder_BackEnd} -c ${MdDoxBuilder_Config}
			SOURCES ${TargetName_SRC}
		)

		# Run DOT on all the output files..
		if(Python_Interpreter_FOUND)
			add_custom_command(TARGET ${TargetName} POST_BUILD
				COMMENT "Invoking Dot" 
				WORKING_DIRECTORY ${MdDoxBuilder_OutputDir}/images/dot
				COMMAND ${Python_EXECUTABLE} ${CMAKE_SOURCE_DIR}/CMake/invokeDot.py
				SOURCES ${TargetName_SRC}
			)
		else()
			file(GLOB DOT "${MdDoxBuilder_OutputDir}/images/dot/*.dot")
			foreach (File ${DOT})
				add_custom_command(TARGET ${TargetName} POST_BUILD
					WORKING_DIRECTORY ${MdDoxBuilder_OutputDir}/images
					COMMAND dot -T svg -O "${File}"
				)
			endforeach()
		endif()

		set_target_properties(${TargetName} PROPERTIES FOLDER "CMakePredefinedTargets/Document")
		set_target_properties(${MdDox_Target} PROPERTIES FOLDER "CMakePredefinedTargets/Document")
	endif()
endfunction()

