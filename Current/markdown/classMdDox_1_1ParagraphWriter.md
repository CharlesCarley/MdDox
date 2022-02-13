<!DOCTYPE html>
<html>
<head>
</head>
<body>
<a id="paragraphwriter"></a>
<h1>ParagraphWriter</h1>
<a id="classMdDox_1_1ParagraphWriter"></a>
<a id="mddoxparagraphwriter"></a>
<a href="https://github.com/CharlesCarley/MdDoc">~</a>
<a href="indexpage.md#main">Main</a>
<span class="inline-text">/</span>
<a href="indexpage.md#index">Index</a>
<span class="inline-text">::</span>
<a href="namespaceMdDox.md#mddox">MdDox</a>
<span class="inline-text">::</span>
<span class="bold-text"><b>ParagraphWriter</b></span>
<br/>
<br/>
<a id="derived-from"></a>
<h4>Derived From</h4>
<span class="icon-list-item"><a href="classMdDox_1_1Doxygen_1_1Visitors_1_1ParaQueryVisitor.md#paraqueryvisitor" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">ParaQueryVisitor</span>
</a>
</span>
<br/>
<a id="private-members"></a>
<h2>Private Members</h2>
<span class="icon-list-item"><a href="#_writer" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">_writer</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_stream" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">_stream</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_out" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">_out</span>
</a>
</span>
<br/>
<a id="private-methods"></a>
<h2>Private Methods</h2>
<span class="icon-list-item"><a href="#visitedtext" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedText</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedlinebreak" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedLineBreak</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedhruler" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedHRuler</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedpreformatted" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedPreFormatted</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedprogramlisting" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedProgramListing</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedorderedlist" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedOrderedList</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visiteditemizedlist" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedItemizedList</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedsimplesect" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedSimpleSect</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedtitle" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedTitle</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedvariablelist" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedVariableList</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedtable" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedTable</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedheading" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedHeading</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedimage" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedImage</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visiteddotfile" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedDotFile</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedtoclist" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedTocList</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedlanguage" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedLanguage</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedparameterlist" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedParameterList</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedblockquote" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedBlockQuote</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedparblock" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedParBlock</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedulink" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedULink</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedbold" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedBold</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedemphasis" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedEmphasis</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedcomputeroutput" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedComputerOutput</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedcenter" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedCenter</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedsmall" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedSmall</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedanchor" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedAnchor</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedref" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedRef</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedsect" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedSect</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedparagraph" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedParagraph</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedpart" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedPart</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedprop" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedProp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visiteddot" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedDot</span>
</a>
</span>
<br/>
<a id="public-methods"></a>
<h2>Public Methods</h2>
<span class="icon-list-item"><a href="#paragraphwriter" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#write" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">write</span>
</a>
</span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.h#L31" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.h</span>
</a>
</span>
<br/>
<span class="bold-text"><b>ClassPageWriter.visitedInheritanceGraph</b></span>
<br/>
<span class="bold-text"><b>ClassPageWriter.visitedCollaborationGraph</b></span>
<br/>
<a id="_writer"></a>
<h2>_writer</h2>
<a href="classMdDox_1_1DocumentWriter.md#documentwriter">DocumentWriter</a>
<span class="inline-text"> *</span>
<span class="bold-text"><b>_writer</b></span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.h#L33" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.h</span>
</a>
</span>
<br/>
<br/>
<a id="_stream"></a>
<h2>_stream</h2>
<a href="namespaceMdDox.md#ostream">OStream</a>
<span class="inline-text"> *</span>
<span class="bold-text"><b>_stream</b></span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.h#L34" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.h</span>
</a>
</span>
<br/>
<br/>
<a id="_out"></a>
<h2>_out</h2>
<a href="namespaceMdDox.md#outputstringstream">OutputStringStream</a>
<span class="bold-text"><b>_out</b></span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.h#L35" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.h</span>
</a>
</span>
<br/>
<br/>
<a id="visitedtext"></a>
<h2>visitedText</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedText</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Callback for every _text_node. </span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.h#L37" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.cpp#L57" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visitedlinebreak"></a>
<h2>visitedLineBreak</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedLineBreak</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1EmptyQuery.md#doxygenemptyquery">Doxygen::EmptyQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>linebreak</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the EmptyQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.h#L39" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.cpp#L62" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visitedhruler"></a>
<h2>visitedHRuler</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedHRuler</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1EmptyQuery.md#doxygenemptyquery">Doxygen::EmptyQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>hruler</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the EmptyQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.h#L41" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.cpp#L67" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visitedpreformatted"></a>
<h2>visitedPreFormatted</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedPreFormatted</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1MarkupQuery.md#doxygenmarkupquery">Doxygen::MarkupQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>preformatted</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the MarkupQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.h#L43" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.cpp#L72" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visitedprogramlisting"></a>
<h2>visitedProgramListing</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedProgramListing</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1ListingQuery.md#doxygenlistingquery">Doxygen::ListingQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>programlisting</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the ListingQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.h#L45" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.cpp#L78" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visitedorderedlist"></a>
<h2>visitedOrderedList</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedOrderedList</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1ListQuery.md#doxygenlistquery">Doxygen::ListQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>orderedlist</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the ListQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.h#L47" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.cpp#L133" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visiteditemizedlist"></a>
<h2>visitedItemizedList</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedItemizedList</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1ListQuery.md#doxygenlistquery">Doxygen::ListQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>itemizedlist</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the ListQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.h#L49" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.cpp#L138" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visitedsimplesect"></a>
<h2>visitedSimpleSect</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedSimpleSect</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1SimpleSectQuery.md#doxygensimplesectquery">Doxygen::SimpleSectQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>simplesect</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the SimpleSectQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.h#L51" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.cpp#L159" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visitedtitle"></a>
<h2>visitedTitle</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedTitle</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1TitleQuery.md#doxygentitlequery">Doxygen::TitleQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>title</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the TitleQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.h#L53" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.cpp#L229" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visitedvariablelist"></a>
<h2>visitedVariableList</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedVariableList</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1VariableListQuery.md#doxygenvariablelistquery">Doxygen::VariableListQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>variablelist</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the VariableListQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.h#L55" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.cpp#L235" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visitedtable"></a>
<h2>visitedTable</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedTable</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1TableQuery.md#doxygentablequery">Doxygen::TableQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>table</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the TableQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.h#L57" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.cpp#L241" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visitedheading"></a>
<h2>visitedHeading</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedHeading</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1HeadingQuery.md#doxygenheadingquery">Doxygen::HeadingQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>heading</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the HeadingQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.h#L59" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.cpp#L247" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visitedimage"></a>
<h2>visitedImage</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedImage</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1ImageQuery.md#doxygenimagequery">Doxygen::ImageQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>image</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the ImageQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.h#L61" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.cpp#L253" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visiteddotfile"></a>
<h2>visitedDotFile</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedDotFile</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1FileQuery.md#doxygenfilequery">Doxygen::FileQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>dotfile</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the FileQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.h#L63" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.cpp#L276" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visitedtoclist"></a>
<h2>visitedTocList</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedTocList</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1TocListQuery.md#doxygentoclistquery">Doxygen::TocListQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>toclist</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the TocListQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.h#L65" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.cpp#L282" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visitedlanguage"></a>
<h2>visitedLanguage</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedLanguage</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1LanguageQuery.md#doxygenlanguagequery">Doxygen::LanguageQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>language</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the LanguageQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.h#L67" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.cpp#L288" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visitedparameterlist"></a>
<h2>visitedParameterList</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedParameterList</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1ParamListQuery.md#doxygenparamlistquery">Doxygen::ParamListQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>parameterlist</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the ParamListQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.h#L69" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.cpp#L294" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visitedblockquote"></a>
<h2>visitedBlockQuote</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedBlockQuote</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1BlockQuoteQuery.md#doxygenblockquotequery">Doxygen::BlockQuoteQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>blockquote</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the BlockQuoteQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.h#L71" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.cpp#L300" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visitedparblock"></a>
<h2>visitedParBlock</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedParBlock</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1ParBlockQuery.md#doxygenparblockquery">Doxygen::ParBlockQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>parblock</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the ParBlockQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.h#L73" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.cpp#L316" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visitedulink"></a>
<h2>visitedULink</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedULink</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1UrlLinkQuery.md#doxygenurllinkquery">Doxygen::UrlLinkQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>ulink</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the UrlLinkQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.h#L75" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.cpp#L322" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visitedbold"></a>
<h2>visitedBold</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedBold</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1MarkupQuery.md#doxygenmarkupquery">Doxygen::MarkupQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>bold</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the MarkupQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.h#L77" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.cpp#L327" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visitedemphasis"></a>
<h2>visitedEmphasis</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedEmphasis</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1MarkupQuery.md#doxygenmarkupquery">Doxygen::MarkupQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>emphasis</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the MarkupQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.h#L79" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.cpp#L332" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visitedcomputeroutput"></a>
<h2>visitedComputerOutput</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedComputerOutput</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1MarkupQuery.md#doxygenmarkupquery">Doxygen::MarkupQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>computeroutput</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the MarkupQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.h#L81" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.cpp#L337" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visitedcenter"></a>
<h2>visitedCenter</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedCenter</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1MarkupQuery.md#doxygenmarkupquery">Doxygen::MarkupQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>center</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the MarkupQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.h#L83" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.cpp#L342" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visitedsmall"></a>
<h2>visitedSmall</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedSmall</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1MarkupQuery.md#doxygenmarkupquery">Doxygen::MarkupQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>small</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the MarkupQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.h#L85" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.cpp#L348" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visitedanchor"></a>
<h2>visitedAnchor</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedAnchor</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1AnchorQuery.md#doxygenanchorquery">Doxygen::AnchorQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>anchor</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the AnchorQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.h#L87" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.cpp#L354" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visitedref"></a>
<h2>visitedRef</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedRef</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1RefTextQuery.md#doxygenreftextquery">Doxygen::RefTextQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>ref</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the RefTextQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.h#L89" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.cpp#L360" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visitedsect"></a>
<h2>visitedSect</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedSect</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1EmptyQuery.md#doxygenemptyquery">Doxygen::EmptyQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>sect</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the EmptyQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.h#L91" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.cpp#L379" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visitedparagraph"></a>
<h2>visitedParagraph</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedParagraph</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1ParaQuery.md#doxygenparaquery">Doxygen::ParaQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>para</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the ParaQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.h#L93" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.cpp#L385" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visitedpart"></a>
<h2>visitedPart</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedPart</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1EmptyQuery.md#doxygenemptyquery">Doxygen::EmptyQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>part</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the EmptyQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.h#L95" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.cpp#L391" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visitedprop"></a>
<h2>visitedProp</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedProp</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1EmptyQuery.md#doxygenemptyquery">Doxygen::EmptyQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>prop</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the EmptyQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.h#L97" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.cpp#L397" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visiteddot"></a>
<h2>visitedDot</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedDot</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">text</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>dot</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>text</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the internal text. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.h#L99" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.cpp#L403" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="paragraphwriter"></a>
<h2>ParagraphWriter</h2>
<span class="bold-text"><b>ParagraphWriter</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1DocumentWriter.md#documentwriter">DocumentWriter</a>
<span class="inline-text"> *</span>
<span class="inline-text">writer</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="namespaceMdDox.md#ostream">OStream</a>
<span class="inline-text"> *</span>
<span class="inline-text">out</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.h#L102" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.cpp#L45" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="write"></a>
<h2>write</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>write</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1ParaQuery.md#doxygenparaquery">Doxygen::ParaQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">paragraph</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.h#L104" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ParagraphWriter.cpp#L51" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParagraphWriter.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="namespaceMdDox.md#syncstream" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">syncStream</span>
</a>
</span>
<br/>
<br/>
<br/>
<blockquote>
<img src="../images/debug24px.svg"/><span class="inline-text">The following sources were used to generate this page.</span>
<br/>
<span class="icon-list-item"><a href="../xml/classMdDox_1_1ParagraphWriter.xml#L1" class="icon-list-item"><img src="../images/lookInside24px.svg" class="icon-list-item"/><span class="icon-list-item">classMdDox_1_1ParagraphWriter.xml</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="../xml/compound.xsd#L1" class="icon-list-item"><img src="../images/lookInside24px.svg" class="icon-list-item"/><span class="icon-list-item">compound.xsd</span>
</a>
</span>
</blockquote>
</div>
</div>
</body>
</html>