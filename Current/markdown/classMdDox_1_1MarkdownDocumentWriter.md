<!DOCTYPE html>
<html>
<head>
</head>
<body>
<a id="markdowndocumentwriter"></a>
<h1>MarkdownDocumentWriter</h1>
<a id="classMdDox_1_1MarkdownDocumentWriter"></a>
<a id="mddoxmarkdowndocumentwriter"></a>
<a href="https://github.com/CharlesCarley/MdDoc">~</a>
<a href="indexpage.md#main">Main</a>
<span class="inline-text">/</span>
<a href="indexpage.md#index">Index</a>
<span class="inline-text">::</span>
<a href="namespaceMdDox.md#mddox">MdDox</a>
<span class="inline-text">::</span>
<span class="bold-text"><b>MarkdownDocumentWriter</b></span>
<br/>
<br/>
<a id="derived-from"></a>
<h4>Derived From</h4>
<span class="icon-list-item"><a href="classMdDox_1_1HtmlDocumentWriter.md#htmldocumentwriter" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">HtmlDocumentWriter</span>
</a>
</span>
<br/>
<a id="public-methods"></a>
<h2>Public Methods</h2>
<span class="icon-list-item"><a href="#markdowndocumentwriter" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">MarkdownDocumentWriter</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#~markdowndocumentwriter" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">~MarkdownDocumentWriter</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#begindocument" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">beginDocument</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#code" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">code</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#endnavigationbar" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">endNavigationBar</span>
</a>
</span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/MarkdownDocumentWriter.h#L30" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">MarkdownDocumentWriter.h</span>
</a>
</span>
<br/>
<span class="bold-text"><b>ClassPageWriter.visitedInheritanceGraph</b></span>
<br/>
<span class="bold-text"><b>ClassPageWriter.visitedCollaborationGraph</b></span>
<br/>
<a id="markdowndocumentwriter"></a>
<h2>MarkdownDocumentWriter</h2>
<span class="bold-text"><b>MarkdownDocumentWriter</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/MarkdownDocumentWriter.h#L32" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">MarkdownDocumentWriter.h</span>
</a>
</span>
<br/>
<br/>
<a id="~markdowndocumentwriter"></a>
<h2>~MarkdownDocumentWriter</h2>
<span class="bold-text"><b>~MarkdownDocumentWriter</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/MarkdownDocumentWriter.h#L34" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">MarkdownDocumentWriter.h</span>
</a>
</span>
<br/>
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
<br/>
<br/>
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
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/MarkdownDocumentWriter.h#L39" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">MarkdownDocumentWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/MarkdownDocumentWriter.cpp#L33" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">MarkdownDocumentWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<span class="icon-list-item"><a href="namespaceMdDox_1_1Html.md#anchor" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">anchor</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="namespaceMdDox_1_1HashUtils.md#titleonly" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">titleOnly</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="namespaceMdDox_1_1Html.md#heading" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">heading</span>
</a>
</span>
<br/>
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
<br/>
<br/>
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
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/MarkdownDocumentWriter.h#L44" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">MarkdownDocumentWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/MarkdownDocumentWriter.cpp#L45" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">MarkdownDocumentWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<span class="icon-list-item"><a href="namespaceMdDox_1_1Md.md#code" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">code</span>
</a>
</span>
<br/>
<br/>
<a id="endnavigationbar"></a>
<h2>endNavigationBar</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>endNavigationBar</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="namespaceMdDox.md#ostream">OStream</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">output</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Implementations close a navigation bar. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>output</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">The output stream to write to. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/MarkdownDocumentWriter.h#L49" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">MarkdownDocumentWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/MdDoxTree/MarkdownDocumentWriter.cpp#L54" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">MarkdownDocumentWriter.cpp</span>
</a>
</span>
<br/>
<span class="bold-text"><b>FunctionDefWriter.visitedReImplements</b></span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1HtmlDocumentWriter.md#endnavigationbar" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">endNavigationBar</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="namespaceMdDox_1_1Html.md#linebreak" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">lineBreak</span>
</a>
</span>
<br/>
<br/>
<br/>
<blockquote>
<img src="../images/debug24px.svg"/><span class="inline-text">The following sources were used to generate this page.</span>
<br/>
<span class="icon-list-item"><a href="../xml/classMdDox_1_1MarkdownDocumentWriter.xml#L1" class="icon-list-item"><img src="../images/lookInside24px.svg" class="icon-list-item"/><span class="icon-list-item">classMdDox_1_1MarkdownDocumentWriter.xml</span>
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