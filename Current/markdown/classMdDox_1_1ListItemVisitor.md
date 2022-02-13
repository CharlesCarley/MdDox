<!DOCTYPE html>
<html>
<head>
</head>
<body>
<a id="listitemvisitor"></a>
<h1>ListItemVisitor</h1>
<a id="classMdDox_1_1ListItemVisitor"></a>
<a id="mddoxlistitemvisitor"></a>
<a href="https://github.com/CharlesCarley/MdDox">~</a>
<a href="indexpage.md#main">Main</a>
<span class="inline-text">/</span>
<a href="index.md#index">Index</a>
<span class="inline-text">::</span>
<a href="namespaceMdDox.md#mddox">MdDox</a>
<span class="inline-text">::</span>
<span class="bold-text"><b>ListItemVisitor</b></span>
<br/>
<br/>
<a id="derived-from"></a>
<h4>Derived From</h4>
<span class="icon-list-item"><a href="classMdDox_1_1Doxygen_1_1Visitors_1_1ParamListItemQueryVisitor.md#paramlistitemqueryvisitor" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">ParamListItemQueryVisitor</span>
</a>
</span>
<br/>
<img src="../images/internal-diagram-37.dot.svg"/><br/>
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
<span class="icon-list-item"><a href="#visitedparameternamelist" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedParameterNameList</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedparameterdescription" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visitedParameterDescription</span>
</a>
</span>
<br/>
<a id="public-methods"></a>
<h2>Public Methods</h2>
<span class="icon-list-item"><a href="#listitemvisitor" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">ListItemVisitor</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#write" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">write</span>
</a>
</span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/ParameterListWriter.cpp#L64" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParameterListWriter.cpp</span>
</a>
</span>
<br/>
<a id="_writer"></a>
<h2>_writer</h2>
<a href="classMdDox_1_1DocumentWriter.md#documentwriter">DocumentWriter</a>
<span class="inline-text"> *</span>
<span class="bold-text"><b>_writer</b></span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/ParameterListWriter.cpp#L66" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParameterListWriter.cpp</span>
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
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/ParameterListWriter.cpp#L67" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParameterListWriter.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="_out"></a>
<h2>_out</h2>
<a href="namespaceMdDox.md#outputstringstream">OutputStringStream</a>
<span class="bold-text"><b>_out</b></span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/ParameterListWriter.cpp#L68" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParameterListWriter.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="visitedparameternamelist"></a>
<h2>visitedParameterNameList</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedParameterNameList</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1ParamNameListQuery.md#doxygenparamnamelistquery">Doxygen::ParamNameListQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>parameternamelist</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the ParamNameListQuery class. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/ParameterListWriter.cpp#L70" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParameterListWriter.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="visitedparameterdescription"></a>
<h2>visitedParameterDescription</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedParameterDescription</b></span>
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
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>parameterdescription</b></span>
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
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/ParameterListWriter.cpp#L76" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParameterListWriter.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="listitemvisitor"></a>
<h2>ListItemVisitor</h2>
<span class="bold-text"><b>ListItemVisitor</b></span>
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
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/ParameterListWriter.cpp#L83" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParameterListWriter.cpp</span>
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
<a href="classMdDox_1_1Doxygen_1_1ParamListItemQuery.md#doxygenparamlistitemquery">Doxygen::ParamListItemQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">paramList</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/ParameterListWriter.cpp#L89" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParameterListWriter.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1Doxygen_1_1ParamListItemQuery.md#isvalid" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">isValid</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1DocumentWriter.md#beginlistitem" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">beginListItem</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1Doxygen_1_1ParamListItemQuery.md#visit" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">visit</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1DocumentWriter.md#endlistitem" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">endListItem</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="namespaceMdDox.md#syncstream" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">syncStream</span>
</a>
</span>
<br/>
<br/>
<br/>
<blockquote>
<img src="../images/debug24px.svg"/><span class="inline-text">The following sources were used to generate this page.</span>
<br/>
<span class="icon-list-item"><a href="../xml/classMdDox_1_1ListItemVisitor.xml#L1" class="icon-list-item"><img src="../images/lookInside24px.svg" class="icon-list-item"/><span class="icon-list-item">classMdDox_1_1ListItemVisitor.xml</span>
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
