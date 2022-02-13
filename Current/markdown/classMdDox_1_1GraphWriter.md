<a id="graphwriter"></a>
<h1>GraphWriter</h1>
<a id="classMdDox_1_1GraphWriter"></a>
<a id="mddoxgraphwriter"></a>
<a href="https://github.com/CharlesCarley/MdDox">~</a>
<a href="indexpage.md#main">Main</a>
<span class="inline-text">/</span>
<a href="index.md#index">Index</a>
<span class="inline-text">::</span>
<a href="namespaceMdDox.md#mddox">MdDox</a>
<span class="inline-text">::</span>
<span class="bold-text"><b>GraphWriter</b></span>
<br/>
<br/>
<a id="derived-from"></a>
<h4>Derived From</h4>
<span class="icon-list-item"><a href="classMdDox_1_1Doxygen_1_1Visitors_1_1GraphQueryVisitor.md#graphqueryvisitor" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">GraphQueryVisitor</span>
</a>
</span>
<br/>
<img src="../images/internal-diagram-32.dot.svg"/><br/>
<a id="public-typedefs"></a>
<h2>Public Typedefs</h2>
<span class="icon-list-item"><a href="#nodes" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">Nodes</span>
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
<span class="icon-list-item"><a href="#_nodes" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">_nodes</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_root" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">_root</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_idmap" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">_idMap</span>
</a>
</span>
<br/>
<a id="private-methods"></a>
<h2>Private Methods</h2>
<span class="icon-list-item"><a href="#visitednode" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedNode</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#writelinks" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">writeLinks</span>
</a>
</span>
<br/>
<a id="public-methods"></a>
<h2>Public Methods</h2>
<span class="icon-list-item"><a href="#graphwriter" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">GraphWriter</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#~graphwriter" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">~GraphWriter</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#write" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">write</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/GraphWriter.h#L39" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">GraphWriter.h</span>
</a>
</span>
<br/>
<a id="nodes"></a>
<h2>Nodes</h2>
<span class="inline-text">std::unordered_map&lt; </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text">, </span>
<a href="structMdDox_1_1GraphNode.md#graphnode">GraphNode</a>
<span class="inline-text"> &gt;</span>
<span class="bold-text"><b>Nodes</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/GraphWriter.h#L41" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">GraphWriter.h</span>
</a>
</span>
<br/>
<br/>
<a id="_writer"></a>
<h2>_writer</h2>
<a href="classMdDox_1_1DocumentWriter.md#documentwriter">DocumentWriter</a>
<span class="inline-text"> *</span>
<span class="bold-text"><b>_writer</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/GraphWriter.h#L44" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">GraphWriter.h</span>
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
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/GraphWriter.h#L45" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">GraphWriter.h</span>
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
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/GraphWriter.h#L46" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">GraphWriter.h</span>
</a>
</span>
<br/>
<br/>
<a id="_nodes"></a>
<h2>_nodes</h2>
<a href="classMdDox_1_1GraphWriter.md#nodes">Nodes</a>
<span class="bold-text"><b>_nodes</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/GraphWriter.h#L47" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">GraphWriter.h</span>
</a>
</span>
<br/>
<br/>
<a id="_root"></a>
<h2>_root</h2>
<a href="classMdDox_1_1Xml_1_1Node.md#xmlnode">Xml::Node</a>
<span class="bold-text"><b>_root</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/GraphWriter.h#L48" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">GraphWriter.h</span>
</a>
</span>
<br/>
<br/>
<a id="_idmap"></a>
<h2>_idMap</h2>
<a href="namespaceMdDox_1_1Xml.md#xmlnodemap">Xml::NodeMap</a>
<span class="bold-text"><b>_idMap</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/GraphWriter.h#L49" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">GraphWriter.h</span>
</a>
</span>
<br/>
<br/>
<a id="visitednode"></a>
<h2>visitedNode</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedNode</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1NodeQuery.md#doxygennodequery">Doxygen::NodeQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h4>Details</h4>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>node</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the NodeQuery class. </span>
</li>
</ul>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/GraphWriter.h#L51" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">GraphWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/GraphWriter.cpp#L63" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">GraphWriter.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="writelinks"></a>
<h2>writeLinks</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>writeLinks</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/GraphWriter.h#L53" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">GraphWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/GraphWriter.cpp#L79" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">GraphWriter.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="graphwriter"></a>
<h2>GraphWriter</h2>
<span class="bold-text"><b>GraphWriter</b></span>
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
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/GraphWriter.h#L57" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">GraphWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/GraphWriter.cpp#L51" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">GraphWriter.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="~graphwriter"></a>
<h2>~GraphWriter</h2>
<span class="bold-text"><b>~GraphWriter</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/GraphWriter.h#L58" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">GraphWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/GraphWriter.cpp#L57" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">GraphWriter.cpp</span>
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
<a href="classMdDox_1_1Doxygen_1_1GraphQuery.md#doxygengraphquery">Doxygen::GraphQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1Doxygen_1_1GraphQuery.md#isvalid" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">isValid</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1Doxygen_1_1GraphQuery.md#visit" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visit</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="namespaceMdDox.md#syncstream" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">syncStream</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/GraphWriter.h#L60" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">GraphWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/GraphWriter.cpp#L114" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">GraphWriter.cpp</span>
</a>
</span>
<br/>
<br/>
<br/>
<blockquote>
<img src="../images/debug24px.svg"/><span class="inline-text">The following sources were used to generate this page.</span>
<br/>
<span class="icon-list-item"><a href="../xml/classMdDox_1_1GraphWriter.xml#L1" class="icon-list-item"><img src="../images/lookInside24px.svg" class="icon-list-item"/><span class="icon-list-item">classMdDox_1_1GraphWriter.xml</span>
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
