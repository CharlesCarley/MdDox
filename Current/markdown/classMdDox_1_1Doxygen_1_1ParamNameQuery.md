<!DOCTYPE html>
<html>
<head>
</head>
<body>
<a id="paramnamequery"></a>
<h1>ParamNameQuery</h1>
<a id="classMdDox_1_1Doxygen_1_1ParamNameQuery"></a>
<a id="mddoxdoxygenparamnamequery"></a>
<a href="https://github.com/CharlesCarley/MdDox">~</a>
<a href="indexpage.md#main">Main</a>
<span class="inline-text">/</span>
<a href="index.md#index">Index</a>
<span class="inline-text">::</span>
<a href="namespaceMdDox.md#mddox">MdDox</a>
<span class="inline-text">::</span>
<a href="namespaceMdDox_1_1Doxygen.md#doxygen">Doxygen</a>
<span class="inline-text">::</span>
<span class="bold-text"><b>ParamNameQuery</b></span>
<br/>
<br/>
<span class="inline-text">Implements the </span>
<code class="typewriter">docParamName</code>
<span class="inline-text"> scaffolding. </span>
<br/>
<br/>
<a id="private-members"></a>
<h2>Private Members</h2>
<span class="icon-list-item"><a href="#_node" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">_node</span>
</a>
</span>
<br/>
<a id="public-methods"></a>
<h2>Public Methods</h2>
<span class="icon-list-item"><a href="#paramnamequery" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">ParamNameQuery</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#paramnamequery" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">ParamNameQuery</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#paramnamequery" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">ParamNameQuery</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#isvalid" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">isValid</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#empty" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">empty</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#reset" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">reset</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#node" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">node</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#sort" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">sort</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#text" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">text</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visit" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visit</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#getdirection" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">getDirection</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#getref" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">getRef</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#getref" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">getRef</span>
</a>
</span>
<br/>
<a id="details"></a>
<h2>Details</h2>
<span class="inline-text">The following xml provides the source for the </span>
<span class="bold-text"><b>docParamName</b></span>
<span class="inline-text"> scaffolding.</span>

