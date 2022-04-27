/*! 
\page MD001 Project Structure

\brief Illustrates the project's library and executable dependency structure.

\h1 Project Structure

The following diagram shows the overall library and executable dependency structure.
\br

 \dot
digraph {
    layout  = dot;
    bgcolor = "${graph-bg}";
    rankdir = "TB";
    labelloc= "t"
    label   = "Project Structure"
    fontname= "${font-family}"
    fontsize= "${font-size}"
    margin  = "${node-primary-margin}"

	node [
		shape     = none
		style     = none
		fontname  = "${font-family}"
		fontsize  = "${font-size}"
		fontcolor = "${node-primary-text}"
		color     = "${node-primary-border}"
		fillcolor = "${node-primary-exe}"
        margin    = "0.01"
	]
	edge [
		arrowsize = "${arrow-size}"
		fontname  = "${font-family}"
		fontsize  = "${font-size}"
		color     = "${node-primary-edge}"
		fontcolor = "${node-primary-text}"
	]

	Doxygen
	GenApi[shape=circle style="filled,solid"]
	ResourceCompiler[shape=circle style="filled,solid" label="RC"]
	MdDox[shape=circle style="filled,solid"]
	
	MdDoxTree
	Xml
	TypeFilter
	Utils

    ResourceCompiler[label="Resource\nCompiler"]


	Doxygen			-> Xml;
	GenApi			-> Xml;
	GenApi			-> Doxygen[label="Creates" fontcolor="${text-light}"];
	ResourceCompiler-> Utils
	GenApi			-> ResourceCompiler

	MdDox      -> MdDoxTree
	Xml        -> Utils
	Xml        -> TypeFilter
	MdDoxTree  -> Doxygen

	{rank=same GenApi   MdDoxTree }
	{rank=min  Doxygen  ResourceCompiler }
	{rank=max  MdDox    Utils }
}
\enddot

\br
\h2 Markdown Doxygen

\ref_brief{MdDox::Application}

\h2 GenApi

\ref_brief{MdDox::GenApi::Application}

*/
#pragma once
