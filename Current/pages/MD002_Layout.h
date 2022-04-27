/*! 
 \page MD002 Site Layout
 
\brief Illustrates the structure of the generated site.


\br
\h1 Page Link Structure
\n

The following graph outlines the generated page structure.
\br

 \dot
digraph {
    layout  = dot;
    bgcolor = "${graph-bg}";
    rankdir = "TB";
    labelloc= "t"
    label   = "Page Structure"
    fontname= "${font-family}"
    fontsize= "${font-size}"

    
    node [
		shape     = rect
		style     = "filled,solid"
		fontname  = "${font-family}"
		fontsize  = "${font-size}"
		fontcolor = "${node-primary-text}"
		color     = "${node-primary-border}"
		fillcolor = "${node-primary}"
		margin    = "${node-primary-margin}"
	]
    edge [
		arrowsize = "${arrow-size}"
		fontname  = "${font-family}"
		fontsize  = "${font-size}"
		color     = "${node-primary-edge}"
		fontcolor = "${node-primary-text}"
	]
	
	MainPage[label=<
    <table border="${table-border-size}"
       cellspacing="0"
       cellpadding="4"
       bgcolor="${node-primary}">
	<tr>
	<td align="center" port="Title"><font color="${bold}"><b>MainPage</b></font></td>
	</tr>
	<tr><td>
		<table border="${table-border-size}"
	       cellspacing="0"
	       cellpadding="4"
	       bgcolor="${node-primary-inner}">
		<tr><td align="left">Brief</td></tr>
		<tr><td align="left">Detail</td></tr>
		</table>
	</td></tr>
</table>
	>];


	Index[label=<
<table border="${table-border-size}"
	   cellspacing="0"
	   cellpadding="4"
	   bgcolor="${node-primary}">

	<tr><td align="left"><font color="${bold}"><b>Site Index</b></font></td></tr>
	<tr><td>
		<table border="${table-border-size}"
	       cellspacing="0"
	       cellpadding="4"
	       bgcolor="${node-primary-inner}">
		<tr><td align="left" port="Description">Description</td></tr>
		</table>
	</td></tr>
	<tr><td>
	<table border="${table-border-size}"
	       cellspacing="0"
	       cellpadding="4"
	       bgcolor="${node-primary-inner}">
		<tr><td align="center"><font color="${bold}"><b>Contents</b></font></td></tr>
		<tr><td align="left" port="Directory">Directory</td></tr>
		<tr><td align="left" port="Class">Class</td></tr>
		<tr><td align="left" port="Page">Page</td></tr>
		<tr><td align="left" port="Namespace">Namespace</td></tr>
	</table>
	</td></tr>
</table>
	>];
	{rank=min Index MainPage}

	MainPage:Title->Index:Description[label="Provides"];

	ClassIndex[label=<
<table border="${table-border-size}"
       cellspacing="0"
       cellpadding="4"
       bgcolor="${node-primary}">
	<tr><td align="left" port="Title"><font color="${bold}"><b>Class Index</b></font></td></tr>
	<tr><td>
		<table border="${table-border-size}"
			   cellspacing="0"
			   cellpadding="4"
			   bgcolor="${node-primary-inner}">
			<tr><td align="center"><font color="${bold}"><b>Contents (A-Z)</b></font></td></tr>
			<tr><td align="left">Class[0]</td></tr>
			<tr><td align="left">Class[1]</td></tr>
			<tr><td align="left" port="Item">Class[n]</td></tr>
	</table>
	</td></tr>
</table>
	>];
	Index:Class->ClassIndex;


	NamespaceIndex[label=<
<table border="${table-border-size}"
       cellspacing="0"
       cellpadding="4"
       bgcolor="${node-primary}">
	<tr><td align="left" port="Title"><font color="${bold}"><b>Namespace Index</b></font></td></tr>
	<tr><td>
	<table border="${table-border-size}"
	       cellspacing="0"
	       cellpadding="4"
	       bgcolor="${node-primary-inner}">
		<tr><td align="center"><font color="${bold}"><b>Contents (A-Z)</b></font></td></tr>
		<tr><td align="left">Namespace[0]</td></tr>
		<tr><td align="left">Namespace[1]</td></tr>
		<tr><td align="left" port="Item">Namespace[n]</td></tr>
	</table>
	</td></tr>
</table>
	>];
	
	Index:Namespace->NamespaceIndex;

	PageIndex[label=<
<table border="${table-border-size}"
   cellspacing="0"
   cellpadding="4"
   bgcolor="${node-primary}">
<tr><td align="left" port="Title"><font color="${bold}"><b>Page Index</b></font></td></tr>
<tr><td>
<table border="${table-border-size}"
	   cellspacing="0"
	   cellpadding="4"
	   bgcolor="${node-primary-inner}">
	<tr><td align="center"><font color="${bold}"><b>Contents (A-Z)</b></font></td></tr>
	<tr><td align="left">Page[0]</td></tr>
	<tr><td align="left">Page[1]</td></tr>
	<tr><td align="left" port="ITem">Page[n]</td></tr>
</table>
</td></tr>
</table>
	>];

	Index:Page->PageIndex;


	DirectoryIndex[label=<
<table border="${table-border-size}"
	   cellspacing="0"
	   cellpadding="4"
	   bgcolor="${node-primary}">
	<tr><td align="left" port="Title"><font color="${bold}"><b>Directory Index</b></font></td></tr>
	<tr><td>
	<table border="${table-border-size}"
		   cellspacing="0"
		   cellpadding="4"
		   bgcolor="${node-primary-inner}">
		<tr><td align="center"><font color="${bold}"><b>Contents (A-Z)</b></font></td></tr>
		<tr><td align="left">Dir[0]</td></tr>
		<tr><td align="left">Dir[1]</td></tr>
		<tr><td align="left" port="Item">Dir[n]</td></tr>
	</table>
	</td></tr>
</table>
	>];

	Index:Directory->DirectoryIndex:Title;

	{ rank=same Index DirectoryIndex }

	ClassIndex:Item     -> ClassPage
	DirectoryIndex:Item -> DirectoryPage
	PageIndex:Item      -> GenericPage
	NamespaceIndex:Item -> NamespacePage
}
\enddot

\h3 Main Page

Main page is generated by Doxygen as indexpage.xml. It needs to be defined 
somewhere in the project's source code with the Doxygen special command
<tt>\\mainpage</tt>

\h3 Index

Index implements a project wide table of contents. It is sorted by page, 
directory, namespace, and then class index. 


\h3 Namespace Index

The namespace index is defined in the \c namespace_index
<tt>.{outputFileEx}</tt>. It contains a list of all namespaces defined in the
current project source.

\h3 Class Index

The class index is defined in \c class_index <tt>.{outputFileEx}</tt>. It
contains a list of all classes defined in the current project source.

\h3 Page Index

The page index is defined in \c page_index <tt>.{outputFileEx}</tt>. It
contains a list of all pages defined in the current project source.

\h3 Directory Index

The directory index is defined in \c directory_index
<tt>.{outputFileEx}</tt>. It contains a list of all top level directories in
the current project. 

*/