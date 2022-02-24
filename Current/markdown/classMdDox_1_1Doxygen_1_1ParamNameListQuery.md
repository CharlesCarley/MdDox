<a id="paramnamelistquery"></a>
<h1>ParamNameListQuery</h1>
<a id="classmddox_1_1doxygen_1_1paramnamelistquery"></a>
<a href="https://github.com/CharlesCarley/MdDox#~">~</a>
<a href="indexpage.md#mddox">MdDox</a>
<span class="inline-text">/</span>
<a href="index.md#index">Index</a>
<span class="inline-text">/</span>
<a href="namespaceMdDox.md#mddox">MdDox</a>
<span class="inline-text">::</span>
<a href="namespaceMdDox_1_1Doxygen.md#doxygen">Doxygen</a>
<span class="inline-text">::</span>
<span class="bold-text"><b>ParamNameListQuery</b></span>
<br/>
<br/>
<span class="inline-text">Implements the </span>
<code class="typewriter">docParamNameList</code>
<span class="inline-text"> scaffolding. </span>
<br/>
<a id="derived-from"></a>
<h4>Derived From</h4>
<div class="icon-link">
<img src="../images/class.svg"/><a href="classMdDox_1_1Doxygen_1_1Query.md#query">MdDox::Doxygen::Query</a>
</div>
<img src="../images/dot/internal-diagram-53.dot.svg"/><br/>
<a id="public-methods"></a>
<h2>Public Methods</h2>
<span class="icon-list-item"><a href="#paramnamelistquery" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">ParamNameListQuery</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#paramnamelistquery" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">ParamNameListQuery</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#paramnamelistquery" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">ParamNameListQuery</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#foreachparametername" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">foreachParameterName</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visit" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">visit</span>
</a>
</span>
<br/>
<a id="details"></a>
<h2>Details</h2>
<span class="inline-text">The following xml provides the source for the </span>
<span class="bold-text"><b>docParamNameList</b></span>
<span class="inline-text"> scaffolding.</span>

```xml
<xsd:complexType name="docParamNameList">
  <xsd:sequence>
    <xsd:element minOccurs="0" name="parametername" type="docParamName" maxOccurs="unbounded"/>
  </xsd:sequence>
</xsd:complexType>
```
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/ParamNameListQuery.h#L62" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ParamNameListQuery.h</span>
</a>
</span>
<br/>
<br/>
<blockquote>
<span class="icon-list-item"><a href="#paramnamelistquery" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
</blockquote>
<a id="paramnamelistquery"></a>
<h2>ParamNameListQuery</h2>
<span class="bold-text"><b>ParamNameListQuery</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/ParamNameListQuery.h#L64" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ParamNameListQuery.h</span>
</a>
</span>
<br/>
<br/>
<blockquote>
<span class="icon-list-item"><a href="#paramnamelistquery" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
</blockquote>
<br/>
<a id="paramnamelistquery"></a>
<h2>ParamNameListQuery</h2>
<span class="bold-text"><b>ParamNameListQuery</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1ParamNameListQuery.md#paramnamelistquery">ParamNameListQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">other</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/ParamNameListQuery.h#L65" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ParamNameListQuery.h</span>
</a>
</span>
<br/>
<br/>
<blockquote>
<span class="icon-list-item"><a href="#paramnamelistquery" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
</blockquote>
<br/>
<a id="paramnamelistquery"></a>
<h2>ParamNameListQuery</h2>
<span class="bold-text"><b>ParamNameListQuery</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#node">Xml::Node</a>
<span class="inline-text"> *</span>
<span class="inline-text">node</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/ParamNameListQuery.h#L67" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ParamNameListQuery.h</span>
</a>
</span>
<br/>
<br/>
<blockquote>
<span class="icon-list-item"><a href="#paramnamelistquery" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
</blockquote>
<br/>
<a id="foreachparametername"></a>
<h2>foreachParameterName</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>foreachParameterName</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox_1_1Doxygen.md#paramnamequeryfunction">ParamNameQueryFunction</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">invoke</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h4>Details</h4>
<span class="inline-text">Invokes the supplied callback on </span>
<span class="bold-text"><b>parametername</b></span>
<span class="inline-text"> elements. </span>
<br/>
<br/>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1Doxygen_1_1Query.md#_node">_node</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/ParamNameListQuery.h#L76" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ParamNameListQuery.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/ParamNameListQuery.cpp#L49" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ParamNameListQuery.cpp</span>
</a>
</span>
<br/>
<br/>
<blockquote>
<span class="icon-list-item"><a href="#paramnamelistquery" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
</blockquote>
<br/>
<a id="visit"></a>
<h2>visit</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visit</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1Doxygen_1_1Visitors_1_1ParamNameListQueryVisitor.md#paramnamelistqueryvisitor">Visitors::ParamNameListQueryVisitor</a>
<span class="inline-text"> *</span>
<span class="inline-text"> = </span>
<span class="inline-text">visitor</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1Doxygen_1_1Query.md#_node">_node</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#children">children</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceMdDox_1_1Doxygen.md#doxtextnode">DoxTextNode</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1Doxygen_1_1Visitors_1_1ParamNameListQueryVisitor.md#visitedtext">visitedText</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1Doxygen_1_1Visitors_1_1ParamNameListQueryVisitor.md#visitedparametername">visitedParameterName</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/ParamNameListQuery.h#L72" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ParamNameListQuery.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/ParamNameListQuery.cpp#L29" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ParamNameListQuery.cpp</span>
</a>
</span>
<br/>
<br/>
<blockquote>
<span class="icon-list-item"><a href="#paramnamelistquery" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
</blockquote>
<br/>
<br/>
<blockquote>
<img src="../images/debug.svg"/><span class="inline-text">The following sources were used to generate this page.</span>
<br/>
<span class="icon-list-item"><a href="../xml/classMdDox_1_1Doxygen_1_1ParamNameListQuery.xml#L1" class="icon-list-item"><img src="../images/lookInside.svg" class="icon-list-item"/><span class="icon-list-item">classMdDox_1_1Doxygen_1_1ParamNameListQuery.xml</span>
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
