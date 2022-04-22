<a id="application"></a>
<h1>Application</h1>
<a id="classmddox_1_1genapi_1_1application"></a>
<a href="https://github.com/CharlesCarley/MdDox#~">~</a>
<a href="index.md#index">MdDox</a>
<span class="inline-text">/</span>
<a href="namespaceMdDox.md#mddox">MdDox</a>
<span class="inline-text">::</span>
<a href="namespaceMdDox_1_1GenApi.md#genapi">GenApi</a>
<span class="inline-text">::</span>
<span class="bold-text"><b>Application</b></span>
<br/>
<br/>
<span class="inline-text">Entry point for the </span>
<a href="namespaceMdDox_1_1GenApi.md#genapi">GenApi</a>
<span class="inline-text"> program. </span>
<br/>
<a id="private-members"></a>
<h2>Private Members</h2>
<span class="icon-list-item"><a href="#_attributenames" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_attributeNames</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_complex" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_complex</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_elementnames" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_elementNames</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_enumvalues" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_enumValues</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_groupnames" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_groupNames</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_indexfile" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_indexFile</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_outdir" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_outDir</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_simple" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_simple</span>
</a>
</span>
<br/>
<a id="public-methods"></a>
<h2>Public Methods</h2>
<span class="icon-list-item"><a href="#application" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">Application</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#go" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">go</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#log" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">log</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#logattributenames" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">logAttributeNames</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#logcomplex" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">logComplex</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#logelementnames" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">logElementNames</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#logenumvalues" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">logEnumValues</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#loggroupnames" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">logGroupNames</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#logsimple" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">logSimple</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parse" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">parse</span>
</a>
</span>
<br/>
<a id="public-static-methods"></a>
<h2>Public Static Methods</h2>
<span class="icon-list-item"><a href="#logtype" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">logType</span>
</a>
</span>
<br/>
<a id="details"></a>
<h2>Details</h2>

