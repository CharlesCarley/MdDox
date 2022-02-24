<a id="referencequery"></a>
<h1>ReferenceQuery</h1>
<a id="classmddox_1_1doxygen_1_1referencequery"></a>
<a href="https://github.com/CharlesCarley/MdDox#~">~</a>
<a href="indexpage.md#mddox">MdDox</a>
<span class="inline-text">/</span>
<a href="index.md#index">Index</a>
<span class="inline-text">/</span>
<a href="namespaceMdDox.md#mddox">MdDox</a>
<span class="inline-text">::</span>
<a href="namespaceMdDox_1_1Doxygen.md#doxygen">Doxygen</a>
<span class="inline-text">::</span>
<span class="bold-text"><b>ReferenceQuery</b></span>
<br/>
<br/>
<span class="inline-text">Implements the </span>
<code class="typewriter">referenceType</code>
<span class="inline-text"> scaffolding. </span>
<br/>
<a id="derived-from"></a>
<h4>Derived From</h4>
<div class="icon-link">
<img src="../images/class.svg"/><a href="classMdDox_1_1Doxygen_1_1Query.md#query">MdDox::Doxygen::Query</a>
</div>
<img src="../images/dot/internal-diagram-60.dot.svg"/><br/>
<a id="public-methods"></a>
<h2>Public Methods</h2>
<span class="icon-list-item"><a href="#referencequery" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">ReferenceQuery</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#referencequery" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">ReferenceQuery</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#referencequery" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">ReferenceQuery</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#getcompoundref" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">getCompoundRef</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#getendline" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">getEndline</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#getrefid" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">getRefId</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#getstartline" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">getStartLine</span>
</a>
</span>
<br/>
<a id="details"></a>
<h2>Details</h2>
<span class="inline-text">The following xml provides the source for the </span>
<span class="bold-text"><b>referenceType</b></span>
<span class="inline-text"> scaffolding.</span>

