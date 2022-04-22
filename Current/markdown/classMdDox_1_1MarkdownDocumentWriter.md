<a id="markdowndocumentwriter"></a>
<h1>MarkdownDocumentWriter</h1>
<a id="classmddox_1_1markdowndocumentwriter"></a>
<a href="https://github.com/CharlesCarley/MdDox#~">~</a>
<a href="index.md#index">MdDox</a>
<span class="inline-text">/</span>
<a href="namespaceMdDox.md#mddox">MdDox</a>
<span class="inline-text">::</span>
<span class="bold-text"><b>MarkdownDocumentWriter</b></span>
<br/>
<br/>
<a id="derived-from"></a>
<h4>Derived From</h4>
<div class="icon-link">
<img src="../images/class.svg"/><a href="classMdDox_1_1HtmlDocumentWriter.md#htmldocumentwriter">MdDox::HtmlDocumentWriter</a>
</div>
<img src="../images/dot/internal-diagram-113.dot.svg"/><br/>
<a id="public-methods"></a>
<h2>Public Methods</h2>
<span class="icon-list-item"><a href="#markdowndocumentwriter" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">MarkdownDocumentWriter</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#~markdowndocumentwriter" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">~MarkdownDocumentWriter</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#begindocument" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">beginDocument</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#code" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">code</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/MarkdownDocumentWriter.h#L30" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">MarkdownDocumentWriter.h</span>
</a>
</span>
<br/>
<br/>
<span class="icon-list-item"><a href="#markdowndocumentwriter" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<a id="markdowndocumentwriter"></a>
<h2>MarkdownDocumentWriter</h2>
<span class="bold-text"><b>MarkdownDocumentWriter</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/MarkdownDocumentWriter.h#L32" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">MarkdownDocumentWriter.h</span>
</a>
</span>
<br/>
<br/>
<span class="icon-list-item"><a href="#markdowndocumentwriter" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="~markdowndocumentwriter"></a>
<h2>~MarkdownDocumentWriter</h2>
<span class="bold-text"><b>~MarkdownDocumentWriter</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/MarkdownDocumentWriter.h#L34" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">MarkdownDocumentWriter.h</span>
</a>
</span>
<br/>
<br/>
<span class="icon-list-item"><a href="#markdowndocumentwriter" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="begindocument"></a>
<h2>beginDocument</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>beginDocument</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="namespaceMdDox.md#ostream">OStream</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">output</span>
</span>
</div>
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
<span class="inline-text">Implementations should write a common document header. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>output</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">The output stream to write to. </span>
</li>
<li><span class="bold-text"><b>title</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">The title of the document. </span>
</li>
</ul>
<br/>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceMdDox_1_1Html.md#anchor">anchor</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceMdDox_1_1HashUtils.md#cleantitle">cleanTitle</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceMdDox_1_1Html.md#heading">heading</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/MarkdownDocumentWriter.h#L39" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">MarkdownDocumentWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/MarkdownDocumentWriter.cpp#L33" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">MarkdownDocumentWriter.cpp</span>
</a>
</span>
<br/>
<br/>
<span class="icon-list-item"><a href="#markdowndocumentwriter" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="code"></a>
<h2>code</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>code</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="namespaceMdDox.md#ostream">OStream</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">output</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">text</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">type</span>
<span class="inline-text"> = </span>
<span class="inline-text">&quot;.txt&quot;</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h4>Details</h4>
<span class="inline-text">Implementations should write a code block. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>output</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">The output stream to write to. </span>
</li>
<li><span class="bold-text"><b>text</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">The code. </span>
</li>
<li><span class="bold-text"><b>type</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">The type of code. </span>
</li>
</ul>
<br/>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceMdDox_1_1Md.md#code">code</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/MarkdownDocumentWriter.h#L44" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">MarkdownDocumentWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/MarkdownDocumentWriter.cpp#L41" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">MarkdownDocumentWriter.cpp</span>
</a>
</span>
<br/>
<br/>
<span class="icon-list-item"><a href="#markdowndocumentwriter" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
</div>
</div>
</body>
</html>
