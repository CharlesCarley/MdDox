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

The main idea for this library is to provide the means to place a node inside
a shell or scaffolding. The %GenApi namespace allows this by generating a
source library off of the compound schema file provided by %Doxygen.
\br

By design, the program will not work out of the box. It needs to be flexible
enough to allow the renaming of types in the schema without modifying the
actual element names. In order to do this, it needs to output a few extra files
before generating the API.
\br

The command line provides the means to extract a 1:1 mapping of all the names.
It stores the names in individual resource files that the program uses during
runtime.
\br

\dot
digraph {
    layout  = dot;
    bgcolor = "${graph-bg}";
    rankdir = "LR";
    labelloc= "t"
    label   = "Functional Structure"
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
	]
    edge [
		arrowsize = "${arrow-size}"
		color     = "${grey-table-edge}"
		fontname  = "${font-family}"
		fontcolor = "${text}"
		fontsize  = "${font-size}"
	]

	subgraph cluster_a{
	    label       = ""
		peripheries = 0
	    bgcolor     = none

		Application[label=<
			<table border="0" cellspacing="0" cellpadding="4" bgcolor="${grey-table-0}">
				<tr>
				<td align="center" port="Title"><font color="${bold}"><b>Application</b></font></td>
				</tr>
				<tr><td align="left">
			    <table border="0" cellspacing="3" cellpadding="4" bgcolor="${grey-table-1}">
				<tr><td align="center">Setup</td></tr>
				<tr><td align="left" border="1" port="C">-c</td></tr>
				<tr><td align="left" border="1" port="G">-g</td></tr>
				<tr><td align="left" border="1" port="E">-e</td></tr>
				<tr><td align="left" border="1" port="S">-s</td></tr>
				<tr><td align="left" border="1" port="N">-n</td></tr>
				<tr><td align="center">Generate</td></tr>
				<tr><td align="left" border="1" port="I">-i</td></tr>
				<tr><td align="left" border="1" port="O">-o</td></tr>
				</table>
				</td></tr>
			</table>
		>];

	    Database[label=<
			<table border="0" cellspacing="0" cellpadding="4" bgcolor="${grey-table-0}">
				<tr><td align="center" port="Title"><font color="${bold}"><b>Swap Database</b></font></td></tr>
				<tr><td align="left">
			    <table border="0" cellspacing="3" cellpadding="4" bgcolor="${grey-table-1}">
				<tr><td align="left" border="1" port="C">Complex.txt</td></tr>
				<tr><td align="left" border="1" port="G">Groups.txt</td></tr>
				<tr><td align="left" border="1" port="E">Elements.xt</td></tr>
				<tr><td align="left" border="1" port="S">Simple.txt</td></tr>
				<tr><td align="left" border="1" port="N">Enums.txt</td></tr>
				<tr><td align="left" border="1" port="I">input.xsd</td></tr>
				</table>
				</td></tr>
			</table>
		>];
		
		Index[label=<
		<table border="0" cellspacing="0" cellpadding="4" bgcolor="${grey-table-0}">
			<tr><td align="center" port="Title"><font color="${bold}"><b>Index</b></font></td></tr>
			<tr><td align="left">
			<table border="0" cellspacing="3" cellpadding="4" bgcolor="${grey-table-1}">
			<tr><td align="left" border="1" port="C">xsd:complexType</td></tr>
			<tr><td align="left" border="1" port="G">xsd:group</td></tr>
			<tr><td align="left" border="1" port="E">xsd:element</td></tr>
			<tr><td align="left" border="1" port="S">xsd:simpleType</td></tr>
			<tr><td align="left" border="1" port="N">xsd:enumeration</td></tr>
			<tr><td align="left" border="1" port="I">input.xsd</td></tr>
			</table>
			</td></tr>
		</table>
		>];

        Class[shape=circle style="filled,solid"]
        Enum[shape=circle style="filled,solid"]

		Index:C->Class
		Index:G->Class
		Index:E->Class
		Index:S->Enum
		Index:N->Enum
				
	}

	subgraph cluster_b{
	    label       = ""
		peripheries = 0
		Input[label=<
		<table border="1" cellspacing="0" cellpadding="0" bgcolor="${grey-table-0}">
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
\br

For instance,
\copydetails MdDox::Doxygen::CompoundDefQuery

The name attributes are substituted through the respective swap file. The application
will use the substitutions to produce the class \ref_class{Doxygen::CompoundDefQuery}
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
