/*! 
 \page Project Project Structure

 \dot
digraph {
	rankdir  = "TB"
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
	GenApi
	ResourceCompiler
	MdDox
	MdDoxTree
	Xml
	TypeFilter
	Utils

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
  \n

*/
#pragma once
