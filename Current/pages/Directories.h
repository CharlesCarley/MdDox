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

\brief Contains three targets, a scaffolding library, the generator
that writes the library and a resource compiler for the generator.

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

\dir Source/Utils/CommandLine

\brief Contains a basic command line argument parser.


\dir Source/Utils/ParserBase

\brief Contains the base classes for implementing recursive descent parsers.


\dir Source/Utils/Win32

\brief Contains platform dependent code to test for unallocated memory.


*/
