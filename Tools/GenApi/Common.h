/*
-------------------------------------------------------------------------------
    Copyright (c) Charles Carley.

  This software is provided 'as-is', without any express or implied
  warranty. In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
-------------------------------------------------------------------------------
*/
#pragma once
#include "Utils/String.h"
#include "Writer.h"

namespace MdDox
{
    class PathUtil;
}

/**

\brief GenApi is used to generate a static scaffolding library.


The idea behind the GenApi library is to convert an XML schema into a structure
so that a branch of a node tree can be placed into a specific scaffolding class.
Then, inserted nodes provide a predetermined route through the traversal.
<br/>
<br/>
It has a direct dependency on MdDox::Xml both to generate the library and in the
final output.
<br/>
<br/>
The program will not work out of the box. It is designed to be flexible enough to
allow renaming types in the schema without modifying the actual element names.
Therefore, it needs to output a few extra files first before generating the API.
The application command line provides the means to extract a 1:1 name mapping of
all the needed names. After the initial setup is complete, any type can be renamed
if desired. The generator will always use the first value when searching the file and
second value as the output API name. 
<br/>
<br/>
<b>Concept</b><br/>
\dot

digraph {
    bgcolor = none;
    rankdir = "LR";
    layout  = dot;
    
    node [
		shape     = none
		fontname  = "${font-family}"
		fontcolor = "${text}"
		fontsize  = "${font-size}"
	]
    edge [
		arrowsize = "${arrow-size}"
		color     = "${grey-table-edge}"
		fontname  = "${font-family}"
		fontcolor = "${text}"
		fontsize  = "${font-size}"
	]

	subgraph cluster_a{
		peripheries = 0
	    bgcolor     = none

		Application[label=<
			<table border="0" cellspacing="0" cellpadding="4" bgcolor="${grey-table-0}">
				<tr><td align="center" port="Title"><font color="${bold}"><b>Application</b></font></td></tr>
				<tr><td align="left">
				<table border="0" cellspacing="0" cellpadding="4" bgcolor="${grey-table-1}">
				<tr><td align="center">Setup</td></tr>
				<tr><td align="left" port="C">-c</td></tr>
				<tr><td align="left" port="G">-g</td></tr>
				<tr><td align="left" port="E">-e</td></tr>
				<tr><td align="left" port="S">-s</td></tr>
				<tr><td align="left" port="N">-n</td></tr>
				<tr><td align="center">Generate</td></tr>
				<tr><td align="left" port="I">-i</td></tr>
				<tr><td align="left" port="O">-o</td></tr>
				</table>
				</td></tr>
			</table>
		>];

	    Database[label=<
			<table border="0" cellspacing="0" cellpadding="4" bgcolor="${grey-table-0}">
				<tr><td align="center" port="Title"><font color="${bold}"><b>Swap Database</b></font></td></tr>
				<tr><td align="left">
				<table border="0" cellspacing="0" cellpadding="4" bgcolor="${grey-table-1}">
				<tr><td align="left" port="C">Complex.txt</td></tr>
				<tr><td align="left" port="G">Groups.txt</td></tr>
				<tr><td align="left" port="E">Elements.xt</td></tr>
				<tr><td align="left" port="S">Simple.txt</td></tr>
				<tr><td align="left" port="N">Enums.txt</td></tr>
				<tr><td align="left" port="I">input.xsd</td></tr>
				</table>
				</td></tr>
			</table>
		>];
		
		Index[label=<
		<table border="0" cellspacing="0" cellpadding="4" bgcolor="${grey-table-0}">
			<tr><td align="center" port="Title"><font color="${bold}"><b>Index</b></font></td></tr>
			<tr><td align="left">
			<table border="0" cellspacing="0" cellpadding="4" bgcolor="${grey-table-1}">
			<tr><td align="left" port="C">xsd:complexType</td></tr>
			<tr><td align="left" port="G">xsd:group</td></tr>
			<tr><td align="left" port="E">xsd:element</td></tr>
			<tr><td align="left" port="S">xsd:simpleType</td></tr>
			<tr><td align="left" port="N">xsd:enumeration</td></tr>
			<tr><td align="left" port="I">input.xsd</td></tr>
			</table>
			</td></tr>
		</table>
		>];


		Index:C->Class
		Index:G->Class
		Index:E->Class
		Index:S->Enum
		Index:N->Enum
				
	}

	subgraph cluster_b{
		peripheries=0
		Input[label=<
		<table border="0" cellspacing="0" cellpadding="4" bgcolor="${grey-table-0}">
			<tr><td align="center" port="Title"><font color="${bold}"><b>input.xsd</b></font></td></tr>
		</table>
		>];
	}
	
	Application:C->Database:C
	Application:S->Database:S
	Application:E->Database:E
	Application:N->Database:N
	Application:G->Database:G
	

	Application:I->Input;
	Database:C->Index:C;
	Database:S->Index:S;
	Database:E->Index:E;
	Database:N->Index:N;
	Database:G->Index:G;
	Input->Database:I;
	Input->Index:I;
}
\enddot




The \ref MdDox::GenApi::Application "Application" class provides the entry point for the program.
<br/>


<b>Usage</b><br/>
\copydetails MdDox::GenApi::Application

*/
namespace MdDox::GenApi
{
    class Common final : public Writer
    {
    protected:
        String     _header;
        StringArray _forwards;
        StringArray _includes;


        void writeHeader(OStream& out);

    public:
        explicit Common(String header);
        ~Common() override = default;

        void write(const PathUtil& output);

        void addForward(const String &fwd);
        void addInclude(const String& inc);

    };

}  // namespace MdDox::DoxApi
