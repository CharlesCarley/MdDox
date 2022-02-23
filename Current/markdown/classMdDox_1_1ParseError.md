<a id="parseerror"></a>
<h1>ParseError</h1>
<a id="classMdDox_1_1ParseError"></a>
<a href="https://github.com/CharlesCarley/MdDox">~</a>
<a href="indexpage.md#mddox">MdDox</a>
<span class="inline-text">/</span>
<a href="index.md#index">Index</a>
<span class="inline-text">/</span>
<a href="namespaceMdDox.md#mddox">MdDox</a>
<span class="inline-text">::</span>
<span class="bold-text"><b>ParseError</b></span>
<br/>
<br/>
<span class="inline-text">Custom exception that logs a file, line number and a message. </span>
<br/>
<a id="derived-from"></a>
<h4>Derived From</h4>
<div class="icon-link">
<img src="../images/class.svg"/><a href="classMdDox_1_1Exception.md#mddoxexception">MdDox::Exception</a>
</div>
<img src="../images/dot/internal-diagram-123.dot.svg"/><br/>
<a id="private-static-methods"></a>
<h2>Private Static Methods</h2>
<span class="icon-list-item"><a href="#geterror" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">getError</span>
</a>
</span>
<br/>
<a id="public-methods"></a>
<h2>Public Methods</h2>
<span class="icon-list-item"><a href="#parseerror" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">ParseError</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parseerror" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">ParseError</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parseerror" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">ParseError</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/ParserBase/ParseError.h#L31" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ParseError.h</span>
</a>
</span>
<a id="geterror"></a>
<h2>getError</h2>
<a href="namespaceMdDox.md#string">String</a>
<span class="bold-text"><b>getError</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">int</span>
<span class="inline-text">stage</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">file</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const size_t &amp;</span>
<span class="inline-text">line</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">message</span>
<span class="inline-text"> = </span>
<span class="inline-text">&quot;&quot;</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h4>Details</h4>
<span class="inline-text">Constructs the exception with a file, line and a message. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>stage</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">The code to supply during a parse stage.</span>
<ul>
<li><span class="inline-text">0 means syntax error.</span>
</li>
<li><span class="inline-text">1 means parse error.</span>
</li>
<li><span class="inline-text">2 means compile error. </span>
</li>
</ul>
</li>
<li><span class="bold-text"><b>file</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">The name of the file that contains the error. </span>
</li>
<li><span class="bold-text"><b>line</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">The line number of the error. </span>
</li>
<li><span class="bold-text"><b>message</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">an extra message for the error.</span>
</li>
</ul>
<span class="inline-text">
The message is formatted as: </span>
<code class="typewriter">file</code>
<span class="inline-text"> (</span>
<code class="typewriter">line</code>
<span class="inline-text">) : </span>
<code class="typewriter">stage</code>
<span class="inline-text"> : </span>
<code class="typewriter">message</code>
<span class="inline-text">Does the actual message construction. </span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/ParserBase/ParseError.h#L38" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ParseError.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/ParserBase/ParseError.cpp#L26" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ParseError.cpp</span>
</a>
</span>
<br/>
<a id="parseerror"></a>
<h2>ParseError</h2>
<span class="bold-text"><b>ParseError</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h4>Details</h4>
<span class="inline-text">Empty constructor. </span>
<br/>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/ParserBase/ParseError.h#L47" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ParseError.h</span>
</a>
</span>
<br/>
<a id="parseerror"></a>
<h2>ParseError</h2>
<span class="bold-text"><b>ParseError</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">message</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h4>Details</h4>
<span class="inline-text">Constructs a parse error without file and line information. </span>
<br/>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/ParserBase/ParseError.h#L55" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ParseError.h</span>
</a>
</span>
<br/>
<a id="parseerror"></a>
<h2>ParseError</h2>
<span class="bold-text"><b>ParseError</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const int</span>
<span class="inline-text">stage</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">file</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const size_t</span>
<span class="inline-text">line</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">message</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h4>Details</h4>
<span class="inline-text">Constructs the exception with a file, line and a message. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>stage</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">The code to supply during a parse stage.</span>
<ul>
<li><span class="inline-text">0 means syntax error.</span>
</li>
<li><span class="inline-text">1 means parse error.</span>
</li>
<li><span class="inline-text">2 means compile error. </span>
</li>
</ul>
</li>
<li><span class="bold-text"><b>file</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">The name of the file that contains the error. </span>
</li>
<li><span class="bold-text"><b>line</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">The line number of the error. </span>
</li>
<li><span class="bold-text"><b>message</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">an extra message for the error.</span>
</li>
</ul>
<span class="inline-text">
The message is formatted as: </span>
<code class="typewriter">file</code>
<span class="inline-text"> (</span>
<code class="typewriter">line</code>
<span class="inline-text">) : </span>
<code class="typewriter">stage</code>
<span class="inline-text"> : </span>
<code class="typewriter">message</code>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/ParserBase/ParseError.h#L73" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ParseError.h</span>
</a>
</span>
<br/>
</div>
</div>
</body>
</html>
