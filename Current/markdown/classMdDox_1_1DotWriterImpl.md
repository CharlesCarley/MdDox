<a id="dotwriterimpl"></a>
<h1>DotWriterImpl</h1>
<a id="classMdDox_1_1DotWriterImpl"></a>
<a href="https://github.com/CharlesCarley/MdDox">~</a>
<a href="indexpage.md#mddox">MdDox</a>
<span class="inline-text">/</span>
<a href="index.md#toc">TOC</a>
<span class="inline-text">/</span>
<a href="namespaceMdDox.md#mddox">MdDox</a>
<span class="inline-text">::</span>
<span class="bold-text"><b>DotWriterImpl</b></span>
<br/>
<br/>
<a id="private-members"></a>
<h2>Private Members</h2>
<span class="icon-list-item"><a href="#_count" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_count</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_ids" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_ids</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_list" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_list</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_out" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_out</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_root" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_root</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_stream" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_stream</span>
</a>
</span>
<br/>
<a id="private-methods"></a>
<h2>Private Methods</h2>
<span class="icon-list-item"><a href="#cleanname" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">cleanName</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#lineto" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">lineTo</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#writenodedecl" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">writeNodeDecl</span>
</a>
</span>
<br/>
<a id="public-methods"></a>
<h2>Public Methods</h2>
<span class="icon-list-item"><a href="#dotwriterimpl" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">DotWriterImpl</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#writecontent" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">writeContent</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#writefooter" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">writeFooter</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#writeheader" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">writeHeader</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#writenode" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">writeNode</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/DotWriter.cpp#L35" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">DotWriter.cpp</span>
</a>
</span>
<br/>
<a id="_count"></a>
<h2>_count</h2>
<span class="inline-text">int</span>
<span class="bold-text"><b>_count</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/DotWriter.cpp#L42" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">DotWriter.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="_ids"></a>
<h2>_ids</h2>
<a href="namespaceMdDox.md#strintmap">StrIntMap</a>
<span class="bold-text"><b>_ids</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/DotWriter.cpp#L41" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">DotWriter.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="_list"></a>
<h2>_list</h2>
<a href="namespaceMdDox_1_1Xml.md#nodearray">NodeArray</a>
<span class="inline-text"> *</span>
<span class="bold-text"><b>_list</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/DotWriter.cpp#L38" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">DotWriter.cpp</span>
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
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/DotWriter.cpp#L40" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">DotWriter.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="_root"></a>
<h2>_root</h2>
<a href="classMdDox_1_1Xml_1_1Node.md#node">Node</a>
<span class="inline-text"> *</span>
<span class="bold-text"><b>_root</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/DotWriter.cpp#L37" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">DotWriter.cpp</span>
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
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/DotWriter.cpp#L39" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">DotWriter.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="cleanname"></a>
<h2>cleanName</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>cleanName</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">name</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Xml_1_1Node.md#node">Node</a>
<span class="inline-text"> *</span>
<span class="inline-text">nd</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/DotWriter.cpp#L44" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">DotWriter.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="lineto"></a>
<h2>lineTo</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>lineTo</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#node">Node</a>
<span class="inline-text"> *</span>
<span class="inline-text">a</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Xml_1_1Node.md#node">Node</a>
<span class="inline-text"> *</span>
<span class="inline-text">b</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/DotWriter.cpp#L76" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">DotWriter.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="writenodedecl"></a>
<h2>writeNodeDecl</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>writeNodeDecl</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#node">Node</a>
<span class="inline-text"> *</span>
<span class="inline-text">nd</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/DotWriter.cpp#L61" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">DotWriter.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="dotwriterimpl"></a>
<h2>DotWriterImpl</h2>
<span class="bold-text"><b>DotWriterImpl</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#node">Node</a>
<span class="inline-text"> *</span>
<span class="inline-text">root</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="namespaceMdDox_1_1Xml.md#nodearray">NodeArray</a>
<span class="inline-text"> *</span>
<span class="inline-text">list</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="namespaceMdDox.md#ostream">OStream</a>
<span class="inline-text"> *</span>
<span class="inline-text">stream</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/DotWriter.cpp#L85" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">DotWriter.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="writecontent"></a>
<h2>writeContent</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>writeContent</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/DotWriter.cpp#L119" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">DotWriter.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="writefooter"></a>
<h2>writeFooter</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>writeFooter</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="namespaceMdDox_1_1WriteUtils.md#write" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">write</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/DotWriter.cpp#L105" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">DotWriter.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="writeheader"></a>
<h2>writeHeader</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>writeHeader</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="namespaceMdDox_1_1WriteUtils.md#write" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">write</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/DotWriter.cpp#L93" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">DotWriter.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="writenode"></a>
<h2>writeNode</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>writeNode</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#node">Node</a>
<span class="inline-text"> *</span>
<span class="inline-text">node</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1Xml_1_1Node.md#children" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">children</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/DotWriter.cpp#L110" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">DotWriter.cpp</span>
</a>
</span>
<br/>
<br/>
<br/>
<blockquote>
<img src="../images/debug.svg"/><span class="inline-text">The following sources were used to generate this page.</span>
<br/>
<span class="icon-list-item"><a href="../xml/classMdDox_1_1DotWriterImpl.xml#L1" class="icon-list-item"><img src="../images/lookInside.svg" class="icon-list-item"/><span class="icon-list-item">classMdDox_1_1DotWriterImpl.xml</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="../xml/compound.xsd#L1" class="icon-list-item"><img src="../images/lookInside.svg" class="icon-list-item"/><span class="icon-list-item">compound.xsd</span>
</a>
</span>
</blockquote>
</div>
</div>
</body>
</html>
