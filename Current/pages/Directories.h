#pragma once


/*! \dir Source

\brief Is the primary source directory.


\section Contents

*/


/*!
\dir Source/MdDox

This directory provides the separation between the main library and the main
\ref MdDox::Application "executable".

\section Contents


\dir Source/MdDoxTree

Implements the main library.

\section Contents

*/



/*!
\dir Tools

\section Contents
- \b Doxygen is a generated scaffolding library.
- \b GenApi is the generator that writes the scaffolding library.
- \b ResourceCompiler is a resource compiler for the generator.

 \dot
digraph {
	rankdir  = "RL"
	bgcolor  = none
	node [
		shape     = rect
		style     = "filled,solid"
		fontname  = "${font-family}"
		fontsize  = "${font-size}"
		fontcolor = "${node-primary-text}"
		color     = "${node-primary-border}"
		fillcolor = "${node-primary}"
	]
	edge [
		arrowsize = "${arrow-size}"
		fontname  = "${font-family}"
		fontsize  = "${font-size}"
		color     = "${node-primary-edge}"
		fontcolor = "${node-primary-text}"
	]

	Doxygen
	GenApi[
	    fillcolor="${node-primary-exe}"
	]
	ResourceCompiler[
	    fillcolor="${node-primary-exe}"
	]

	ResourceCompiler->GenApi
	Doxygen->GenApi[dir=back]
	{rank=min Doxygen }
	{rank=max GenApi ResourceCompiler }
	{rank=same GenApi Schema }
	{rank=max Schema Templates }

    Schema[shape=note]
    Templates[shape=note]

    Templates->ResourceCompiler
	Schema->GenApi
    

}
 \enddot

\section Sub Directories

*/


/*!
\dir Tools/Doxygen

\brief This directory contains the output from the \ref MdDox::GenApi::Application program.

\section Contents

*/

/*!
\dir Tools/ResourceCompiler

\section Contents

*/

/*!
\dir Tools/GenApi

\brief Contains the generator for the Doxygen scaffolding library.

\section Contents

*/

/*!
\dir Source/Utils

\brief Contains general source utilities that are used project wide.

\section Contents
*/

/*!

\dir Source/Utils/CommandLine

\brief Contains a basic command line argument parser.

\section Contents

*/

/*!

\dir Source/Utils/ParserBase

\brief Contains the base classes for implementing recursive descent parsers.

\section Contents
*/

/*!
\dir Source/TypeFilter

\brief Contains a constant static mapping of element names to enumerated types.

\section Details

The purpose of the filter is to reduce unnecessary string comparisons. The XML parser aims to
be generic enough so that it can be reusable in other projects. So, the idea behind the
filter is to maintain specific type info elsewhere, and bind the information to the node during
the parse stage. The node maintains an extra optional integer storage value which can be used or
ignored.

To use, apply the filter to the parser before parsing a XML file.


\section Contents

*/

/*!
\dir Source/Xml

Contains a custom XML parser.

\see MdDox::Xml 

\section Contents

*/

/*!
\dir Source/Utils/Win32

\brief Contains platform dependent code to test for unallocated memory.


\section Contents
*/
