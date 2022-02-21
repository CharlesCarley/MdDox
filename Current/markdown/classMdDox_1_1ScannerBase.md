<a id="scannerbase"></a>
<h1>ScannerBase</h1>
<a id="classMdDox_1_1ScannerBase"></a>
<a href="https://github.com/CharlesCarley/MdDox.md">~</a>
<a href="indexpage.md#mddox">MdDox</a>
<span class="inline-text">/</span>
<a href="index.md#index">Index</a>
<span class="inline-text">/</span>
<a href="namespaceMdDox.md#mddox">MdDox</a>
<span class="inline-text">::</span>
<span class="bold-text"><b>ScannerBase</b></span>
<br/>
<br/>
<a id="derived-by"></a>
<h4>Derived By</h4>
<div class="icon-link">
<img src="../images/class.svg"/><a href="classMdDox_1_1Xml_1_1Scanner.md#mddoxxmlscanner">MdDox::Xml::Scanner</a>
</div>
<img src="../images/dot/internal-diagram-126.dot.svg"/><br/>
<a id="protected-members"></a>
<h2>Protected Members</h2>
<span class="icon-list-item"><a href="#_file" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_file</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_inttable" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_intTable</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_line" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_line</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_stream" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_stream</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_stringtable" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_stringTable</span>
</a>
</span>
<br/>
<a id="protected-methods"></a>
<h2>Protected Methods</h2>
<span class="icon-list-item"><a href="#extractcode" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">extractCode</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#save" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">save</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#save" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">save</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#scanany" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">scanAny</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#scanlinecomment" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">scanLineComment</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#scanmultilinecomment" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">scanMultiLineComment</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#scanwhitespace" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">scanWhiteSpace</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#syntaxerror" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">syntaxError</span>
</a>
</span>
<br/>
<a id="private-methods"></a>
<h2>Private Methods</h2>
<span class="icon-list-item"><a href="#syntaxerrorthrow" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">syntaxErrorThrow</span>
</a>
</span>
<br/>
<a id="public-methods"></a>
<h2>Public Methods</h2>
<span class="icon-list-item"><a href="#scannerbase" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#~scannerbase" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">~ScannerBase</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#attach" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">attach</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#containsstring" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">containsString</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#integer" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">integer</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#line" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">line</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#scan" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">scan</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#string" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">string</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#string" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">string</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ScannerBase.h#L37" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<a id="_file"></a>
<h2>_file</h2>
<a href="classMdDox_1_1PathUtil.md#pathutil">PathUtil</a>
<span class="bold-text"><b>_file</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ScannerBase.h#L42" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<br/>
<a id="_inttable"></a>
<h2>_intTable</h2>
<a href="namespaceMdDox.md#inttable">IntTable</a>
<span class="bold-text"><b>_intTable</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ScannerBase.h#L41" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<br/>
<a id="_line"></a>
<h2>_line</h2>
<span class="inline-text">size_t</span>
<span class="bold-text"><b>_line</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ScannerBase.h#L43" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<br/>
<a id="_stream"></a>
<h2>_stream</h2>
<a href="namespaceMdDox.md#istream">IStream</a>
<span class="inline-text"> *</span>
<span class="bold-text"><b>_stream</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ScannerBase.h#L39" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<br/>
<a id="_stringtable"></a>
<h2>_stringTable</h2>
<a href="namespaceMdDox.md#stringtable">StringTable</a>
<span class="bold-text"><b>_stringTable</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ScannerBase.h#L40" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<br/>
<a id="extractcode"></a>
<h2>extractCode</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>extractCode</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">dest</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">char</span>
<span class="inline-text">seqStart</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">char</span>
<span class="inline-text">seqEnd</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1ScannerBase.md#scanany" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">scanAny</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1StringUtils.md#splitline" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">splitLine</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1ScannerBase.md#line" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">line</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1StringUtils.md#trimwhitespace" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">trimWhiteSpace</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ScannerBase.h#L72" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ScannerBase.cpp#L145" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="save"></a>
<h2>save</h2>
<span class="inline-text">size_t</span>
<span class="bold-text"><b>save</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">str</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1ScannerBase.md#_stringtable" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_stringTable</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1IndexCache.md#insert" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">insert</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ScannerBase.h#L45" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<br/>
<a id="save"></a>
<h2>save</h2>
<span class="inline-text">size_t</span>
<span class="bold-text"><b>save</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const int &amp;</span>
<span class="inline-text">val</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1ScannerBase.md#_inttable" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_intTable</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1IndexCache.md#insert" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">insert</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ScannerBase.h#L50" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<br/>
<a id="scanany"></a>
<h2>scanAny</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>scanAny</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">dest</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">char</span>
<span class="inline-text">seqStart</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">char</span>
<span class="inline-text">seqEnd</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1ScannerBase.md#_stream" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_stream</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1ScannerBase.md#syntaxerror" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">syntaxError</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1ScannerBase.md#_line" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_line</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ScannerBase.h#L70" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ScannerBase.cpp#L103" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="scanlinecomment"></a>
<h2>scanLineComment</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>scanLineComment</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1ScannerBase.md#_stream" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_stream</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1ScannerBase.md#_line" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_line</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ScannerBase.h#L66" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ScannerBase.cpp#L70" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="scanmultilinecomment"></a>
<h2>scanMultiLineComment</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>scanMultiLineComment</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1ScannerBase.md#_stream" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_stream</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="namespaceMdDox.md#multilinecommentstop0" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">MultiLineCommentStop0</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="namespaceMdDox.md#multilinecommentstop1" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">MultiLineCommentStop1</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1ScannerBase.md#_line" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_line</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ScannerBase.h#L68" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ScannerBase.cpp#L82" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="scanwhitespace"></a>
<h2>scanWhiteSpace</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>scanWhiteSpace</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="namespaceMdDox.md#iswhitespace" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">isWhiteSpace</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1ScannerBase.md#_stream" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_stream</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ScannerBase.h#L64" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ScannerBase.cpp#L170" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="syntaxerror"></a>
<h2>syntaxError</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>syntaxError</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">what</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">Args &amp;&amp;...</span>
<span class="inline-text">args</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ScannerBase.h#L56" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<br/>
<a id="syntaxerrorthrow"></a>
<h2>syntaxErrorThrow</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>syntaxErrorThrow</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">message</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ScannerBase.h#L75" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ScannerBase.cpp#L65" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="scannerbase"></a>
<h2>ScannerBase</h2>
<span class="bold-text"><b>ScannerBase</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ScannerBase.h#L78" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ScannerBase.cpp#L28" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="~scannerbase"></a>
<h2>~ScannerBase</h2>
<span class="bold-text"><b>~ScannerBase</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ScannerBase.h#L80" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<br/>
<a id="attach"></a>
<h2>attach</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>attach</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="namespaceMdDox.md#istream">IStream</a>
<span class="inline-text"> *</span>
<span class="inline-text">stream</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1PathUtil.md#pathutil">PathUtil</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">file</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h4>Details</h4>
<span class="inline-text">Attaches an input stream to this scanner, resets the line count, and assigns a file name for error reporting. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>stream</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">The input stream to attach. </span>
</li>
<li><span class="bold-text"><b>file</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">A name for the stream. </span>
</li>
</ul>
<br/>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1ScannerBase.md#_stream" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_stream</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1ScannerBase.md#_file" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_file</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1ScannerBase.md#_line" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_line</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ScannerBase.h#L97" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ScannerBase.cpp#L38" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="containsstring"></a>
<h2>containsString</h2>
<span class="inline-text">bool</span>
<span class="bold-text"><b>containsString</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">size_t</span>
<span class="inline-text">id</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1ScannerBase.md#_stringtable" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_stringTable</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1IndexCache.md#contains" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">contains</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ScannerBase.h#L107" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ScannerBase.cpp#L60" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="integer"></a>
<h2>integer</h2>
<span class="inline-text">int</span>
<span class="bold-text"><b>integer</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const size_t &amp;</span>
<span class="inline-text">i</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1ScannerBase.md#_inttable" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_intTable</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1IndexCache.md#at" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">at</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ScannerBase.h#L103" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ScannerBase.cpp#L55" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="line"></a>
<h2>line</h2>
<span class="inline-text">size_t</span>
<span class="bold-text"><b>line</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1ScannerBase.md#_line" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_line</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ScannerBase.h#L105" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<br/>
<a id="scan"></a>
<h2>scan</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>scan</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1TokenBase.md#tokenbase">TokenBase</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">tok</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h4>Details</h4>
<span class="inline-text">Abstract method, derived scanners should implement their own scan loop. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>tok</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">A reference to a temporary storage token. </span>
</li>
</ul>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ScannerBase.h#L88" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ScannerBase.cpp#L34" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="string"></a>
<h2>string</h2>
<span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="bold-text"><b>string</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const size_t &amp;</span>
<span class="inline-text">i</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1ScannerBase.md#_stringtable" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_stringTable</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1IndexCache.md#at" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">at</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ScannerBase.h#L99" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ScannerBase.cpp#L45" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="string"></a>
<h2>string</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>string</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">dest</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const size_t &amp;</span>
<span class="inline-text">i</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1ScannerBase.md#_stringtable" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_stringTable</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1IndexCache.md#at" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">at</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ScannerBase.h#L101" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ScannerBase.cpp#L50" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ScannerBase.cpp</span>
</a>
</span>
<br/>
<br/>
</div>
</div>
</body>
</html>