```txt
Usage: GenApi <options> <arg[0] .. arg[n]>

     -h, --help        Display this help message
     -i, --input       Specify input file
     -o, --out         Specify an output directory
     -c, --complex     Log complexType names
     -s, --simple      Log simpleType names
     -a, --attributes  Log attribute names
     -e, --element     Log element names
     -g, --group       Log group names
     -n, --enum        Log enum values
```
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Main.cpp#L138" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Main.cpp</span>
</a>
</span>
<br/>
<br/>
<span class="icon-list-item"><a href="#application" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<a id="_attributenames"></a>
<h2>_attributeNames</h2>
<span class="inline-text">bool</span>
<span class="bold-text"><b>_attributeNames</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Main.cpp#L145" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Main.cpp</span>
</a>
</span>
<br/>
<br/>
<span class="icon-list-item"><a href="#application" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="_complex"></a>
<h2>_complex</h2>
<span class="inline-text">bool</span>
<span class="bold-text"><b>_complex</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Main.cpp#L143" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Main.cpp</span>
</a>
</span>
<br/>
<br/>
<span class="icon-list-item"><a href="#application" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="_elementnames"></a>
<h2>_elementNames</h2>
<span class="inline-text">bool</span>
<span class="bold-text"><b>_elementNames</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Main.cpp#L146" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Main.cpp</span>
</a>
</span>
<br/>
<br/>
<span class="icon-list-item"><a href="#application" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="_enumvalues"></a>
<h2>_enumValues</h2>
<span class="inline-text">bool</span>
<span class="bold-text"><b>_enumValues</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Main.cpp#L148" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Main.cpp</span>
</a>
</span>
<br/>
<br/>
<span class="icon-list-item"><a href="#application" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="_groupnames"></a>
<h2>_groupNames</h2>
<span class="inline-text">bool</span>
<span class="bold-text"><b>_groupNames</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Main.cpp#L147" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Main.cpp</span>
</a>
</span>
<br/>
<br/>
<span class="icon-list-item"><a href="#application" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="_indexfile"></a>
<h2>_indexFile</h2>
<a href="classMdDox_1_1PathUtil.md#pathutil">PathUtil</a>
<span class="bold-text"><b>_indexFile</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Main.cpp#L140" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Main.cpp</span>
</a>
</span>
<br/>
<br/>
<span class="icon-list-item"><a href="#application" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="_outdir"></a>
<h2>_outDir</h2>
<a href="classMdDox_1_1PathUtil.md#pathutil">PathUtil</a>
<span class="bold-text"><b>_outDir</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Main.cpp#L141" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Main.cpp</span>
</a>
</span>
<br/>
<br/>
<span class="icon-list-item"><a href="#application" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="_simple"></a>
<h2>_simple</h2>
<span class="inline-text">bool</span>
<span class="bold-text"><b>_simple</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Main.cpp#L144" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Main.cpp</span>
</a>
</span>
<br/>
<br/>
<span class="icon-list-item"><a href="#application" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="application"></a>
<h2>Application</h2>
<span class="bold-text"><b>Application</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Main.cpp#L151" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Main.cpp</span>
</a>
</span>
<br/>
<br/>
<span class="icon-list-item"><a href="#application" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="go"></a>
<h2>go</h2>
<span class="inline-text">int</span>
<span class="bold-text"><b>go</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1ParserBase.md#parse">parse</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1PathUtil.md#fullpath">fullPath</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1Xml_1_1Parser.md#root">root</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1GenApi_1_1Generator.md#write">write</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Main.cpp#L258" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Main.cpp</span>
</a>
</span>
<br/>
<br/>
<span class="icon-list-item"><a href="#application" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="log"></a>
<h2>log</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>log</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#stringmap">StringMap</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">map</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Main.cpp#L193" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Main.cpp</span>
</a>
</span>
<br/>
<br/>
<span class="icon-list-item"><a href="#application" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="logattributenames"></a>
<h2>logAttributeNames</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>logAttributeNames</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#node">Xml::Node</a>
<span class="inline-text"> *</span>
<span class="inline-text">node</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Main.cpp#L230" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Main.cpp</span>
</a>
</span>
<br/>
<br/>
<span class="icon-list-item"><a href="#application" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="logcomplex"></a>
<h2>logComplex</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>logComplex</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#node">Xml::Node</a>
<span class="inline-text"> *</span>
<span class="inline-text">node</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Main.cpp#L215" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Main.cpp</span>
</a>
</span>
<br/>
<br/>
<span class="icon-list-item"><a href="#application" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="logelementnames"></a>
<h2>logElementNames</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>logElementNames</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#node">Xml::Node</a>
<span class="inline-text"> *</span>
<span class="inline-text">node</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Main.cpp#L237" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Main.cpp</span>
</a>
</span>
<br/>
<br/>
<span class="icon-list-item"><a href="#application" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="logenumvalues"></a>
<h2>logEnumValues</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>logEnumValues</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#node">Xml::Node</a>
<span class="inline-text"> *</span>
<span class="inline-text">node</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Main.cpp#L251" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Main.cpp</span>
</a>
</span>
<br/>
<br/>
<span class="icon-list-item"><a href="#application" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="loggroupnames"></a>
<h2>logGroupNames</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>logGroupNames</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#node">Xml::Node</a>
<span class="inline-text"> *</span>
<span class="inline-text">node</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Main.cpp#L244" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Main.cpp</span>
</a>
</span>
<br/>
<br/>
<span class="icon-list-item"><a href="#application" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="logsimple"></a>
<h2>logSimple</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>logSimple</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#node">Xml::Node</a>
<span class="inline-text"> *</span>
<span class="inline-text">node</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Main.cpp#L223" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Main.cpp</span>
</a>
</span>
<br/>
<br/>
<span class="icon-list-item"><a href="#application" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="parse"></a>
<h2>parse</h2>
<span class="inline-text">bool</span>
<span class="bold-text"><b>parse</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const int</span>
<span class="inline-text">argc</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">char **</span>
<span class="inline-text">argv</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1CommandLine_1_1Parser.md#parse">parse</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceMdDox.md#switches">Switches</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceMdDox_1_1GenApi.md#optionsmax">OptionsMax</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1CommandLine_1_1Parser.md#string">string</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceMdDox_1_1GenApi.md#optinputfile">OptInputFile</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceMdDox_1_1GenApi.md#optoutdir">OptOutDir</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1CommandLine_1_1Parser.md#ispresent">isPresent</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceMdDox_1_1GenApi.md#optlogcomplextypes">OptLogComplexTypes</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceMdDox_1_1GenApi.md#optlogsimpletypes">OptLogSimpleTypes</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceMdDox_1_1GenApi.md#optlogattributenames">OptLogAttributeNames</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceMdDox_1_1GenApi.md#optlogelementnames">OptLogElementNames</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceMdDox_1_1GenApi.md#optloggroupnames">OptLogGroupNames</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceMdDox_1_1GenApi.md#optoplogenumvalues">OptOpLogEnumValues</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1PathUtil.md#empty">empty</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1CommandLine_1_1Parser.md#usage">usage</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Main.cpp#L153" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Main.cpp</span>
</a>
</span>
<br/>
<br/>
<span class="icon-list-item"><a href="#application" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
<a id="logtype"></a>
<h2>logType</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>logType</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="namespaceMdDox.md#stringmap">StringMap</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">dest</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#node">Xml::Node</a>
<span class="inline-text"> *</span>
<span class="inline-text">node</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const char *</span>
<span class="inline-text">name</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const char *</span>
<span class="inline-text">attr</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#istypeof">isTypeOf</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#attribute">attribute</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#haschildren">hasChildren</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#children">children</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Main.cpp#L178" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Main.cpp</span>
</a>
</span>
<br/>
<br/>
<span class="icon-list-item"><a href="#application" class="icon-list-item"><img src="../images/jumpToTop.svg" class="icon-list-item"/><span class="icon-list-item">top</span>
</a>
</span>
<br/>
</div>
</div>
</body>
</html>
