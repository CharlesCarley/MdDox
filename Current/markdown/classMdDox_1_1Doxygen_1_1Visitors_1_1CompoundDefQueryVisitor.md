<!DOCTYPE html>
<html>
<head>
</head>
<body>
<a id="compounddefqueryvisitor"></a>
<h1>CompoundDefQueryVisitor</h1>
<a id="classMdDox_1_1Doxygen_1_1Visitors_1_1CompoundDefQueryVisitor"></a>
<a id="mddoxdoxygenvisitorscompounddefqueryvisitor"></a>
<a href="https://github.com/CharlesCarley/MdDoc">~</a>
<a href="indexpage.md#main">Main</a>
<span class="inline-text">/</span>
<a href="indexpage.md#index">Index</a>
<span class="inline-text">::</span>
<a href="namespaceMdDox.md#mddox">MdDox</a>
<span class="inline-text">::</span>
<a href="namespaceMdDox_1_1Doxygen.md#doxygen">Doxygen</a>
<span class="inline-text">::</span>
<a href="namespaceMdDox_1_1Doxygen_1_1Visitors.md#visitors">Visitors</a>
<span class="inline-text">::</span>
<span class="bold-text"><b>CompoundDefQueryVisitor</b></span>
<br/>
<br/>
<a id="derived-by"></a>
<h4>Derived By</h4>
<span class="icon-list-item"><a href="classMdDox_1_1PageWriter.md#pagewriter" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">PageWriter</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1TableOfContents.md#tableofcontents" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">TableOfContents</span>
</a>
</span>
<br/>
<a id="public-methods"></a>
<h2>Public Methods</h2>
<span class="icon-list-item"><a href="#~compounddefqueryvisitor" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">~CompoundDefQueryVisitor</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedtext" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedText</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedbasecompoundref" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedBaseCompoundRef</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedderivedcompoundref" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedDerivedCompoundRef</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedincludes" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedIncludes</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedincludedby" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedIncludedBy</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedinnerdir" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedInnerDir</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedinnerfile" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedInnerFile</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedinnerclass" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedInnerClass</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedinnernamespace" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedInnerNamespace</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedinnerpage" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedInnerPage</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedinnergroup" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedInnerGroup</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedsectiondef" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedSectionDef</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedincdepgraph" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedIncDepGraph</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedinvincdepgraph" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedInvIncDepGraph</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedtemplateparamlist" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedTemplateParamList</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedbriefdescription" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedBriefDescription</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visiteddetaileddescription" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedDetailedDescription</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedinheritancegraph" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedInheritanceGraph</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedcollaborationgraph" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedCollaborationGraph</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedprogramlisting" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedProgramListing</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedlocation" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedLocation</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedlistofallmembers" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedListOfAllMembers</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedcompoundname" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedCompoundName</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedtitle" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedTitle</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedtableofcontents" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedTableOfContents</span>
</a>
</span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Tools/Doxygen/CompoundDefQuery.h#L35" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">CompoundDefQuery.h</span>
</a>
</span>
<br/>
<span class="bold-text"><b>ClassPageWriter.visitedInheritanceGraph</b></span>
<br/>
<a id="~compounddefqueryvisitor"></a>
<h2>~CompoundDefQueryVisitor</h2>
<span class="bold-text"><b>~CompoundDefQueryVisitor</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Tools/Doxygen/CompoundDefQuery.h#L37" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">CompoundDefQuery.h</span>
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
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Tools/Doxygen/CompoundDefQuery.h#L42" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">CompoundDefQuery.h</span>
</a>
</span>
<br/>
<br/>
<a id="visitedbasecompoundref"></a>
<h2>visitedBaseCompoundRef</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedBaseCompoundRef</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1CompoundRefQuery.md#compoundrefquery">CompoundRefQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>basecompoundref</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the </span>
<a href="classMdDox_1_1Doxygen_1_1CompoundRefQuery.md#compoundrefquery">CompoundRefQuery</a>
<span class="inline-text"> class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Tools/Doxygen/CompoundDefQuery.h#L47" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">CompoundDefQuery.h</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<br/>
<a id="visitedderivedcompoundref"></a>
<h2>visitedDerivedCompoundRef</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedDerivedCompoundRef</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1CompoundRefQuery.md#compoundrefquery">CompoundRefQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>derivedcompoundref</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the </span>
<a href="classMdDox_1_1Doxygen_1_1CompoundRefQuery.md#compoundrefquery">CompoundRefQuery</a>
<span class="inline-text"> class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Tools/Doxygen/CompoundDefQuery.h#L52" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">CompoundDefQuery.h</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<br/>
<a id="visitedincludes"></a>
<h2>visitedIncludes</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedIncludes</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1IncQuery.md#incquery">IncQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>includes</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the </span>
<a href="classMdDox_1_1Doxygen_1_1IncQuery.md#incquery">IncQuery</a>
<span class="inline-text"> class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Tools/Doxygen/CompoundDefQuery.h#L57" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">CompoundDefQuery.h</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<br/>
<a id="visitedincludedby"></a>
<h2>visitedIncludedBy</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedIncludedBy</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1IncQuery.md#incquery">IncQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>includedby</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the </span>
<a href="classMdDox_1_1Doxygen_1_1IncQuery.md#incquery">IncQuery</a>
<span class="inline-text"> class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Tools/Doxygen/CompoundDefQuery.h#L62" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">CompoundDefQuery.h</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<br/>
<a id="visitedinnerdir"></a>
<h2>visitedInnerDir</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedInnerDir</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1RefQuery.md#refquery">RefQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>innerdir</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the </span>
<a href="classMdDox_1_1Doxygen_1_1RefQuery.md#refquery">RefQuery</a>
<span class="inline-text"> class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Tools/Doxygen/CompoundDefQuery.h#L67" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">CompoundDefQuery.h</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<br/>
<a id="visitedinnerfile"></a>
<h2>visitedInnerFile</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedInnerFile</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1RefQuery.md#refquery">RefQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>innerfile</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the </span>
<a href="classMdDox_1_1Doxygen_1_1RefQuery.md#refquery">RefQuery</a>
<span class="inline-text"> class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Tools/Doxygen/CompoundDefQuery.h#L72" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">CompoundDefQuery.h</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<br/>
<a id="visitedinnerclass"></a>
<h2>visitedInnerClass</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedInnerClass</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1RefQuery.md#refquery">RefQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>innerclass</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the </span>
<a href="classMdDox_1_1Doxygen_1_1RefQuery.md#refquery">RefQuery</a>
<span class="inline-text"> class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Tools/Doxygen/CompoundDefQuery.h#L77" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">CompoundDefQuery.h</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<br/>
<a id="visitedinnernamespace"></a>
<h2>visitedInnerNamespace</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedInnerNamespace</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1RefQuery.md#refquery">RefQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>innernamespace</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the </span>
<a href="classMdDox_1_1Doxygen_1_1RefQuery.md#refquery">RefQuery</a>
<span class="inline-text"> class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Tools/Doxygen/CompoundDefQuery.h#L82" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">CompoundDefQuery.h</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<br/>
<a id="visitedinnerpage"></a>
<h2>visitedInnerPage</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedInnerPage</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1RefQuery.md#refquery">RefQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>innerpage</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the </span>
<a href="classMdDox_1_1Doxygen_1_1RefQuery.md#refquery">RefQuery</a>
<span class="inline-text"> class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Tools/Doxygen/CompoundDefQuery.h#L87" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">CompoundDefQuery.h</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<br/>
<a id="visitedinnergroup"></a>
<h2>visitedInnerGroup</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedInnerGroup</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1RefQuery.md#refquery">RefQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>innergroup</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the </span>
<a href="classMdDox_1_1Doxygen_1_1RefQuery.md#refquery">RefQuery</a>
<span class="inline-text"> class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Tools/Doxygen/CompoundDefQuery.h#L92" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">CompoundDefQuery.h</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<br/>
<a id="visitedsectiondef"></a>
<h2>visitedSectionDef</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedSectionDef</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1SectionDefQuery.md#sectiondefquery">SectionDefQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>sectiondef</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the </span>
<a href="classMdDox_1_1Doxygen_1_1SectionDefQuery.md#sectiondefquery">SectionDefQuery</a>
<span class="inline-text"> class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Tools/Doxygen/CompoundDefQuery.h#L97" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">CompoundDefQuery.h</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<br/>
<a id="visitedincdepgraph"></a>
<h2>visitedIncDepGraph</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedIncDepGraph</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1GraphQuery.md#graphquery">GraphQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>incdepgraph</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the </span>
<a href="classMdDox_1_1Doxygen_1_1GraphQuery.md#graphquery">GraphQuery</a>
<span class="inline-text"> class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Tools/Doxygen/CompoundDefQuery.h#L102" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">CompoundDefQuery.h</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<br/>
<a id="visitedinvincdepgraph"></a>
<h2>visitedInvIncDepGraph</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedInvIncDepGraph</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1GraphQuery.md#graphquery">GraphQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>invincdepgraph</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the </span>
<a href="classMdDox_1_1Doxygen_1_1GraphQuery.md#graphquery">GraphQuery</a>
<span class="inline-text"> class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Tools/Doxygen/CompoundDefQuery.h#L107" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">CompoundDefQuery.h</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<br/>
<a id="visitedtemplateparamlist"></a>
<h2>visitedTemplateParamList</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedTemplateParamList</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1TemplateParamListQuery.md#templateparamlistquery">TemplateParamListQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>templateparamlist</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the </span>
<a href="classMdDox_1_1Doxygen_1_1TemplateParamListQuery.md#templateparamlistquery">TemplateParamListQuery</a>
<span class="inline-text"> class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Tools/Doxygen/CompoundDefQuery.h#L112" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">CompoundDefQuery.h</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<br/>
<a id="visitedbriefdescription"></a>
<h2>visitedBriefDescription</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedBriefDescription</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1DescriptionQuery.md#descriptionquery">DescriptionQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>briefdescription</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the </span>
<a href="classMdDox_1_1Doxygen_1_1DescriptionQuery.md#descriptionquery">DescriptionQuery</a>
<span class="inline-text"> class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Tools/Doxygen/CompoundDefQuery.h#L117" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">CompoundDefQuery.h</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<br/>
<a id="visiteddetaileddescription"></a>
<h2>visitedDetailedDescription</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedDetailedDescription</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1DescriptionQuery.md#descriptionquery">DescriptionQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>detaileddescription</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the </span>
<a href="classMdDox_1_1Doxygen_1_1DescriptionQuery.md#descriptionquery">DescriptionQuery</a>
<span class="inline-text"> class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Tools/Doxygen/CompoundDefQuery.h#L122" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">CompoundDefQuery.h</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<br/>
<a id="visitedinheritancegraph"></a>
<h2>visitedInheritanceGraph</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedInheritanceGraph</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1GraphQuery.md#graphquery">GraphQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>inheritancegraph</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the </span>
<a href="classMdDox_1_1Doxygen_1_1GraphQuery.md#graphquery">GraphQuery</a>
<span class="inline-text"> class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Tools/Doxygen/CompoundDefQuery.h#L127" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">CompoundDefQuery.h</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<br/>
<a id="visitedcollaborationgraph"></a>
<h2>visitedCollaborationGraph</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedCollaborationGraph</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1GraphQuery.md#graphquery">GraphQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>collaborationgraph</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the </span>
<a href="classMdDox_1_1Doxygen_1_1GraphQuery.md#graphquery">GraphQuery</a>
<span class="inline-text"> class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Tools/Doxygen/CompoundDefQuery.h#L132" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">CompoundDefQuery.h</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<br/>
<a id="visitedprogramlisting"></a>
<h2>visitedProgramListing</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedProgramListing</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1ListingQuery.md#listingquery">ListingQuery</a>
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
<span class="inline-text">Const reference to the </span>
<a href="classMdDox_1_1Doxygen_1_1ListingQuery.md#listingquery">ListingQuery</a>
<span class="inline-text"> class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Tools/Doxygen/CompoundDefQuery.h#L137" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">CompoundDefQuery.h</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<br/>
<a id="visitedlocation"></a>
<h2>visitedLocation</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedLocation</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1LocationQuery.md#locationquery">LocationQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>location</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the </span>
<a href="classMdDox_1_1Doxygen_1_1LocationQuery.md#locationquery">LocationQuery</a>
<span class="inline-text"> class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Tools/Doxygen/CompoundDefQuery.h#L142" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">CompoundDefQuery.h</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<br/>
<a id="visitedlistofallmembers"></a>
<h2>visitedListOfAllMembers</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedListOfAllMembers</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1ListOfAllMembersQuery.md#listofallmembersquery">ListOfAllMembersQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>listofallmembers</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the </span>
<a href="classMdDox_1_1Doxygen_1_1ListOfAllMembersQuery.md#listofallmembersquery">ListOfAllMembersQuery</a>
<span class="inline-text"> class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Tools/Doxygen/CompoundDefQuery.h#L147" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">CompoundDefQuery.h</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<br/>
<a id="visitedcompoundname"></a>
<h2>visitedCompoundName</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedCompoundName</b></span>
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
<span class="bold-text"><b>compoundname</b></span>
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
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Tools/Doxygen/CompoundDefQuery.h#L152" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">CompoundDefQuery.h</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<br/>
<a id="visitedtitle"></a>
<h2>visitedTitle</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedTitle</b></span>
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
<span class="bold-text"><b>title</b></span>
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
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Tools/Doxygen/CompoundDefQuery.h#L157" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">CompoundDefQuery.h</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<br/>
<a id="visitedtableofcontents"></a>
<h2>visitedTableOfContents</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedTableOfContents</b></span>
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
<span class="bold-text"><b>tableofcontents</b></span>
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
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Tools/Doxygen/CompoundDefQuery.h#L162" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">CompoundDefQuery.h</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplementedBy</b></span>
<br/>
<br/>
<br/>
<blockquote>
<img src="../images/debug24px.svg"/><span class="inline-text">The following sources were used to generate this page.</span>
<br/>
<span class="icon-list-item"><a href="../xml/classMdDox_1_1Doxygen_1_1Visitors_1_1CompoundDefQueryVisitor.xml#L1" class="icon-list-item"><img src="../images/lookInside24px.svg" class="icon-list-item"/><span class="icon-list-item">classMdDox_1_1Doxygen_1_1Visitors_1_1CompoundDefQueryVisitor.xml</span>
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
