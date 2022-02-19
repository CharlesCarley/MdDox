/*! 
 \page Site Site Layout

<ul>
<li> \ref MP </li>
<li> \ref Index</li>
<li> \ref NI </li>
<li> \ref DI </li>
<li> \ref CI </li>
<li> \ref PI </li>
</ul>

 \section Details

 \dot
digraph {
    bgcolor = none;
    rankdir = "TB";
    layout  = dot;
    
    node [
		shape     = none
		fontname  = "${font-family}"
		fontcolor = "${text}"
		fontsize  = "${font-size}"
	]
    edge [
		arrowsize = "${arrow-size}"
		color     = "${edge-grey}"
		fontname  = "${font-family}"
		fontcolor = "${text}"
		fontsize  = "${font-size}"
	]
	
	MainPage[label=<
		<table border="${table-border-size}" cellspacing="0" cellpadding="4" bgcolor="${table-bg}">
			<tr><td align="center" port="Title"><font color="${bold}"><b>MainPage</b></font></td></tr>
			<tr><td align="left">Brief</td></tr>
			<tr><td align="left">Detail</td></tr>
		</table>
	>];


	Index[label=<
		<table border="${table-border-size}" cellspacing="0" cellpadding="4" bgcolor="${table-bg}">
			<tr><td align="left"><font color="${bold}"><b>Index</b></font></td></tr>
			<tr><td align="left" port="Description">Description</td></tr>
			<tr><td>
			<table border="${table-border-size}" cellspacing="0" cellpadding="4" bgcolor="${table-bg}">
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

	MainPage:Title->Index:Description;


	ClassIndex[label=<
		<table border="${table-border-size}" cellspacing="0" cellpadding="4" bgcolor="${table-bg}">
			<tr><td align="left" port="Title"><font color="${bold}"><b>Index</b></font></td></tr>
			<tr><td>
			<table border="${table-border-size}" cellspacing="0" cellpadding="4" bgcolor="${table-bg}">
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
		<table border="${table-border-size}" cellspacing="0" cellpadding="4" bgcolor="${table-bg}">
			<tr><td align="left" port="Title"><font color="${bold}"><b>Index</b></font></td></tr>
			<tr><td>
			<table border="${table-border-size}" cellspacing="0" cellpadding="4" bgcolor="${table-bg}">
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
		<table border="${table-border-size}" cellspacing="0" cellpadding="4" bgcolor="${table-bg}">
			<tr><td align="left" port="Title"><font color="${bold}"><b>Index</b></font></td></tr>
			<tr><td>
			<table border="${table-border-size}" cellspacing="0" cellpadding="4" bgcolor="${table-bg}">
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
		<table border="${table-border-size}" cellspacing="0" cellpadding="4" bgcolor="${table-bg}">
			<tr><td align="left" port="Title"><font color="${bold}"><b>Index</b></font></td></tr>
			<tr><td>
			<table border="${table-border-size}" cellspacing="0" cellpadding="4" bgcolor="${table-bg}">
			<tr><td align="center"><font color="${bold}"><b>Contents (A-Z)</b></font></td></tr>
			<tr><td align="left">Dir[0]</td></tr>
			<tr><td align="left">Dir[1]</td></tr>
			<tr><td align="left" port="Item">Dir[n]</td></tr>
			</table>
			</td></tr>
		</table>
	>];

	Index:Directory->DirectoryIndex:Title;

	{rank=same Index DirectoryIndex}

	ClassIndex:Item->ClassPage;
	DirectoryIndex:Item->DirectoryPage;
	PageIndex:Item->GenericPage;
	NamespaceIndex:Item->NamespacePage;

}
 \enddot



 \subsection MP Main Page


Main page is generated by Doxygen as indexpage.xml. It needs to be defined 
somewhere in the project's source code <tt>\\mainpage</tt>

 \subsection Index

Index implements a project wide table of contents. It is sorted by pages, 
directories, namespaces, and classes. 



 \subsection NI Namespace Index

 The namespace index is defined in \c namespace_index. It contains a List of all 
 namespaces defined in the current index.xml.

 \subsection CI Class Index

The class index is defined in \c class_index. It contains a List of all 
classes defined in the current index.xml.

 \subsection PI Page Index

The page index is defined in \c page_index. It contains a List of all 
pages defined in the current index.xml.


 \subsection DI Directory Index

The directory index is defined in \c directory_index. It contains a List of all 
top level directories in the current project*. 





<em>*project refers to the current index.xml file.</em>



*/

