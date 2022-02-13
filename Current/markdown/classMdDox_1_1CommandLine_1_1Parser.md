<!DOCTYPE html>
<html>
<head>
</head>
<body>
<a id="parser"></a>
<h1>Parser</h1>
<a id="classMdDox_1_1CommandLine_1_1Parser"></a>
<a id="mddoxcommandlineparser"></a>
<a href="https://github.com/CharlesCarley/MdDox">~</a>
<a href="indexpage.md#main">Main</a>
<span class="inline-text">/</span>
<a href="index.md#index">Index</a>
<span class="inline-text">::</span>
<a href="namespaceMdDox.md#mddox">MdDox</a>
<span class="inline-text">::</span>
<a href="namespaceMdDox_1_1CommandLine.md#commandline">CommandLine</a>
<span class="inline-text">::</span>
<span class="bold-text"><b>Parser</b></span>
<br/>
<br/>
<span class="inline-text">Is a basic command line parser that matches arguments supplied by main with predetermined rules. </span>
<br/>
<br/>
<a id="public-typedefs"></a>
<h2>Public Typedefs</h2>
<span class="icon-list-item"><a href="#switches" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">Switches</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#options" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">Options</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#stringarray" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">StringArray</span>
</a>
</span>
<br/>
<a id="private-members"></a>
<h2>Private Members</h2>
<span class="icon-list-item"><a href="#_programname" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">_programName</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_maxlongswitch" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">_maxLongSwitch</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_required" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">_required</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_used" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">_used</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_scanner" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">_scanner</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_switches" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">_switches</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_argumentlist" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">_argumentList</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_options" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">_options</span>
</a>
</span>
<br/>
<a id="private-methods"></a>
<h2>Private Methods</h2>
<span class="icon-list-item"><a href="#hasswitch" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">hasSwitch</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#initializeoption" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">initializeOption</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#initializeswitches" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">initializeSwitches</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#writeerror" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">writeError</span>
</a>
</span>
<br/>
<a id="public-methods"></a>
<h2>Public Methods</h2>
<span class="icon-list-item"><a href="#parser" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#~parser" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">~Parser</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parse" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">parse</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#loginput" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">logInput</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#arguments" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">arguments</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#programpath" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">programPath</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#programname" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">programName</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#programdirectory" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">programDirectory</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#ispresent" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">isPresent</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#option" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">option</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#int32" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">int32</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#int64" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">int64</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#string" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">string</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#usage" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">usage</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#usage" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">usage</span>
</a>
</span>
<br/>
<a id="public-static-methods"></a>
<h2>Public Static Methods</h2>
<span class="icon-list-item"><a href="#currentdirectory" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">currentDirectory</span>
</a>
</span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.h#L38" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<a id="switches"></a>
<h2>Switches</h2>
<span class="inline-text">std::unordered_map&lt; </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text">, </span>
<a href="classMdDox_1_1CommandLine_1_1ParseOption.md#parseoption">ParseOption</a>
<span class="inline-text"> * &gt;</span>
<span class="bold-text"><b>Switches</b></span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.h#L40" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<br/>
<a id="options"></a>
<h2>Options</h2>
<span class="inline-text">std::vector&lt; </span>
<a href="classMdDox_1_1CommandLine_1_1ParseOption.md#parseoption">ParseOption</a>
<span class="inline-text"> * &gt;</span>
<span class="bold-text"><b>Options</b></span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.h#L41" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<br/>
<a id="stringarray"></a>
<h2>StringArray</h2>
<span class="inline-text">std::vector&lt; </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &gt;</span>
<span class="bold-text"><b>StringArray</b></span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.h#L42" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<br/>
<a id="_programname"></a>
<h2>_programName</h2>
<a href="namespaceMdDox.md#path">Path</a>
<span class="bold-text"><b>_programName</b></span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.h#L45" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<br/>
<a id="_maxlongswitch"></a>
<h2>_maxLongSwitch</h2>
<span class="inline-text">int</span>
<span class="bold-text"><b>_maxLongSwitch</b></span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.h#L46" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<br/>
<a id="_required"></a>
<h2>_required</h2>
<span class="inline-text">int</span>
<span class="bold-text"><b>_required</b></span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.h#L47" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<br/>
<a id="_used"></a>
<h2>_used</h2>
<span class="inline-text">int</span>
<span class="bold-text"><b>_used</b></span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.h#L48" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<br/>
<a id="_scanner"></a>
<h2>_scanner</h2>
<a href="classMdDox_1_1CommandLine_1_1Scanner.md#scanner">Scanner</a>
<span class="bold-text"><b>_scanner</b></span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.h#L49" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<br/>
<a id="_switches"></a>
<h2>_switches</h2>
<a href="classMdDox_1_1CommandLine_1_1Parser.md#switches">Switches</a>
<span class="bold-text"><b>_switches</b></span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.h#L50" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<br/>
<a id="_argumentlist"></a>
<h2>_argumentList</h2>
<a href="classMdDox_1_1CommandLine_1_1Parser.md#stringarray">StringArray</a>
<span class="bold-text"><b>_argumentList</b></span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.h#L51" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<br/>
<a id="_options"></a>
<h2>_options</h2>
<a href="classMdDox_1_1CommandLine_1_1Parser.md#options">Options</a>
<span class="bold-text"><b>_options</b></span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.h#L52" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<br/>
<a id="hasswitch"></a>
<h2>hasSwitch</h2>
<span class="inline-text">bool</span>
<span class="bold-text"><b>hasSwitch</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">sw</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.h#L54" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.cpp#L47" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="initializeoption"></a>
<h2>initializeOption</h2>
<span class="inline-text">bool</span>
<span class="bold-text"><b>initializeOption</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1CommandLine_1_1ParseOption.md#parseoption">ParseOption</a>
<span class="inline-text"> *</span>
<span class="inline-text">opt</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="structMdDox_1_1CommandLine_1_1Switch.md#switch">Switch</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">sw</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.h#L56" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.cpp#L321" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="initializeswitches"></a>
<h2>initializeSwitches</h2>
<span class="inline-text">bool</span>
<span class="bold-text"><b>initializeSwitches</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="structMdDox_1_1CommandLine_1_1Switch.md#switch">Switch</a>
<span class="inline-text"> *</span>
<span class="inline-text">switches</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">uint32_t</span>
<span class="inline-text">count</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.h#L58" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.cpp#L364" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="writeerror"></a>
<h2>writeError</h2>
<span class="inline-text">int</span>
<span class="bold-text"><b>writeError</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#outputstringstream">OutputStringStream</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">stream</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.h#L60" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.cpp#L394" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="parser"></a>
<h2>Parser</h2>
<span class="bold-text"><b>Parser</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.h#L63" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.cpp#L34" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="~parser"></a>
<h2>~Parser</h2>
<span class="bold-text"><b>~Parser</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.h#L64" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.cpp#L41" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="parse"></a>
<h2>parse</h2>
<span class="inline-text">int</span>
<span class="bold-text"><b>parse</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">int</span>
<span class="inline-text">argc</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">char **</span>
<span class="inline-text">argv</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="structMdDox_1_1CommandLine_1_1Switch.md#switch">Switch</a>
<span class="inline-text"> *</span>
<span class="inline-text">switches</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">uint32_t</span>
<span class="inline-text">count</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Attempts to match the rules supplied in the switch specifications with the supplied argument vector. </span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.h#L70" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.cpp#L52" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1CommandLine_1_1Scanner.md#clear" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">clear</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1CommandLine_1_1Scanner.md#append" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">append</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1CommandLine_1_1Token.md#gettype" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">getType</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="namespaceMdDox_1_1CommandLine.md#tok_eos" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">TOK_EOS</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1CommandLine_1_1Scanner.md#lex" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">lex</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="namespaceMdDox_1_1CommandLine.md#tok_error" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">TOK_ERROR</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1CommandLine_1_1Token.md#getvalue" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">getValue</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1CommandLine_1_1Parser.md#usage" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">usage</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="namespaceMdDox_1_1CommandLine.md#tok_switch_short" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">TOK_SWITCH_SHORT</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="namespaceMdDox_1_1CommandLine.md#tok_switch_long" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">TOK_SWITCH_LONG</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="namespaceMdDox_1_1CommandLine.md#tok_next" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">TOK_NEXT</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1CommandLine_1_1ParseOption.md#makepresent" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">makePresent</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1CommandLine_1_1ParseOption.md#isoptional" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">isOptional</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1CommandLine_1_1ParseOption.md#getargcount" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">getArgCount</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="namespaceMdDox_1_1CommandLine.md#tok_identifier" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">TOK_IDENTIFIER</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1CommandLine_1_1ParseOption.md#setvalue" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">setValue</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="namespaceMdDox_1_1CommandLine.md#tok_option" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">TOK_OPTION</span>
</a>
</span>
<br/>
<br/>
<a id="loginput"></a>
<h2>logInput</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>logInput</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Logs the supplied input to stdout. </span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.h#L75" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.cpp#L178" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1CommandLine_1_1Scanner.md#getvalue" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">getValue</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1Console.md#writeline" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">writeLine</span>
</a>
</span>
<br/>
<br/>
<a id="arguments"></a>
<h2>arguments</h2>
<a href="classMdDox_1_1CommandLine_1_1Parser.md#stringarray">StringArray</a>
<span class="inline-text"> &amp;</span>
<span class="bold-text"><b>arguments</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Returns the list of arguments that were not handled with switches. </span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.h#L80" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<br/>
<a id="programpath"></a>
<h2>programPath</h2>
<a href="namespaceMdDox.md#string">String</a>
<span class="bold-text"><b>programPath</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Returns the path of the program that was supplied to main via argv[0] </span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.h#L88" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<br/>
<a id="programname"></a>
<h2>programName</h2>
<a href="namespaceMdDox.md#string">String</a>
<span class="bold-text"><b>programName</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Returns only the file name portion of the program that was supplied to main via argv[0] </span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.h#L96" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.cpp#L185" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="programdirectory"></a>
<h2>programDirectory</h2>
<a href="namespaceMdDox.md#string">String</a>
<span class="bold-text"><b>programDirectory</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Extracts the directory from the supplied path to main. </span>
<br/>
<br/>
<a id="returns"></a>
<h4>Returns</h4>
<span class="inline-text">The directory name of the program from argv[0]</span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.h#L102" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.cpp#L190" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="ispresent"></a>
<h2>isPresent</h2>
<span class="inline-text">bool</span>
<span class="bold-text"><b>isPresent</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const uint32_t &amp;</span>
<span class="inline-text">enumId</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>enumId</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">The switch id</span>
</li>
</ul>
<a id="returns"></a>
<h4>Returns</h4>
<span class="inline-text">true if it is supplied on the command line false otherwise</span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.h#L112" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.cpp#L200" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="option"></a>
<h2>option</h2>
<a href="classMdDox_1_1CommandLine_1_1ParseOption.md#parseoption">ParseOption</a>
<span class="inline-text"> *</span>
<span class="bold-text"><b>option</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const uint32_t &amp;</span>
<span class="inline-text">enumId</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>enumId</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">The switch id</span>
</li>
</ul>
<a id="returns"></a>
<h4>Returns</h4>
<span class="inline-text">the option at the enumId or null if the id is out of bounds</span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.h#L116" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.cpp#L207" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="int32"></a>
<h2>int32</h2>
<span class="inline-text">int32_t</span>
<span class="bold-text"><b>int32</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const uint32_t &amp;</span>
<span class="inline-text">enumId</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">size_t</span>
<span class="inline-text">idx</span>
<span class="inline-text"> = </span>
<span class="inline-text">0</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">int32_t</span>
<span class="inline-text">defaultValue</span>
<span class="inline-text"> = </span>
<span class="inline-text">-1</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">int32_t</span>
<span class="inline-text">base</span>
<span class="inline-text"> = </span>
<span class="inline-text">10</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.h#L118" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.cpp#L214" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="int64"></a>
<h2>int64</h2>
<span class="inline-text">int64_t</span>
<span class="bold-text"><b>int64</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const uint32_t &amp;</span>
<span class="inline-text">enumId</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">size_t</span>
<span class="inline-text">idx</span>
<span class="inline-text"> = </span>
<span class="inline-text">0</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">int64_t</span>
<span class="inline-text">defaultValue</span>
<span class="inline-text"> = </span>
<span class="inline-text">-1</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">int32_t</span>
<span class="inline-text">base</span>
<span class="inline-text"> = </span>
<span class="inline-text">10</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.h#L123" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.cpp#L227" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
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
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const uint32_t &amp;</span>
<span class="inline-text">enumId</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">size_t</span>
<span class="inline-text">idx</span>
<span class="inline-text"> = </span>
<span class="inline-text">0</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">defaultValue</span>
<span class="inline-text"> = </span>
<span class="inline-text">&quot;&quot;</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.h#L128" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.cpp#L240" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="usage"></a>
<h2>usage</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>usage</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.h#L132" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.cpp#L257" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1Console.md#writeline" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">writeLine</span>
</a>
</span>
<br/>
<br/>
<a id="usage"></a>
<h2>usage</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>usage</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">dest</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.h#L134" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.cpp#L264" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1CommandLine_1_1Parser.md#programname" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">programName</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="structMdDox_1_1CommandLine_1_1Switch.md#shortswitch" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">shortSwitch</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="structMdDox_1_1CommandLine_1_1Switch.md#longswitch" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">longSwitch</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1Char.md#length" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">length</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="structMdDox_1_1CommandLine_1_1Switch.md#description" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">description</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1StringUtils.md#split" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">split</span>
</a>
</span>
<br/>
<br/>
<a id="currentdirectory"></a>
<h2>currentDirectory</h2>
<a href="namespaceMdDox.md#string">String</a>
<span class="bold-text"><b>currentDirectory</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Returns the current working directory for this process. </span>
<br/>
<br/>
<a id="returns"></a>
<h4>Returns</h4>
<span class="inline-text">The current working directory.</span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.h#L108" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Parser.cpp#L195" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.cpp</span>
</a>
</span>
<br/>
<br/>
<br/>
<blockquote>
<img src="../images/debug24px.svg"/><span class="inline-text">The following sources were used to generate this page.</span>
<br/>
<span class="icon-list-item"><a href="../xml/classMdDox_1_1CommandLine_1_1Parser.xml#L1" class="icon-list-item"><img src="../images/lookInside24px.svg" class="icon-list-item"/><span class="icon-list-item">classMdDox_1_1CommandLine_1_1Parser.xml</span>
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
