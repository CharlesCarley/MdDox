<a id="doxygenindexqueryvisitor"></a>
<h1>DoxygenIndexQueryVisitor</h1>
<a id="classmddox_1_1doxygen_1_1visitors_1_1doxygenindexqueryvisitor"></a>
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
<span class="bold-text"><b>DoxygenIndexQueryVisitor</b></span>
<br/>
<br/>
<a id="derived-by"></a>
<h4>Derived By</h4>
<div class="icon-link">
<img src="../images/class.svg"/><a href="classMdDox_1_1IndexPageFilter.md#indexpagefilter">MdDox::IndexPageFilter</a>
</div>
<div class="icon-link">
<img src="../images/class.svg"/><a href="classMdDox_1_1IndexPageWriter.md#indexpagewriter">MdDox::IndexPageWriter</a>
</div>
<img src="../images/dot/internal-diagram-82.dot.svg"/><br/>
<a id="public-methods"></a>
<h2>Public Methods</h2>
<span class="icon-list-item"><a href="#~doxygenindexqueryvisitor" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">~DoxygenIndexQueryVisitor</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedcompound" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">visitedCompound</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#visitedtext" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">visitedText</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/DoxygenIndexQuery.h#L31" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">DoxygenIndexQuery.h</span>
</a>
</span>
<br/>
<br/>
<blockquote>
<span class="icon-list-item"><a href="#doxygenindexqueryvisitor" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
</blockquote>
<a id="~doxygenindexqueryvisitor"></a>
<h2>~DoxygenIndexQueryVisitor</h2>
<span class="bold-text"><b>~DoxygenIndexQueryVisitor</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/DoxygenIndexQuery.h#L33" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">DoxygenIndexQuery.h</span>
</a>
</span>
<br/>
<br/>
<blockquote>
<span class="icon-list-item"><a href="#doxygenindexqueryvisitor" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
</blockquote>
<br/>
<a id="visitedcompound"></a>
<h2>visitedCompound</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>visitedCompound</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1CompoundIndexQuery.md#compoundindexquery">CompoundIndexQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h4>Details</h4>
<span class="inline-text">Called when the element </span>
<span class="bold-text"><b>compound</b></span>
<span class="inline-text"> is found. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>query</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">Const reference to the </span>
<a href="classMdDox_1_1Doxygen_1_1CompoundIndexQuery.md#compoundindexquery">CompoundIndexQuery</a>
<span class="inline-text"> class. </span>
</li>
</ul>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/DoxygenIndexQuery.h#L43" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">DoxygenIndexQuery.h</span>
</a>
</span>
<br/>
<br/>
<blockquote>
<span class="icon-list-item"><a href="#doxygenindexqueryvisitor" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
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
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/Doxygen/DoxygenIndexQuery.h#L38" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">DoxygenIndexQuery.h</span>
</a>
</span>
<br/>
<br/>
<blockquote>
<span class="icon-list-item"><a href="#doxygenindexqueryvisitor" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
</blockquote>
<br/>
<br/>
<blockquote>
<img src="../images/debug.svg"/><span class="inline-text">The following sources were used to generate this page.</span>
<br/>
<span class="icon-list-item"><a href="../xml/classMdDox_1_1Doxygen_1_1Visitors_1_1DoxygenIndexQueryVisitor.xml#L1" class="icon-list-item"><img src="../images/lookInside.svg" class="icon-list-item"/><span class="icon-list-item">classMdDox_1_1Doxygen_1_1Visitors_1_1DoxygenIndexQueryVisitor.xml</span>
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
