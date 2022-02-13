<!DOCTYPE html>
<html>
<head>
</head>
<body>
<a id="design-tests"></a>
<h1>Design tests</h1>
<a id="Design"></a>
<a id="design-tests"></a>
<a href="https://github.com/CharlesCarley/MdDox">~</a>
<a href="indexpage.md#main">Main</a>
<span class="inline-text">/</span>
<a href="index.md#index">Index</a>
<span class="inline-text">/</span>
<span class="bold-text"><b>Design</b></span>
<br/>
<br/>
<a id="Design_1S02"></a>
<a id="formatting"></a>
<h2>Formatting</h2>
<span class="bold-text"><b>Output Tests:</b></span>
<br/>
<span class="inline-text">
 Output test for the special commands. In order of </span>
<code class="typewriter">\b</code>
<span class="inline-text">, </span>
<code class="typewriter">\e</code>
<span class="inline-text">, </span>
<code class="typewriter">\c</code>
<span class="inline-text">.</span>
<ul>
<li><span class="inline-text">This text should be </span>
<span class="bold-text"><b>bold</b></span>
<span class="inline-text">.</span>
</li>
<li><span class="inline-text">This text should be </span>
<span class="italic-text"><i>italic</i></span>
<span class="inline-text">.</span>
</li>
<li><span class="inline-text">This text should be in </span>
<code class="typewriter">typewriter</code>
<span class="inline-text"> font.</span>
</li>
</ul>
<a id="Design_1S03"></a>
<a id="paragraph"></a>
<h2>Paragraph</h2>
<span class="bold-text"><b>Paragraph Test:</b></span>
<br/>
<span class="inline-text">
 This text is a large block of text to inform you about something that is useful. However, for this block, the content is meant to be meaningless filler. Its sole purpose is to be nothing more than a long-winded block of over-stated, over-emphasized text to give the document a much fuller body. At first glance, it provides the feeling as if this content is saying something </span>
<span class="bold-text"><b>important!</b></span>
<span class="inline-text"> Although, while this text may appear to be saying something important; which it is not. That appearance in itself is the real meaning of it, which from a design perspective allows viewing how a large block of text will be output in the final markdown document. </span>
<br/>
<a id="Design_1S04"></a>
<a id="blockquote"></a>
<h2>BlockQuote</h2>
<a id="Design_1SSS01"></a>
<a id="block-quote-test"></a>
<h3>Block quote test</h3>
<blockquote>
<span class="inline-text">This is a markdown style quote... </span>
<blockquote>
<span class="inline-text">This is a nested markdown style quote... </span>
<blockquote>
<span class="inline-text">This is another nested markdown style quote... </span>
</blockquote>
</blockquote>
</blockquote>
<br/>
<a id="Design_1SS02"></a>
<a id="html-block-quote-tests"></a>
<h3>HTML Block Quote Tests</h3>
<blockquote>
<span class="bold-text"><b>Output Tests:</b></span>
<br/>
<span class="inline-text">
 Output test for the special commands. In order of </span>
<code class="typewriter">\b</code>
<span class="inline-text">, </span>
<code class="typewriter">\e</code>
<span class="inline-text">, </span>
<code class="typewriter">\c</code>
<span class="inline-text">.</span>
<ul>
<li><span class="inline-text">This text should be </span>
<span class="bold-text"><b>bold</b></span>
<span class="inline-text">.</span>
</li>
<li><span class="inline-text">This text should be </span>
<span class="italic-text"><i>italic</i></span>
<span class="inline-text">.</span>
</li>
<li><span class="inline-text">This text should be in </span>
<code class="typewriter">typewriter</code>
<span class="inline-text"> font. </span>
</li>
</ul>
</blockquote>
<a id="Design_1SS03"></a>
<a id="h4-paragraph-test"></a>
<h4>h4 Paragraph Test</h4>
<span class="inline-text">This text is a large block of text to inform you about something that is useful. However, for this block, the content is meant to be meaningless filler. Its sole purpose is to be nothing more than a long-winded block of over-stated, over-emphasized text to give the document a much fuller body. At first glance, it provides the feeling as if this content is saying something </span>
<span class="bold-text"><b>important!</b></span>
<span class="inline-text"> Although, while this text may appear to be saying something important; which it is not. That appearance in itself is the real meaning of it, which from a design perspective allows viewing how a large block of text will be output in the final markdown document.</span>
<a id="Design_1S05"></a>
<a id="imagetest"></a>
<h2>ImageTest</h2>
<a id="Design_1SS04"></a>
<a id="image-tests:"></a>
<h3>Image Tests:</h3>
<span class="inline-text">In order to implement custom dot diagrams the source needs to: </span>
<br/>
<ul>
<li><span class="inline-text">Process dot source, and push it to a list in the site builder.</span>
</li>
<li><span class="inline-text">Write the final image link as if it already exists.</span>
</li>
<li><span class="inline-text">After all pages have been processed, the site builder needs to invoke the dot executable for each source and write the output to SVG.</span>
</li>
<li><span class="italic-text"><i>This is a pre-generated dot file, but it should be possible to do this on the fly!.</i></span>
<br/>
<img src="../images/page-fragment.svg"/></li>
</ul>
<br/>
<blockquote>
<img src="../images/debug24px.svg"/><span class="inline-text">The following sources were used to generate this page.</span>
<br/>
<span class="icon-list-item"><a href="../xml/Design.xml#L1" class="icon-list-item"><img src="../images/lookInside24px.svg" class="icon-list-item"/><span class="icon-list-item">Design.xml</span>
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
