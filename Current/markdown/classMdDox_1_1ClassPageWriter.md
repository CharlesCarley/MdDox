<!DOCTYPE html>
<html>
<head>
</head>
<body>
<a id="classpagewriter"></a>
<h1>ClassPageWriter</h1>
<a id="classMdDox_1_1ClassPageWriter"></a>
<a id="mddoxclasspagewriter"></a>
<a href="https://github.com/CharlesCarley/MdDoc">~</a>
<a href="indexpage.md#main">Main</a>
<span class="inline-text">/</span>
<a href="indexpage.md#index">Index</a>
<span class="inline-text">::</span>
<a href="namespaceMdDox.md#mddox">MdDox</a>
<span class="inline-text">::</span>
<span class="bold-text"><b>ClassPageWriter</b></span>
<br/>
<br/>
<a id="derived-from"></a>
<h4>Derived From</h4>
<span class="icon-list-item"><a href="classMdDox_1_1PageWriter.md#pagewriter" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">PageWriter</span>
</a>
</span>
<br/>
<a id="private-members"></a>
<h2>Private Members</h2>
<span class="icon-list-item"><a href="#_baseinit" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">_baseInit</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_deriveinit" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">_deriveInit</span>
</a>
</span>
<br/>
<a id="private-methods"></a>
<h2>Private Methods</h2>
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
<span class="icon-list-item"><a href="#presortquery" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">preSortQuery</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#notifybriefdescription" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">notifyBriefDescription</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#notifydetaildescriptionheading" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">notifyDetailDescriptionHeading</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#notifydetaildescription" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">notifyDetailDescription</span>
</a>
</span>
<br/>
<a id="public-methods"></a>
<h2>Public Methods</h2>
<span class="icon-list-item"><a href="#classpagewriter" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#~classpagewriter" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">~ClassPageWriter</span>
</a>
</span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.h#L34" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.h</span>
</a>
</span>
<br/>
<span class="bold-text"><b>ClassPageWriter.visitedInheritanceGraph</b></span>
<br/>
<span class="bold-text"><b>ClassPageWriter.visitedCollaborationGraph</b></span>
<br/>
<a id="_baseinit"></a>
<h2>_baseInit</h2>
<span class="inline-text">bool</span>
<span class="bold-text"><b>_baseInit</b></span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.h#L36" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.h</span>
</a>
</span>
<br/>
<br/>
<a id="_deriveinit"></a>
<h2>_deriveInit</h2>
<span class="inline-text">bool</span>
<span class="bold-text"><b>_deriveInit</b></span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.h#L37" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.h</span>
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
<a href="classMdDox_1_1Doxygen_1_1CompoundRefQuery.md#doxygencompoundrefquery">Doxygen::CompoundRefQuery</a>
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
<span class="inline-text">Const reference to the CompoundRefQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.h#L40" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.cpp#L47" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visitedderivedcompoundref"></a>
<h2>visitedDerivedCompoundRef</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedDerivedCompoundRef</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1CompoundRefQuery.md#doxygencompoundrefquery">Doxygen::CompoundRefQuery</a>
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
<span class="inline-text">Const reference to the CompoundRefQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.h#L42" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.cpp#L61" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visitedincludes"></a>
<h2>visitedIncludes</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedIncludes</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1IncQuery.md#doxygenincquery">Doxygen::IncQuery</a>
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
<span class="inline-text">Const reference to the IncQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.h#L44" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.cpp#L75" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visitedincludedby"></a>
<h2>visitedIncludedBy</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedIncludedBy</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1IncQuery.md#doxygenincquery">Doxygen::IncQuery</a>
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
<span class="inline-text">Const reference to the IncQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.h#L46" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.cpp#L81" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visitedinnerdir"></a>
<h2>visitedInnerDir</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedInnerDir</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1RefQuery.md#doxygenrefquery">Doxygen::RefQuery</a>
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
<span class="inline-text">Const reference to the RefQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.h#L48" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.cpp#L87" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visitedinnerfile"></a>
<h2>visitedInnerFile</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedInnerFile</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1RefQuery.md#doxygenrefquery">Doxygen::RefQuery</a>
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
<span class="inline-text">Const reference to the RefQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.h#L50" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.cpp#L93" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visitedinnerclass"></a>
<h2>visitedInnerClass</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedInnerClass</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1RefQuery.md#doxygenrefquery">Doxygen::RefQuery</a>
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
<span class="inline-text">Const reference to the RefQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.h#L52" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.cpp#L99" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visitedinnernamespace"></a>
<h2>visitedInnerNamespace</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedInnerNamespace</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1RefQuery.md#doxygenrefquery">Doxygen::RefQuery</a>
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
<span class="inline-text">Const reference to the RefQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.h#L54" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.cpp#L105" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visitedinnerpage"></a>
<h2>visitedInnerPage</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedInnerPage</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1RefQuery.md#doxygenrefquery">Doxygen::RefQuery</a>
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
<span class="inline-text">Const reference to the RefQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.h#L56" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.cpp#L111" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visitedinnergroup"></a>
<h2>visitedInnerGroup</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedInnerGroup</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1RefQuery.md#doxygenrefquery">Doxygen::RefQuery</a>
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
<span class="inline-text">Const reference to the RefQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.h#L58" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.cpp#L117" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visitedincdepgraph"></a>
<h2>visitedIncDepGraph</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedIncDepGraph</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1GraphQuery.md#doxygengraphquery">Doxygen::GraphQuery</a>
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
<span class="inline-text">Const reference to the GraphQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.h#L60" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.cpp#L123" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visitedinvincdepgraph"></a>
<h2>visitedInvIncDepGraph</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedInvIncDepGraph</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1GraphQuery.md#doxygengraphquery">Doxygen::GraphQuery</a>
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
<span class="inline-text">Const reference to the GraphQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.h#L62" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.cpp#L129" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visitedtemplateparamlist"></a>
<h2>visitedTemplateParamList</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedTemplateParamList</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1TemplateParamListQuery.md#doxygentemplateparamlistquery">Doxygen::TemplateParamListQuery</a>
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
<span class="inline-text">Const reference to the TemplateParamListQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.h#L64" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.cpp#L135" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visitedinheritancegraph"></a>
<h2>visitedInheritanceGraph</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedInheritanceGraph</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1GraphQuery.md#doxygengraphquery">Doxygen::GraphQuery</a>
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
<span class="inline-text">Const reference to the GraphQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.h#L66" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.cpp#L141" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visitedcollaborationgraph"></a>
<h2>visitedCollaborationGraph</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedCollaborationGraph</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1GraphQuery.md#doxygengraphquery">Doxygen::GraphQuery</a>
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
<span class="inline-text">Const reference to the GraphQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.h#L68" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.cpp#L147" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.cpp</span>
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
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.h#L70" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.cpp#L153" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visitedlocation"></a>
<h2>visitedLocation</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedLocation</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1LocationQuery.md#doxygenlocationquery">Doxygen::LocationQuery</a>
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
<span class="inline-text">Const reference to the LocationQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.h#L72" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.cpp#L159" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="visitedlistofallmembers"></a>
<h2>visitedListOfAllMembers</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedListOfAllMembers</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1ListOfAllMembersQuery.md#doxygenlistofallmembersquery">Doxygen::ListOfAllMembersQuery</a>
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
<span class="inline-text">Const reference to the ListOfAllMembersQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.h#L74" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.cpp#L165" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
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
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.h#L76" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.cpp#L42" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.cpp</span>
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
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.h#L78" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.cpp#L171" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
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
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.h#L80" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.cpp#L177" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="presortquery"></a>
<h2>preSortQuery</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>preSortQuery</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1CompoundDefQuery.md#doxygencompounddefquery">Doxygen::CompoundDefQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.h#L83" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.cpp#L193" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="notifybriefdescription"></a>
<h2>notifyBriefDescription</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>notifyBriefDescription</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1DescriptionQuery.md#doxygendescriptionquery">Doxygen::DescriptionQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.h#L85" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.cpp#L212" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="notifydetaildescriptionheading"></a>
<h2>notifyDetailDescriptionHeading</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>notifyDetailDescriptionHeading</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1DescriptionQuery.md#doxygendescriptionquery">Doxygen::DescriptionQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.h#L87" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.cpp#L183" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="notifydetaildescription"></a>
<h2>notifyDetailDescription</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>notifyDetailDescription</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1DescriptionQuery.md#doxygendescriptionquery">Doxygen::DescriptionQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.h#L89" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.cpp#L188" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<br/>
<a id="classpagewriter"></a>
<h2>ClassPageWriter</h2>
<span class="bold-text"><b>ClassPageWriter</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1DocumentWriter.md#documentwriter">DocumentWriter</a>
<span class="inline-text"> *</span>
<span class="inline-text">writer</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Reference.md#reference">Reference</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">ref</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1PathUtil.md#pathutil">PathUtil</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">out</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.h#L93" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.cpp#L35" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="~classpagewriter"></a>
<h2>~ClassPageWriter</h2>
<span class="bold-text"><b>~ClassPageWriter</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/ClassPageWriter.h#L95" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ClassPageWriter.h</span>
</a>
</span>
<br/>
<br/>
<br/>
<blockquote>
<img src="../images/debug24px.svg"/><span class="inline-text">The following sources were used to generate this page.</span>
<br/>
<span class="icon-list-item"><a href="../xml/classMdDox_1_1ClassPageWriter.xml#L1" class="icon-list-item"><img src="../images/lookInside24px.svg" class="icon-list-item"/><span class="icon-list-item">classMdDox_1_1ClassPageWriter.xml</span>
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