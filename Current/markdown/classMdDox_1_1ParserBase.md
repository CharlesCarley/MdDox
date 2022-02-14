<a id="parserbase"></a>
<h1>ParserBase</h1>
<a id="classMdDox_1_1ParserBase"></a>
<a id="mddoxparserbase"></a>
<a href="https://github.com/CharlesCarley/MdDox">~</a>
<a href="indexpage.md#main">Main</a>
<span class="inline-text">/</span>
<a href="index.md#index">Index</a>
<span class="inline-text">::</span>
<a href="namespaceMdDox.md#mddox">MdDox</a>
<span class="inline-text">::</span>
<span class="bold-text"><b>ParserBase</b></span>
<br/>
<br/>
<span class="inline-text">Base that handles common parse functionality. </span>
<br/>
<br/>
<a id="derived-by"></a>
<h4>Derived By</h4>
<span class="icon-list-item"><a href="classMdDox_1_1Xml_1_1Parser.md#parser" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser</span>
</a>
</span>
<br/>
<img src="../images/internal-diagram-120.dot.svg"/><br/>
<a id="public-typedefs"></a>
<h2>Public Typedefs</h2>
<span class="icon-list-item"><a href="#tokens" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">Tokens</span>
</a>
</span>
<br/>
<a id="protected-members"></a>
<h2>Protected Members</h2>
<span class="icon-list-item"><a href="#_cursor" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">_cursor</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_file" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">_file</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_filepath" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">_filePath</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_scanner" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">_scanner</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_tokens" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">_tokens</span>
</a>
</span>
<br/>
<a id="protected-methods"></a>
<h2>Protected Methods</h2>
<span class="icon-list-item"><a href="#advancecursor" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">advanceCursor</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#gettoken" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">getToken</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parseerror" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">parseError</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parseerrormessageimpl" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">parseErrorMessageImpl</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parseimpl" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">parseImpl</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#readtoken" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">readToken</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#writeimpl" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">writeImpl</span>
</a>
</span>
<br/>
<a id="private-methods"></a>
<h2>Private Methods</h2>
<span class="icon-list-item"><a href="#line" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">line</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parseerrorthrow" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">parseErrorThrow</span>
</a>
</span>
<br/>
<a id="public-methods"></a>
<h2>Public Methods</h2>
<span class="icon-list-item"><a href="#parserbase" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">ParserBase</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#~parserbase" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">~ParserBase</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#filename" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">filename</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parse" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">parse</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parse" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">parse</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#write" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">write</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#write" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">write</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ParserBase.h#L35" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParserBase.h</span>
</a>
</span>
<br/>
<a id="tokens"></a>
<h2>Tokens</h2>
<span class="inline-text">std::vector&lt; </span>
<a href="classMdDox_1_1TokenBase.md#tokenbase">TokenBase</a>
<span class="inline-text"> &gt;</span>
<span class="bold-text"><b>Tokens</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ParserBase.h#L37" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParserBase.h</span>
</a>
</span>
<br/>
<br/>
<a id="_cursor"></a>
<h2>_cursor</h2>
<span class="inline-text">int32_t</span>
<span class="bold-text"><b>_cursor</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ParserBase.h#L41" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParserBase.h</span>
</a>
</span>
<br/>
<br/>
<a id="_file"></a>
<h2>_file</h2>
<a href="namespaceMdDox.md#string">String</a>
<span class="bold-text"><b>_file</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ParserBase.h#L43" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParserBase.h</span>
</a>
</span>
<br/>
<br/>
<a id="_filepath"></a>
<h2>_filePath</h2>
<a href="classMdDox_1_1PathUtil.md#pathutil">PathUtil</a>
<span class="bold-text"><b>_filePath</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ParserBase.h#L44" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParserBase.h</span>
</a>
</span>
<br/>
<br/>
<a id="_scanner"></a>
<h2>_scanner</h2>
<a href="classMdDox_1_1ScannerBase.md#scannerbase">ScannerBase</a>
<span class="inline-text"> *</span>
<span class="bold-text"><b>_scanner</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ParserBase.h#L42" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParserBase.h</span>
</a>
</span>
<br/>
<br/>
<a id="_tokens"></a>
<h2>_tokens</h2>
<a href="classMdDox_1_1ParserBase.md#tokens">Tokens</a>
<span class="bold-text"><b>_tokens</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ParserBase.h#L40" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParserBase.h</span>
</a>
</span>
<br/>
<br/>
<a id="advancecursor"></a>
<h2>advanceCursor</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>advanceCursor</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">int32_t</span>
<span class="inline-text">n</span>
<span class="inline-text"> = </span>
<span class="inline-text">1</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1ParserBase.md#_cursor" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">_cursor</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ParserBase.h#L52" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParserBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ParserBase.cpp#L66" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParserBase.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="gettoken"></a>
<h2>getToken</h2>
<a href="classMdDox_1_1TokenBase.md#tokenbase">TokenBase</a>
<span class="bold-text"><b>getToken</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">int32_t</span>
<span class="inline-text">offs</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="namespaceMdDox_1_1WriteUtils.md#next" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">next</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1ParserBase.md#_cursor" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">_cursor</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1ParserBase.md#_tokens" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">_tokens</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1ParserBase.md#readtoken" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">readToken</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1ParserBase.md#parseerror" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">parseError</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ParserBase.h#L50" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParserBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ParserBase.cpp#L53" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParserBase.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="parseerror"></a>
<h2>parseError</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>parseError</b></span>
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
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ParserBase.h#L57" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParserBase.h</span>
</a>
</span>
<br/>
<br/>
<a id="parseerrormessageimpl"></a>
<h2>parseErrorMessageImpl</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>parseErrorMessageImpl</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">dest</span>
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
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ParserBase.h#L65" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParserBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ParserBase.cpp#L78" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParserBase.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="parseimpl"></a>
<h2>parseImpl</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>parseImpl</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="namespaceMdDox.md#istream">IStream</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">is</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ParserBase.h#L46" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParserBase.h</span>
</a>
</span>
<br/>
<br/>
<a id="readtoken"></a>
<h2>readToken</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>readToken</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">int32_t</span>
<span class="inline-text">n</span>
<span class="inline-text"> = </span>
<span class="inline-text">1</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1ParserBase.md#_scanner" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">_scanner</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1ScannerBase.md#scan" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">scan</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1ParserBase.md#_tokens" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">_tokens</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ParserBase.h#L54" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParserBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ParserBase.cpp#L41" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParserBase.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="writeimpl"></a>
<h2>writeImpl</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>writeImpl</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="namespaceMdDox.md#ostream">OStream</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">is</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">int</span>
<span class="inline-text">format</span>
<span class="inline-text"> = </span>
<span class="inline-text">0</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ParserBase.h#L48" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParserBase.h</span>
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
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ParserBase.h#L62" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParserBase.h</span>
</a>
</span>
<br/>
<br/>
<a id="parseerrorthrow"></a>
<h2>parseErrorThrow</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>parseErrorThrow</b></span>
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
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ParserBase.h#L60" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParserBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ParserBase.cpp#L71" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParserBase.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="parserbase"></a>
<h2>ParserBase</h2>
<span class="bold-text"><b>ParserBase</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ParserBase.h#L68" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParserBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ParserBase.cpp#L33" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParserBase.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="~parserbase"></a>
<h2>~ParserBase</h2>
<span class="bold-text"><b>~ParserBase</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ParserBase.h#L69" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParserBase.h</span>
</a>
</span>
<br/>
<br/>
<a id="filename"></a>
<h2>filename</h2>
<a href="namespaceMdDox.md#string">String</a>
<span class="bold-text"><b>filename</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h4>Details</h4>
<a id="returns"></a>
<h4>Returns</h4>
<span class="inline-text">The file name or memory stream name associated with this parser. </span>
<br/>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1ParserBase.md#_filepath" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">_filePath</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1PathUtil.md#fullpath" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">fullPath</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ParserBase.h#L94" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParserBase.h</span>
</a>
</span>
<br/>
<br/>
<a id="parse"></a>
<h2>parse</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>parse</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">file</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h4>Details</h4>
<span class="inline-text">Attempts to load the supplied file. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>file</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">The file system path to the file.</span>
</li>
</ul>
<ul>
<li><span class="bold-text"><b></b></span>
<span class="inline-text"> - </span>
<span class="inline-text">if the supplied path does not exist on disk. or cannot be opened. </span>
</li>
</ul>
<br/>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1PathUtil.md#exists" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">exists</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1ParserBase.md#_file" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">_file</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1PathUtil.md#stem" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">stem</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1ParserBase.md#_filepath" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">_filePath</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1ParserBase.md#parseimpl" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">parseImpl</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ParserBase.h#L78" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParserBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ParserBase.cpp#L83" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParserBase.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="parse"></a>
<h2>parse</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>parse</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="namespaceMdDox.md#istream">IStream</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">is</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">file</span>
<span class="inline-text"> = </span>
<span class="inline-text">&quot;&quot;</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h4>Details</h4>
<span class="inline-text">Attempts to load the supplied file. </span>
<ul>
<li><span class="bold-text"><b>is</b></span>
<span class="inline-text"> - </span>
</li>
<li><span class="bold-text"><b>file</b></span>
<span class="inline-text"> - </span>
</li>
</ul>
<br/>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1StringUtils.md#scramble" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">scramble</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1ParserBase.md#_file" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">_file</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="namespaceMdDox.md#stringcombine" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">StringCombine</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1ParserBase.md#_filepath" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">_filePath</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1ParserBase.md#parseimpl" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">parseImpl</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ParserBase.h#L85" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParserBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ParserBase.cpp#L101" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParserBase.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="write"></a>
<h2>write</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>write</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">file</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">int</span>
<span class="inline-text">format</span>
<span class="inline-text"> = </span>
<span class="inline-text">0</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1ParserBase.md#writeimpl" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">writeImpl</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ParserBase.h#L87" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParserBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ParserBase.cpp#L117" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParserBase.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="write"></a>
<h2>write</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>write</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="namespaceMdDox.md#ostream">OStream</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">os</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">int</span>
<span class="inline-text">format</span>
<span class="inline-text"> = </span>
<span class="inline-text">0</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1ParserBase.md#writeimpl" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">writeImpl</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ParserBase.h#L89" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParserBase.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/Utils/ParserBase/ParserBase.cpp#L126" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">ParserBase.cpp</span>
</a>
</span>
<br/>
<br/>
</div>
</div>
</body>
</html>
