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
set(TargetName MdDoxTree )
set(TargetGroup Common )

set(Target_HDR 
	ClassPageWriter.h
	Config.h
	DescriptionWriter.h
	DirectoryPageWriter.h
	DocumentWriter.h
	DotWriter.h
	EnumDefWriter.h
	FunctionDefWriter.h
	GenericPageWriter.h
	HashUtils.h
	HtmlCommandWriter.h
	HtmlDocumentWriter.h
	IconSet.h
	IndexPageWriter.h
	Link.h
	LinkedTextWriter.h
	Location.h
	LocationWriter.h
	MarkdownCommandWriter.h
	MarkdownDocumentWriter.h
	MemberDefListingWriter.h
	MemberDefWriter.h
	NamespacePageWriter.h
	PageWriter.h
	ParagraphWriter.h
	ParameterListWriter.h
	ParameterWriter.h
	Reference.h
	RepoFile.h
	Section1Writer.h
	Section2Writer.h
	Section3Writer.h
	Section4Writer.h
	SectionDefListingWriter.h
	SectionDefWriter.h
	SiteBuilder.h
	SourceFile.h
	VariableDefWriter.h
	WriteUtils.h
)

set(Target_SRC 
	ClassPageWriter.cpp
	Config.cpp
	DescriptionWriter.cpp
	DirectoryPageWriter.cpp
	DotWriter.cpp
	EnumDefWriter.cpp
	FunctionDefWriter.cpp
	GenericPageWriter.cpp
	HashUtils.cpp
	HtmlCommandWriter.cpp
	HtmlDocumentWriter.cpp
	IconSet.cpp
	IndexPageWriter.cpp
	Link.cpp
	LinkedTextWriter.cpp
	LocationWriter.cpp
	MarkdownCommandWriter.cpp
	MarkdownDocumentWriter.cpp
	MemberDefListingWriter.cpp
	MemberDefWriter.cpp
	NamespacePageWriter.cpp
	PageWriter.cpp
	ParagraphWriter.cpp
	ParameterListWriter.cpp
	ParameterWriter.cpp
	RepoFile.cpp
	Section1Writer.cpp
	Section2Writer.cpp
	Section3Writer.cpp
	Section4Writer.cpp
	SectionDefListingWriter.cpp
	SectionDefWriter.cpp
	SiteBuilder.cpp
	SourceFile.cpp
	VariableDefWriter.cpp
	WriteUtils.cpp
)


include_directories(../ ${MdDox_SOURCE_DIR}/Tools)

add_library(${TargetName} ${Target_SRC} ${Target_HDR})
target_link_libraries(${TargetName} Doxygen TypeFilter)

set_target_properties(${TargetName} PROPERTIES FOLDER "${TargetGroup}")
