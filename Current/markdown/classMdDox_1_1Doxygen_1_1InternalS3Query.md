<a id="internals3query"></a>
<h1>InternalS3Query</h1>
<a id="classmddox_1_1doxygen_1_1internals3query"></a>
<a href="https://github.com/CharlesCarley/MdDox#~">~</a>
<a href="indexpage.md#mddox">MdDox</a>
<span class="inline-text">/</span>
<a href="index.md#index">Index</a>
<span class="inline-text">/</span>
<a href="namespaceMdDox.md#mddox">MdDox</a>
<span class="inline-text">::</span>
<a href="namespaceMdDox_1_1Doxygen.md#doxygen">Doxygen</a>
<span class="inline-text">::</span>
<span class="bold-text"><b>InternalS3Query</b></span>
<br/>
<br/>
<span class="inline-text">Implements the </span>
<code class="typewriter">docInternalS3Type</code>
<span class="inline-text"> scaffolding. </span>
<br/>
<a id="derived-from"></a>
<h4>Derived From</h4>
<div class="icon-link">
<img src="../images/class.svg"/><a href="classMdDox_1_1Doxygen_1_1Query.md#query">MdDox::Doxygen::Query</a>
</div>
<img src="../images/dot/internal-diagram-36.dot.svg"/><br/>
<a id="public-methods"></a>
<h2>Public Methods</h2>
<span class="icon-list-item"><a href="#internals3query" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">InternalS3Query</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#internals3query" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">InternalS3Query</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#internals3query" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">InternalS3Query</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#foreachparagraph" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">foreachParagraph</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#foreachsect3" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">foreachSect3</span>
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
<span class="bold-text"><b>docInternalS3Type</b></span>
<span class="inline-text"> scaffolding.</span>

```xml
<xsd:complexType name="docInternalS3Type" mixed="true">
  <xsd:sequence>
    <xsd:element minOccurs="0" name="para" type="docParaType" maxOccurs="unbounded"/>
    <xsd:element minOccurs="0" name="sect3" type="docSect4Type" maxOccurs="unbounded"/>
  </xsd:sequence>
</xsd:complexType>
```
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/InternalS3Query.h#L68" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">InternalS3Query.h</span>
</a>
</span>
<br/>
<br/>
<blockquote>
<span class="icon-list-item"><a href="#internals3query" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
</blockquote>
<a id="internals3query"></a>
<h2>InternalS3Query</h2>
<span class="bold-text"><b>InternalS3Query</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/InternalS3Query.h#L70" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">InternalS3Query.h</span>
</a>
</span>
<br/>
<br/>
<blockquote>
<span class="icon-list-item"><a href="#internals3query" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
</blockquote>
<br/>
<a id="internals3query"></a>
<h2>InternalS3Query</h2>
<span class="bold-text"><b>InternalS3Query</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1InternalS3Query.md#internals3query">InternalS3Query</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">other</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/InternalS3Query.h#L71" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">InternalS3Query.h</span>
</a>
</span>
<br/>
<br/>
<blockquote>
<span class="icon-list-item"><a href="#internals3query" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
</blockquote>
<br/>
<a id="internals3query"></a>
<h2>InternalS3Query</h2>
<span class="bold-text"><b>InternalS3Query</b></span>
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
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/InternalS3Query.h#L73" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">InternalS3Query.h</span>
</a>
</span>
<br/>
<br/>
<blockquote>
<span class="icon-list-item"><a href="#internals3query" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
</blockquote>
<br/>
<a id="foreachparagraph"></a>
<h2>foreachParagraph</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>foreachParagraph</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox_1_1Doxygen.md#paraqueryfunction">ParaQueryFunction</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">invoke</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h4>Details</h4>
<span class="inline-text">Invokes the supplied callback on </span>
<span class="bold-text"><b>para</b></span>
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
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/InternalS3Query.h#L82" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">InternalS3Query.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/InternalS3Query.cpp#L53" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">InternalS3Query.cpp</span>
</a>
</span>
<br/>
<br/>
<blockquote>
<span class="icon-list-item"><a href="#internals3query" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
</blockquote>
<br/>
<a id="foreachsect3"></a>
<h2>foreachSect3</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>foreachSect3</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox_1_1Doxygen.md#sect4queryfunction">Sect4QueryFunction</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">invoke</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h4>Details</h4>
<span class="inline-text">Invokes the supplied callback on </span>
<span class="bold-text"><b>sect3</b></span>
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
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/InternalS3Query.h#L87" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">InternalS3Query.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/InternalS3Query.cpp#L58" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">InternalS3Query.cpp</span>
</a>
</span>
<br/>
<br/>
<blockquote>
<span class="icon-list-item"><a href="#internals3query" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
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
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1Doxygen_1_1Visitors_1_1InternalS3QueryVisitor.md#internals3queryvisitor">Visitors::InternalS3QueryVisitor</a>
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
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1Doxygen_1_1Visitors_1_1InternalS3QueryVisitor.md#visitedtext">visitedText</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1Doxygen_1_1Visitors_1_1InternalS3QueryVisitor.md#visitedparagraph">visitedParagraph</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1Doxygen_1_1Visitors_1_1InternalS3QueryVisitor.md#visitedsect3">visitedSect3</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/InternalS3Query.h#L78" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">InternalS3Query.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/InternalS3Query.cpp#L30" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">InternalS3Query.cpp</span>
</a>
</span>
<br/>
<br/>
<blockquote>
<span class="icon-list-item"><a href="#internals3query" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
</blockquote>
<br/>
<br/>
<blockquote>
<img src="../images/debug.svg"/><span class="inline-text">The following sources were used to generate this page.</span>
<br/>
<span class="icon-list-item"><a href="../xml/classMdDox_1_1Doxygen_1_1InternalS3Query.xml#L1" class="icon-list-item"><img src="../images/lookInside.svg" class="icon-list-item"/><span class="icon-list-item">classMdDox_1_1Doxygen_1_1InternalS3Query.xml</span>
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