```xml
<xsd:complexType name="referenceType" mixed="true">
  <xsd:attribute name="refid" type="xsd:string"/>
  <xsd:attribute name="compoundref" type="xsd:string" use="optional"/>
  <xsd:attribute name="startline" type="xsd:integer"/>
  <xsd:attribute name="endline" type="xsd:integer"/>
</xsd:complexType>
```
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/ReferenceQuery.h#L45" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ReferenceQuery.h</span>
</a>
</span>
<br/>
<br/>
<blockquote>
<span class="icon-list-item"><a href="#referencequery" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
</blockquote>
<a id="referencequery"></a>
<h2>ReferenceQuery</h2>
<span class="bold-text"><b>ReferenceQuery</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/ReferenceQuery.h#L47" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ReferenceQuery.h</span>
</a>
</span>
<br/>
<br/>
<blockquote>
<span class="icon-list-item"><a href="#referencequery" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
</blockquote>
<br/>
<a id="referencequery"></a>
<h2>ReferenceQuery</h2>
<span class="bold-text"><b>ReferenceQuery</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1ReferenceQuery.md#referencequery">ReferenceQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">other</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/ReferenceQuery.h#L48" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ReferenceQuery.h</span>
</a>
</span>
<br/>
<br/>
<blockquote>
<span class="icon-list-item"><a href="#referencequery" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
</blockquote>
<br/>
<a id="referencequery"></a>
<h2>ReferenceQuery</h2>
<span class="bold-text"><b>ReferenceQuery</b></span>
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
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/ReferenceQuery.h#L50" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ReferenceQuery.h</span>
</a>
</span>
<br/>
<br/>
<blockquote>
<span class="icon-list-item"><a href="#referencequery" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
</blockquote>
<br/>
<a id="getcompoundref"></a>
<h2>getCompoundRef</h2>
<span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="bold-text"><b>getCompoundRef</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">notFound</span>
<span class="inline-text"> = </span>
<span class="inline-text">&quot;&quot;</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h4>Details</h4>
<span class="inline-text">Provides access to the </span>
<span class="bold-text"><b>compoundref</b></span>
<span class="inline-text"> attribute. </span>
<br/>
<br/>
<a id="returns"></a>
<h4>Returns</h4>
<span class="inline-text">The </span>
<span class="bold-text"><b>compoundref</b></span>
<span class="inline-text"> enumerated value or an empty string the value is not found. </span>
<br/>
<br/>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1Doxygen_1_1Query.md#_node">_node</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#attribute">attribute</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/ReferenceQuery.h#L68" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ReferenceQuery.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/ReferenceQuery.cpp#L35" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ReferenceQuery.cpp</span>
</a>
</span>
<br/>
<br/>
<blockquote>
<span class="icon-list-item"><a href="#referencequery" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
</blockquote>
<br/>
<a id="getendline"></a>
<h2>getEndline</h2>
<span class="inline-text">int64_t</span>
<span class="bold-text"><b>getEndline</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">int64_t</span>
<span class="inline-text">def</span>
<span class="inline-text"> = </span>
<span class="inline-text">-1</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h4>Details</h4>
<span class="inline-text">Provides access to the </span>
<span class="bold-text"><b>endline</b></span>
<span class="inline-text"> attribute. </span>
<br/>
<br/>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1Doxygen_1_1Query.md#_node">_node</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#integer">integer</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/ReferenceQuery.h#L78" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ReferenceQuery.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/ReferenceQuery.cpp#L47" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ReferenceQuery.cpp</span>
</a>
</span>
<br/>
<br/>
<blockquote>
<span class="icon-list-item"><a href="#referencequery" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
</blockquote>
<br/>
<a id="getrefid"></a>
<h2>getRefId</h2>
<span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="bold-text"><b>getRefId</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">notFound</span>
<span class="inline-text"> = </span>
<span class="inline-text">&quot;&quot;</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h4>Details</h4>
<span class="inline-text">Provides access to the </span>
<span class="bold-text"><b>refid</b></span>
<span class="inline-text"> attribute. </span>
<br/>
<br/>
<a id="returns"></a>
<h4>Returns</h4>
<span class="inline-text">The </span>
<span class="bold-text"><b>refid</b></span>
<span class="inline-text"> enumerated value or an empty string the value is not found. </span>
<br/>
<br/>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1Doxygen_1_1Query.md#_node">_node</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#attribute">attribute</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/ReferenceQuery.h#L60" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ReferenceQuery.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/ReferenceQuery.cpp#L28" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ReferenceQuery.cpp</span>
</a>
</span>
<br/>
<br/>
<blockquote>
<span class="icon-list-item"><a href="#referencequery" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
</blockquote>
<br/>
<a id="getstartline"></a>
<h2>getStartLine</h2>
<span class="inline-text">int64_t</span>
<span class="bold-text"><b>getStartLine</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">int64_t</span>
<span class="inline-text">def</span>
<span class="inline-text"> = </span>
<span class="inline-text">-1</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h4>Details</h4>
<span class="inline-text">Provides access to the </span>
<span class="bold-text"><b>startline</b></span>
<span class="inline-text"> attribute. </span>
<br/>
<br/>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1Doxygen_1_1Query.md#_node">_node</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#integer">integer</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/ReferenceQuery.h#L73" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ReferenceQuery.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/ReferenceQuery.cpp#L42" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ReferenceQuery.cpp</span>
</a>
</span>
<br/>
<br/>
<blockquote>
<span class="icon-list-item"><a href="#referencequery" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
</blockquote>
<br/>
<br/>
<blockquote>
<img src="../images/debug.svg"/><span class="inline-text">The following sources were used to generate this page.</span>
<br/>
<span class="icon-list-item"><a href="../xml/classMdDox_1_1Doxygen_1_1ReferenceQuery.xml#L1" class="icon-list-item"><img src="../images/lookInside.svg" class="icon-list-item"/><span class="icon-list-item">classMdDox_1_1Doxygen_1_1ReferenceQuery.xml</span>
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
