#pragma once


/*! \dir Source

\brief Is the primary source directory.

*/


/*!
\dir Source/MdDox

Provides a separation between the main library and the main executable. 

\dir Source/MdDoxTree

Implements the main program. It is primarily composed of \ref MdDox::Doxygen::Visitors "Visitors"

*/

/*!
\dir Tools

\brief Contains three targets. First, a scaffolding library. Second the generator that writes the
library. Third, a resource compiler for the generator.  

*/


/*!
\dir Tools/Doxygen

\brief This directory contains an auto generated scaffolding library.


*/


/*!
\dir Tools/GenApi

\brief Contains the generator for the Doxygen scaffolding library.

*/

/*!
\dir Source/Utils

\brief Contains general source utilities that are used project wide.
*/

/*!

\dir Source/Utils/CommandLine

\brief Contains a basic command line argument parser.

*/

/*!

\dir Source/Utils/ParserBase

\brief Contains the base classes for implementing recursive descent parsers.

*/

/*!
\dir Source/TypeFilter

\brief Contains a constant static mapping of element names to enumerated types.

The purpose of the filter is to reduce unnecessary string comparisons. The XML parser aims to
be generic enough so that it can be reusable in other projects. So, the idea behind the
filter is to maintain specific type info elsewhere, and bind the information to the node during
the parse stage. The node maintains an extra optional integer storage value which can be used or
ignored.

To use, apply the filter to the parser before parsing a XML file.

*/

/*!
\dir Source/Xml

Contains a custom XML parser.

\see MdDox::Xml 

*/

/*!
\dir Source/Utils/Win32

\brief Contains platform dependent code to test for unallocated memory.
*/