```xml
<xsd:complexType name="docParamName" mixed="true">
  <xsd:sequence>
    <xsd:element minOccurs="0" name="ref" type="refTextType" maxOccurs="1"/>
  </xsd:sequence>
  <xsd:attribute name="direction" type="DoxParamDir" use="optional"/>
</xsd:complexType>
```
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/ParamNameQuery.h#L64" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParamNameQuery.h</span>
</a>
</span>
<br/>
<a id="_node"></a>
<h2>_node</h2>
<a href="classMdDox_1_1Xml_1_1Node.md#xmlnode">Xml::Node</a>
<span class="inline-text"> *</span>
<span class="bold-text"><b>_node</b></span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/ParamNameQuery.h#L66" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParamNameQuery.h</span>
</a>
</span>
<br/>
<br/>
<a id="paramnamequery"></a>
<h2>ParamNameQuery</h2>
<span class="bold-text"><b>ParamNameQuery</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/ParamNameQuery.h#L69" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParamNameQuery.h</span>
</a>
</span>
<br/>
<br/>
<a id="paramnamequery"></a>
<h2>ParamNameQuery</h2>
<span class="bold-text"><b>ParamNameQuery</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#xmlnode">Xml::Node</a>
<span class="inline-text"> *</span>
<span class="inline-text">node</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/ParamNameQuery.h#L74" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParamNameQuery.h</span>
</a>
</span>
<br/>
<br/>
<a id="paramnamequery"></a>
<h2>ParamNameQuery</h2>
<span class="bold-text"><b>ParamNameQuery</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1ParamNameQuery.md#paramnamequery">ParamNameQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">other</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/ParamNameQuery.h#L79" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParamNameQuery.h</span>
</a>
</span>
<br/>
<br/>
<a id="isvalid"></a>
<h2>isValid</h2>
<span class="inline-text">bool</span>
<span class="bold-text"><b>isValid</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Checks to see if the internal node is usable. </span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/ParamNameQuery.h#L84" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParamNameQuery.h</span>
</a>
</span>
<br/>
<br/>
<a id="empty"></a>
<h2>empty</h2>
<span class="inline-text">bool</span>
<span class="bold-text"><b>empty</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Checks to see if the internal node has children. </span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/ParamNameQuery.h#L89" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParamNameQuery.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1Xml_1_1Node.md#haschildren" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">hasChildren</span>
</a>
</span>
<br/>
<br/>
<a id="reset"></a>
<h2>reset</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>reset</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Resets the internal node pointer to null. </span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/ParamNameQuery.h#L94" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParamNameQuery.h</span>
</a>
</span>
<br/>
<br/>
<a id="node"></a>
<h2>node</h2>
<a href="classMdDox_1_1Xml_1_1Node.md#xmlnode">Xml::Node</a>
<span class="inline-text"> *</span>
<span class="bold-text"><b>node</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Returns the wrapped node pointer. </span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/ParamNameQuery.h#L99" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParamNameQuery.h</span>
</a>
</span>
<br/>
<br/>
<a id="sort"></a>
<h2>sort</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>sort</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox_1_1Doxygen.md#sortmap">SortMap</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">childOrder</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Sorts the nodes in the query based on priority of type. </span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/ParamNameQuery.h#L104" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParamNameQuery.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/ParamNameQuery.cpp#L81" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParamNameQuery.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1Xml_1_1Node.md#sort" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">sort</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1Xml_1_1Node.md#gettypecode" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">getTypeCode</span>
</a>
</span>
<br/>
<br/>
<a id="text"></a>
<h2>text</h2>
<span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="bold-text"><b>text</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">def</span>
<span class="inline-text"> = </span>
<span class="inline-text">&quot;&quot;</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Provides access to the node&apos;s inner text. </span>
<br/>
<br/>
<a id="returns"></a>
<h4>Returns</h4>
<span class="inline-text">The text data associated with this node the default value. </span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/ParamNameQuery.h#L110" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParamNameQuery.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/ParamNameQuery.cpp#L76" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParamNameQuery.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1Xml_1_1Node.md#text" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">text</span>
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
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1Doxygen_1_1Visitors_1_1ParamNameQueryVisitor.md#visitorsparamnamequeryvisitor">Visitors::ParamNameQueryVisitor</a>
<span class="inline-text"> *</span>
<span class="inline-text"> = </span>
<span class="inline-text">visitor</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/ParamNameQuery.h#L112" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParamNameQuery.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/ParamNameQuery.cpp#L29" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParamNameQuery.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1Xml_1_1Node.md#children" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">children</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="namespaceMdDox_1_1Doxygen.md#doxtextnode" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">DoxTextNode</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1Doxygen_1_1Visitors_1_1ParamNameQueryVisitor.md#visitedtext" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedText</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1Doxygen_1_1Visitors_1_1ParamNameQueryVisitor.md#visitedref" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedRef</span>
</a>
</span>
<br/>
<br/>
<a id="getdirection"></a>
<h2>getDirection</h2>
<a href="namespaceMdDox_1_1Doxygen.md#doxparamdirenum">DoxParamDirEnum</a>
<span class="bold-text"><b>getDirection</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Provides access to the </span>
<span class="bold-text"><b>direction</b></span>
<span class="inline-text"> element. </span>
<br/>
<br/>
<a id="returns"></a>
<h4>Returns</h4>
<span class="inline-text">The </span>
<span class="bold-text"><b>direction</b></span>
<span class="inline-text"> enumerated value or -1 if the value is not found. </span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/ParamNameQuery.h#L118" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParamNameQuery.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/ParamNameQuery.cpp#L49" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParamNameQuery.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1Doxygen_1_1DoxParamDir.md#get" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">get</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1Xml_1_1Node.md#attribute" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">attribute</span>
</a>
</span>
<br/>
<br/>
<a id="getref"></a>
<h2>getRef</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>getRef</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1Doxygen_1_1RefTextQuery.md#reftextquery">RefTextQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">dest</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Provides access to the </span>
<span class="bold-text"><b>ref</b></span>
<span class="inline-text"> attribute. </span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/ParamNameQuery.h#L123" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParamNameQuery.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/ParamNameQuery.cpp#L56" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParamNameQuery.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1Doxygen_1_1ParamNameQuery.md#node" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">node</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1Xml_1_1Node.md#firstchildof" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">firstChildOf</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1Doxygen_1_1RefTextQuery.md#reset" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">reset</span>
</a>
</span>
<br/>
<br/>
<a id="getref"></a>
<h2>getRef</h2>
<a href="classMdDox_1_1Doxygen_1_1RefTextQuery.md#reftextquery">RefTextQuery</a>
<span class="bold-text"><b>getRef</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Provides access to the </span>
<span class="bold-text"><b>ref</b></span>
<span class="inline-text"> attribute. </span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/ParamNameQuery.h#L128" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParamNameQuery.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/ParamNameQuery.cpp#L67" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParamNameQuery.cpp</span>
</a>
</span>
<br/>
<br/>
<br/>
<blockquote>
<img src="../images/debug24px.svg"/><span class="inline-text">The following sources were used to generate this page.</span>
<br/>
<span class="icon-list-item"><a href="../xml/classMdDox_1_1Doxygen_1_1ParamNameQuery.xml#L1" class="icon-list-item"><img src="../images/lookInside24px.svg" class="icon-list-item"/><span class="icon-list-item">classMdDox_1_1Doxygen_1_1ParamNameQuery.xml</span>
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
