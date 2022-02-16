<a id="paramlistquery"></a>
<h1>ParamListQuery</h1>
<a id="classMdDox_1_1Doxygen_1_1ParamListQuery"></a>
<a href="https://github.com/CharlesCarley/MdDox">~</a>
<a href="indexpage.md#main">Main</a>
<span class="inline-text">/</span>
<a href="index.md#index">Index</a>
<span class="inline-text">::</span>
<a href="namespaceMdDox.md#mddox">MdDox</a>
<span class="inline-text">::</span>
<a href="namespaceMdDox_1_1Doxygen.md#doxygen">Doxygen</a>
<span class="inline-text">::</span>
<span class="bold-text"><b>ParamListQuery</b></span>
<br/>
<br/>
<span class="inline-text">Implements the </span>
<code class="typewriter">docParamListType</code>
<span class="inline-text"> scaffolding. </span>
<br/>
<br/>
<a id="derived-from"></a>
<h4>Derived From</h4>
<span class="icon-list-item"><a href="classMdDox_1_1Doxygen_1_1Query.md#query" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">Query</span>
</a>
</span>
<br/>
<img src="../images/dot/internal-diagram-49.dot.svg"/><br/>
<a id="public-methods"></a>
<h2>Public Methods</h2>
<span class="icon-list-item"><a href="#paramlistquery" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">ParamListQuery</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#paramlistquery" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">ParamListQuery</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#paramlistquery" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">ParamListQuery</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#foreachparameteritem" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">foreachParameterItem</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#getkind" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">getKind</span>
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
<span class="bold-text"><b>docParamListType</b></span>
<span class="inline-text"> scaffolding.</span>

```xml
<xsd:complexType name="docParamListType">
  <xsd:sequence>
    <xsd:element minOccurs="0" name="parameteritem" type="docParamListItem" maxOccurs="unbounded"/>
  </xsd:sequence>
  <xsd:attribute name="kind" type="DoxParamListKind"/>
</xsd:complexType>
```
<br/>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/Doxygen/ParamListQuery.h#L64" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ParamListQuery.h</span>
</a>
</span>
<br/>
<a id="paramlistquery"></a>
<h2>ParamListQuery</h2>
<span class="bold-text"><b>ParamListQuery</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/Doxygen/ParamListQuery.h#L66" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ParamListQuery.h</span>
</a>
</span>
<br/>
<br/>
<a id="paramlistquery"></a>
<h2>ParamListQuery</h2>
<span class="bold-text"><b>ParamListQuery</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1ParamListQuery.md#paramlistquery">ParamListQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">other</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/Doxygen/ParamListQuery.h#L67" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ParamListQuery.h</span>
</a>
</span>
<br/>
<br/>
<a id="paramlistquery"></a>
<h2>ParamListQuery</h2>
<span class="bold-text"><b>ParamListQuery</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#xmlnode">Xml::Node</a>
<span class="inline-text"> *</span>
<span class="inline-text">node</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/Doxygen/ParamListQuery.h#L69" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ParamListQuery.h</span>
</a>
</span>
<br/>
<br/>
<a id="foreachparameteritem"></a>
<h2>foreachParameterItem</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>foreachParameterItem</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox_1_1Doxygen.md#paramlistitemqueryfunction">ParamListItemQueryFunction</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">invoke</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h4>Details</h4>
<span class="inline-text">Invokes the supplied callback on </span>
<span class="bold-text"><b>parameteritem</b></span>
<span class="inline-text"> elements. </span>
<br/>
<br/>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1Doxygen_1_1Query.md#_node" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_node</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/Doxygen/ParamListQuery.h#L85" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ParamListQuery.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/Doxygen/ParamListQuery.cpp#L56" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ParamListQuery.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="getkind"></a>
<h2>getKind</h2>
<a href="namespaceMdDox_1_1Doxygen.md#doxparamlistkindenum">DoxParamListKindEnum</a>
<span class="bold-text"><b>getKind</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h4>Details</h4>
<span class="inline-text">Provides access to the </span>
<span class="bold-text"><b>kind</b></span>
<span class="inline-text"> element. </span>
<br/>
<br/>
<a id="returns"></a>
<h4>Returns</h4>
<span class="inline-text">The </span>
<span class="bold-text"><b>kind</b></span>
<span class="inline-text"> enumerated value or -1 if the value is not found. </span>
<br/>
<br/>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1Doxygen_1_1Query.md#_node" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_node</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1Doxygen_1_1DoxParamListKind.md#get" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">get</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1Xml_1_1Node.md#attribute" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">attribute</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/Doxygen/ParamListQuery.h#L80" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ParamListQuery.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/Doxygen/ParamListQuery.cpp#L49" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ParamListQuery.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="visit"></a>
<h2>visit</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visit</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1Doxygen_1_1Visitors_1_1ParamListQueryVisitor.md#visitorsparamlistqueryvisitor">Visitors::ParamListQueryVisitor</a>
<span class="inline-text"> *</span>
<span class="inline-text"> = </span>
<span class="inline-text">visitor</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1Doxygen_1_1Query.md#_node" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_node</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1Xml_1_1Node.md#children" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">children</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="namespaceMdDox_1_1Doxygen.md#doxtextnode" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">DoxTextNode</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1Doxygen_1_1Visitors_1_1ParamListQueryVisitor.md#visitedtext" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">visitedText</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1Doxygen_1_1Visitors_1_1ParamListQueryVisitor.md#visitedparameteritem" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">visitedParameterItem</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/Doxygen/ParamListQuery.h#L74" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ParamListQuery.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/Doxygen/ParamListQuery.cpp#L29" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ParamListQuery.cpp</span>
</a>
</span>
<br/>
<br/>
</div>
</div>
</body>
</html>
