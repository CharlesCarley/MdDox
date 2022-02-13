<a id="sectiondefwriter"></a>
<h1>SectionDefWriter</h1>
<a id="classMdDox_1_1SectionDefWriter"></a>
<a id="mddoxsectiondefwriter"></a>
<a href="https://github.com/CharlesCarley/MdDox">~</a>
<a href="indexpage.md#main">Main</a>
<span class="inline-text">/</span>
<a href="index.md#index">Index</a>
<span class="inline-text">::</span>
<a href="namespaceMdDox.md#mddox">MdDox</a>
<span class="inline-text">::</span>
<span class="bold-text"><b>SectionDefWriter</b></span>
<br/>
<br/>
<a id="derived-from"></a>
<h4>Derived From</h4>
<span class="icon-list-item"><a href="classMdDox_1_1Doxygen_1_1Visitors_1_1SectionDefQueryVisitor.md#sectiondefqueryvisitor" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">SectionDefQueryVisitor</span>
</a>
</span>
<br/>
<img src="../images/internal-diagram-56.dot.svg"/><br/>
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
<span class="icon-list-item"><a href="#visitedmemberdef" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedMemberDef</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visiteddescription" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedDescription</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedheader" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedHeader</span>
</a>
</span>
<br/>
<a id="public-methods"></a>
<h2>Public Methods</h2>
<span class="icon-list-item"><a href="#sectiondefwriter" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">SectionDefWriter</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#write" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">write</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/SectionDefWriter.h#L30" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">SectionDefWriter.h</span>
</a>
</span>
<br/>
<a id="_writer"></a>
<h2>_writer</h2>
<a href="classMdDox_1_1DocumentWriter.md#documentwriter">DocumentWriter</a>
<span class="inline-text"> *</span>
<span class="bold-text"><b>_writer</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/SectionDefWriter.h#L32" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">SectionDefWriter.h</span>
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
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/SectionDefWriter.h#L33" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">SectionDefWriter.h</span>
</a>
</span>
<br/>
<br/>
<a id="_out"></a>
<h2>_out</h2>
<a href="namespaceMdDox.md#outputstringstream">OutputStringStream</a>
<span class="bold-text"><b>_out</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/SectionDefWriter.h#L34" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">SectionDefWriter.h</span>
</a>
</span>
<br/>
<br/>
<a id="visitedmemberdef"></a>
<h2>visitedMemberDef</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedMemberDef</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1MemberDefQuery.md#doxygenmemberdefquery">Doxygen::MemberDefQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h4>Details</h4>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>memberdef</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the MemberDefQuery class. </span>
</li>
</ul>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/SectionDefWriter.h#L36" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">SectionDefWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/SectionDefWriter.cpp#L36" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">SectionDefWriter.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="visiteddescription"></a>
<h2>visitedDescription</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedDescription</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1DescriptionQuery.md#doxygendescriptionquery">Doxygen::DescriptionQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h4>Details</h4>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>description</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the DescriptionQuery class. </span>
</li>
</ul>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/SectionDefWriter.h#L38" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">SectionDefWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/SectionDefWriter.cpp#L43" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">SectionDefWriter.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="visitedheader"></a>
<h2>visitedHeader</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedHeader</b></span>
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
<span class="bold-text"><b>header</b></span>
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
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/SectionDefWriter.h#L40" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">SectionDefWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/SectionDefWriter.cpp#L49" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">SectionDefWriter.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="sectiondefwriter"></a>
<h2>SectionDefWriter</h2>
<span class="bold-text"><b>SectionDefWriter</b></span>
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
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/SectionDefWriter.h#L43" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">SectionDefWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/SectionDefWriter.cpp#L30" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">SectionDefWriter.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="write"></a>
<h2>write</h2>
<span class="inline-text">bool</span>
<span class="bold-text"><b>write</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1SectionDefQuery.md#doxygensectiondefquery">Doxygen::SectionDefQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">sec</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1Doxygen_1_1SectionDefQuery.md#isvalid" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">isValid</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1Doxygen_1_1SectionDefQuery.md#visit" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visit</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="namespaceMdDox.md#syncstream" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">syncStream</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/SectionDefWriter.h#L45" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">SectionDefWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/SectionDefWriter.cpp#L55" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">SectionDefWriter.cpp</span>
</a>
</span>
<br/>
<br/>
<br/>
<blockquote>
<img src="../images/debug24px.svg"/><span class="inline-text">The following sources were used to generate this page.</span>
<br/>
<span class="icon-list-item"><a href="../xml/classMdDox_1_1SectionDefWriter.xml#L1" class="icon-list-item"><img src="../images/lookInside24px.svg" class="icon-list-item"/><span class="icon-list-item">classMdDox_1_1SectionDefWriter.xml</span>
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
