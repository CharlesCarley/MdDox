#pragma once

/*!
 \mainpage MdDox

\brief \dot 
digraph {
	rankdir = "LR";
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

	
    Doxygen[label="Doxygen XML-Backend" shape=rect] 
    MdDox[label="MdDox XML" shape=rect] 
    Doxygen ->MdDox;
    GitHub[label="Content in the user \n repository on GitHub"]
    MdDox -> GitHub

}
\enddot

\section Topics


- \ref index "Primary Index."
- \ref Project Defines the overall project structure.
- \ref Site Defines the overall layout of the generated site.
- \ref Image Describes how images are linked.
- \ref Html Describes the current html style sheet.

*/


/**
 * \brief Provides a class grouping for all defined types in this project.
 */
namespace MdDox
{
}