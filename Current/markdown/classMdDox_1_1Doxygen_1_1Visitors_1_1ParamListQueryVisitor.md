<a id="paramlistqueryvisitor"></a>
<h1>ParamListQueryVisitor</h1>
<a id="classmddox_1_1doxygen_1_1visitors_1_1paramlistqueryvisitor"></a>
<a href="https://github.com/CharlesCarley/MdDox#~">~</a>
<a href="indexpage.md#mddox">MdDox</a>
<span class="inline-text">/</span>
<a href="index.md#index">Index</a>
<span class="inline-text">/</span>
<a href="namespaceMdDox.md#mddox">MdDox</a>
<span class="inline-text">::</span>
<a href="namespaceMdDox_1_1Doxygen.md#doxygen">Doxygen</a>
<span class="inline-text">::</span>
<a href="namespaceMdDox_1_1Doxygen_1_1Visitors.md#visitors">Visitors</a>
<span class="inline-text">::</span>
<span class="bold-text"><b>ParamListQueryVisitor</b></span>
<br/>
<br/>
<a id="derived-by"></a>
<h4>Derived By</h4>
<div class="icon-link">
<img src="../images/class.svg"/><a href="classMdDox_1_1ParameterListWriter.md#parameterlistwriter">MdDox::ParameterListWriter</a>
</div>
<img src="../images/dot/internal-diagram-87.dot.svg"/><br/>
<a id="public-methods"></a>
<h2>Public Methods</h2>
<span class="icon-list-item"><a href="#~paramlistqueryvisitor" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">~ParamListQueryVisitor</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedparameteritem" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">visitedParameterItem</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedtext" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">visitedText</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/ParamListQuery.h#L32" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ParamListQuery.h</span>
</a>
</span>
<br/>
<br/>
<blockquote>
<span class="icon-list-item"><a href="#paramlistqueryvisitor" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
</blockquote>
<a id="~paramlistqueryvisitor"></a>
<h2>~ParamListQueryVisitor</h2>
<span class="bold-text"><b>~ParamListQueryVisitor</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/ParamListQuery.h#L34" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ParamListQuery.h</span>
</a>
</span>
<br/>
<br/>
<blockquote>
<span class="icon-list-item"><a href="#paramlistqueryvisitor" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
</blockquote>
<br/>
<a id="visitedparameteritem"></a>
<h2>visitedParameterItem</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedParameterItem</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1ParamListItemQuery.md#paramlistitemquery">ParamListItemQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h4>Details</h4>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>parameteritem</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the </span>
<a href="classMdDox_1_1Doxygen_1_1ParamListItemQuery.md#paramlistitemquery">ParamListItemQuery</a>
<span class="inline-text"> class. </span>
</li>
</ul>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/ParamListQuery.h#L44" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ParamListQuery.h</span>
</a>
</span>
<br/>
<br/>
<blockquote>
<span class="icon-list-item"><a href="#paramlistqueryvisitor" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
</blockquote>
<br/>
<a id="visitedtext"></a>
<h2>visitedText</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedText</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h4>Details</h4>
<span class="inline-text">Callback for every _text_node. </span>
<br/>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/ParamListQuery.h#L39" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ParamListQuery.h</span>
</a>
</span>
<br/>
<br/>
<blockquote>
<span class="icon-list-item"><a href="#paramlistqueryvisitor" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
</blockquote>
<br/>
<br/>
<blockquote>
<img src="../images/debug.svg"/><span class="inline-text">The following sources were used to generate this page.</span>
<br/>
<span class="icon-list-item"><a href="../xml/classMdDox_1_1Doxygen_1_1Visitors_1_1ParamListQueryVisitor.xml#L1" class="icon-list-item"><img src="../images/lookInside.svg" class="icon-list-item"/><span class="icon-list-item">classMdDox_1_1Doxygen_1_1Visitors_1_1ParamListQueryVisitor.xml</span>
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
