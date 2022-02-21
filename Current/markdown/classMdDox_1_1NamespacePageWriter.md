<a id="namespacepagewriter"></a>
<h1>NamespacePageWriter</h1>
<a id="classMdDox_1_1NamespacePageWriter"></a>
<a href="https://github.com/CharlesCarley/MdDox.md">~</a>
<a href="indexpage.md#mddox">MdDox</a>
<span class="inline-text">/</span>
<a href="index.md#index">Index</a>
<span class="inline-text">/</span>
<a href="namespaceMdDox.md#mddox">MdDox</a>
<span class="inline-text">::</span>
<span class="bold-text"><b>NamespacePageWriter</b></span>
<br/>
<br/>
<a id="derived-from"></a>
<h4>Derived From</h4>
<div class="icon-link">
<img src="../images/class.svg"/><a href="classMdDox_1_1PageWriter.md#mddoxpagewriter">MdDox::PageWriter</a>
</div>
<img src="../images/dot/internal-diagram-118.dot.svg"/><br/>
<a id="private-members"></a>
<h2>Private Members</h2>
<span class="icon-list-item"><a href="#_classheading" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_classHeading</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_namespaceheading" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_namespaceHeading</span>
</a>
</span>
<br/>
<a id="private-methods"></a>
<h2>Private Methods</h2>
<span class="icon-list-item"><a href="#notifybriefdescription" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">notifyBriefDescription</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#notifydetaildescriptionheading" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">notifyDetailDescriptionHeading</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#presortquery" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">preSortQuery</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedbasecompoundref" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">visitedBaseCompoundRef</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedcollaborationgraph" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">visitedCollaborationGraph</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedcompoundname" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">visitedCompoundName</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedderivedcompoundref" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">visitedDerivedCompoundRef</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedincdepgraph" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">visitedIncDepGraph</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedincludedby" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">visitedIncludedBy</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedincludes" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">visitedIncludes</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedinheritancegraph" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">visitedInheritanceGraph</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedinnerclass" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">visitedInnerClass</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedinnerdir" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">visitedInnerDir</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedinnerfile" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">visitedInnerFile</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedinnergroup" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">visitedInnerGroup</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedinnernamespace" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">visitedInnerNamespace</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedinnerpage" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">visitedInnerPage</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedinvincdepgraph" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">visitedInvIncDepGraph</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedlistofallmembers" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">visitedListOfAllMembers</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedlocation" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">visitedLocation</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedprogramlisting" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">visitedProgramListing</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedtableofcontents" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">visitedTableOfContents</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedtemplateparamlist" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">visitedTemplateParamList</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedtitle" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">visitedTitle</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#writetableofcontents" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">writeTableOfContents</span>
</a>
</span>
<br/>
<a id="public-methods"></a>
<h2>Public Methods</h2>
<span class="icon-list-item"><a href="#namespacepagewriter" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#~namespacepagewriter" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">~NamespacePageWriter</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.h#L33" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.h</span>
</a>
</span>
<br/>
<a id="_classheading"></a>
<h2>_classHeading</h2>
<span class="inline-text">bool</span>
<span class="bold-text"><b>_classHeading</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.h#L36" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.h</span>
</a>
</span>
<br/>
<br/>
<a id="_namespaceheading"></a>
<h2>_namespaceHeading</h2>
<span class="inline-text">bool</span>
<span class="bold-text"><b>_namespaceHeading</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.h#L35" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.h</span>
</a>
</span>
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
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.h#L84" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.cpp#L256" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.cpp</span>
</a>
</span>
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
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.h#L85" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.cpp#L261" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.cpp</span>
</a>
</span>
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
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.h#L82" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.cpp#L317" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.cpp</span>
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
<a id="details"></a>
<h4>Details</h4>
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
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.h#L44" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.cpp#L162" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.cpp</span>
</a>
</span>
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
<a id="details"></a>
<h4>Details</h4>
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
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.h#L68" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.cpp#L202" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.cpp</span>
</a>
</span>
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
<a id="details"></a>
<h4>Details</h4>
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
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.h#L42" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.cpp#L127" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.cpp</span>
</a>
</span>
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
<a id="details"></a>
<h4>Details</h4>
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
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.h#L46" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.cpp#L167" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.cpp</span>
</a>
</span>
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
<a id="details"></a>
<h4>Details</h4>
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
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.h#L60" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.cpp#L182" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.cpp</span>
</a>
</span>
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
<a id="details"></a>
<h4>Details</h4>
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
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.h#L50" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.cpp#L177" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.cpp</span>
</a>
</span>
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
<a id="details"></a>
<h4>Details</h4>
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
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.h#L48" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.cpp#L172" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.cpp</span>
</a>
</span>
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
<a id="details"></a>
<h4>Details</h4>
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
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.h#L66" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.cpp#L197" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.cpp</span>
</a>
</span>
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
<a id="details"></a>
<h4>Details</h4>
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
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.h#L38" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.cpp#L132" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.cpp</span>
</a>
</span>
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
<a id="details"></a>
<h4>Details</h4>
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
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.h#L52" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.cpp#L236" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.cpp</span>
</a>
</span>
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
<a id="details"></a>
<h4>Details</h4>
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
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.h#L54" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.cpp#L241" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.cpp</span>
</a>
</span>
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
<a id="details"></a>
<h4>Details</h4>
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
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.h#L58" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.cpp#L251" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.cpp</span>
</a>
</span>
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
<a id="details"></a>
<h4>Details</h4>
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
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.h#L40" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.cpp#L147" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.cpp</span>
</a>
</span>
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
<a id="details"></a>
<h4>Details</h4>
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
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.h#L56" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.cpp#L246" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.cpp</span>
</a>
</span>
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
<a id="details"></a>
<h4>Details</h4>
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
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.h#L62" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.cpp#L187" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.cpp</span>
</a>
</span>
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
<a id="details"></a>
<h4>Details</h4>
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
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.h#L74" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.cpp#L221" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.cpp</span>
</a>
</span>
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
<a id="details"></a>
<h4>Details</h4>
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
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.h#L72" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.cpp#L212" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.cpp</span>
</a>
</span>
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
<a id="details"></a>
<h4>Details</h4>
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
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.h#L70" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.cpp#L207" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.cpp</span>
</a>
</span>
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
<a id="details"></a>
<h4>Details</h4>
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
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.h#L78" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.cpp#L231" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.cpp</span>
</a>
</span>
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
<a id="details"></a>
<h4>Details</h4>
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
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.h#L64" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.cpp#L192" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.cpp</span>
</a>
</span>
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
<a id="details"></a>
<h4>Details</h4>
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
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.h#L76" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.cpp#L226" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="writetableofcontents"></a>
<h2>writeTableOfContents</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>writeTableOfContents</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#xmlnode">Xml::Node</a>
<span class="inline-text"> *</span>
<span class="inline-text">compoundDef</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.h#L80" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.cpp#L266" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="namespacepagewriter"></a>
<h2>NamespacePageWriter</h2>
<span class="bold-text"><b>NamespacePageWriter</b></span>
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
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.h#L88" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.cpp#L120" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="~namespacepagewriter"></a>
<h2>~NamespacePageWriter</h2>
<span class="bold-text"><b>~NamespacePageWriter</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/NamespacePageWriter.h#L89" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">NamespacePageWriter.h</span>
</a>
</span>
<br/>
<br/>
</div>
</div>
</body>
</html>
