<a id="hashutils"></a>
<h1>HashUtils</h1>
<a id="namespaceMdDox_1_1HashUtils"></a>
<a href="https://github.com/CharlesCarley/MdDox">~</a>
<a href="indexpage.md#mddox">MdDox</a>
<span class="inline-text">/</span>
<a href="index.md#index">Index</a>
<span class="inline-text">/</span>
<a href="namespaceMdDox.md#">MdDox</a>
<span class="inline-text">::</span>
<span class="bold-text"><b>HashUtils</b></span>
<br/>
<br/>
<span class="inline-text">Provides methods for creating URL hash fragments. </span>
<a id="contents"></a>
<h2>Contents</h2>
<ul>
</ul>
<a id="functions"></a>
<h2>Functions</h2>
<span class="icon-list-item"><a href="#anchor" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">anchor</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#cleantitle" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">cleanTitle</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#heading" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">heading</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#linenumber" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">lineNumber</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/HashUtils.cpp#L25" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">HashUtils.cpp</span>
</a>
</span>
<br/>
<a id="anchor"></a>
<h2>anchor</h2>
<a href="namespaceMdDox.md#string">String</a>
<span class="bold-text"><b>anchor</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">id</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h4>Details</h4>
<span class="inline-text">Constructs a heading fragment. </span>
<br/>
<br/>
<span class="inline-text">Returns a string formatted as: </span>
<code class="typewriter">#</code>
<code class="typewriter">id</code>
<br/>
<span class="inline-text">
 Assumes that id points to an anchor somewhere in the current document. </span>
<br/>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="namespaceMdDox.md#stringcombine" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">StringCombine</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/HashUtils.cpp#L47" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">HashUtils.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="cleantitle"></a>
<h2>cleanTitle</h2>
<a href="namespaceMdDox.md#string">String</a>
<span class="bold-text"><b>cleanTitle</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">title</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h4>Details</h4>
<span class="inline-text">Cleans the supplied title. </span>
<br/>
<br/>
<span class="inline-text">Removes all binary resolution operators. Replaces white space and path separators with a dash. Converts the string to lowercase. </span>
<br/>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1StringUtils.md#replaceall" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">replaceAll</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1StringUtils.md#tolower" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">toLower</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/HashUtils.cpp#L36" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">HashUtils.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="heading"></a>
<h2>heading</h2>
<a href="namespaceMdDox.md#string">String</a>
<span class="bold-text"><b>heading</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">title</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h4>Details</h4>
<span class="inline-text">Constructs a heading fragment. </span>
<br/>
<br/>
<span class="inline-text">Returns a string formatted as: </span>
<code class="typewriter">#</code>
<code class="typewriter">title</code>
<br/>
<span class="inline-text">
 Where title is sanitized with cleanTitle. </span>
<br/>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="namespaceMdDox.md#stringcombine" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">StringCombine</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="namespaceMdDox_1_1HashUtils.md#cleantitle" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">cleanTitle</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/HashUtils.cpp#L31" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">HashUtils.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="linenumber"></a>
<h2>lineNumber</h2>
<a href="namespaceMdDox.md#string">String</a>
<span class="bold-text"><b>lineNumber</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const uint32_t &amp;</span>
<span class="inline-text">line</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h4>Details</h4>
<span class="inline-text">Constructs a line fragment. </span>
<br/>
<br/>
<span class="inline-text">Returns a string formatted as: </span>
<code class="typewriter">#</code>
<code class="typewriter">L</code>
<code class="typewriter">line</code>
<br/>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="namespaceMdDox.md#stringcombine" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">StringCombine</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/HashUtils.cpp#L26" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">HashUtils.cpp</span>
</a>
</span>
<br/>
<br/>
<br/>
<blockquote>
<img src="../images/debug.svg"/><span class="inline-text">The following sources were used to generate this page.</span>
<br/>
<span class="icon-list-item"><a href="../xml/namespaceMdDox_1_1HashUtils.xml#L1" class="icon-list-item"><img src="../images/lookInside.svg" class="icon-list-item"/><span class="icon-list-item">namespaceMdDox_1_1HashUtils.xml</span>
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
