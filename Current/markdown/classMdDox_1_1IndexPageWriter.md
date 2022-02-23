<a id="indexpagewriter"></a>
<h1>IndexPageWriter</h1>
<a id="classMdDox_1_1IndexPageWriter"></a>
<a href="https://github.com/CharlesCarley/MdDox">~</a>
<a href="indexpage.md#mddox">MdDox</a>
<span class="inline-text">/</span>
<a href="index.md#index">Index</a>
<span class="inline-text">/</span>
<a href="namespaceMdDox.md#mddox">MdDox</a>
<span class="inline-text">::</span>
<span class="bold-text"><b>IndexPageWriter</b></span>
<br/>
<br/>
<a id="derived-from"></a>
<h4>Derived From</h4>
<div class="icon-link">
<img src="../images/class.svg"/><a href="classMdDox_1_1Doxygen_1_1Visitors_1_1DoxygenIndexQueryVisitor.md#mddoxdoxygenvisitorsdoxygenindexqueryvisitor">MdDox::Doxygen::Visitors::DoxygenIndexQueryVisitor</a>
</div>
<img src="../images/dot/internal-diagram-110.dot.svg"/><br/>
<a id="private-members"></a>
<h2>Private Members</h2>
<span class="icon-list-item"><a href="#_indexdir" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_indexDir</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_outdir" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_outDir</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_stream" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_stream</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_writer" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_writer</span>
</a>
</span>
<br/>
<a id="private-methods"></a>
<h2>Private Methods</h2>
<span class="icon-list-item"><a href="#dispatchfilter" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">dispatchFilter</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#makefilename" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">makeFilename</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#writereferencefile" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">writeReferenceFile</span>
</a>
</span>
<br/>
<a id="public-methods"></a>
<h2>Public Methods</h2>
<span class="icon-list-item"><a href="#indexpagewriter" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">IndexPageWriter</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#exec" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">exec</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/IndexPageWriter.h#L35" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">IndexPageWriter.h</span>
</a>
</span>
<a id="_indexdir"></a>
<h2>_indexDir</h2>
<a href="namespaceMdDox.md#string">String</a>
<span class="bold-text"><b>_indexDir</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/IndexPageWriter.h#L39" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">IndexPageWriter.h</span>
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
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/IndexPageWriter.h#L40" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">IndexPageWriter.h</span>
</a>
</span>
<br/>
<a id="_stream"></a>
<h2>_stream</h2>
<a href="namespaceMdDox.md#outputfilestream">OutputFileStream</a>
<span class="inline-text"> *</span>
<span class="bold-text"><b>_stream</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/IndexPageWriter.h#L37" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">IndexPageWriter.h</span>
</a>
</span>
<br/>
<a id="_writer"></a>
<h2>_writer</h2>
<a href="classMdDox_1_1DocumentWriter.md#documentwriter">DocumentWriter</a>
<span class="inline-text"> *</span>
<span class="bold-text"><b>_writer</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/IndexPageWriter.h#L38" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">IndexPageWriter.h</span>
</a>
</span>
<br/>
<a id="dispatchfilter"></a>
<h2>dispatchFilter</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>dispatchFilter</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1IndexPageFilter.md#indexpagefilter">IndexPageFilter</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">filter</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/IndexPageWriter.h#L42" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">IndexPageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/IndexPageWriter.cpp#L146" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">IndexPageWriter.cpp</span>
</a>
</span>
<br/>
<a id="makefilename"></a>
<h2>makeFilename</h2>
<a href="namespaceMdDox.md#string">String</a>
<span class="bold-text"><b>makeFilename</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Reference.md#reference">Reference</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">ref</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/IndexPageWriter.h#L44" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">IndexPageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/IndexPageWriter.cpp#L158" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">IndexPageWriter.cpp</span>
</a>
</span>
<br/>
<a id="writereferencefile"></a>
<h2>writeReferenceFile</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>writeReferenceFile</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">name</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="namespaceMdDox.md#iconid">IconId</a>
<span class="inline-text">icon</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">heading</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#referencelist">ReferenceList</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">list</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/IndexPageWriter.h#L46" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">IndexPageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/IndexPageWriter.cpp#L165" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">IndexPageWriter.cpp</span>
</a>
</span>
<br/>
<a id="indexpagewriter"></a>
<h2>IndexPageWriter</h2>
<span class="bold-text"><b>IndexPageWriter</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1DocumentWriter.md#documentwriter">DocumentWriter</a>
<span class="inline-text"> *</span>
<span class="inline-text">writer</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="namespaceMdDox.md#string">String</a>
<span class="inline-text">indexDir</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/IndexPageWriter.h#L52" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">IndexPageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/IndexPageWriter.cpp#L116" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">IndexPageWriter.cpp</span>
</a>
</span>
<br/>
<a id="exec"></a>
<h2>exec</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>exec</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1Doxygen_1_1DoxygenIndexQuery.md#doxygendoxygenindexquery">Doxygen::DoxygenIndexQuery</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">query</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1PathUtil.md#pathutil">PathUtil</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">outDir</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1SiteBuilder.md#get">get</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1PathUtil.md#filename">fileName</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceMdDox.md#stringcombine">StringCombine</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1SiteBuilder.md#outputfileext">outputFileExt</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1PathUtil.md#fullpath">fullPath</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1Doxygen_1_1DoxygenIndexQuery.md#visit">visit</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1SiteBuilder.md#getcompoundname">getCompoundName</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1SiteBuilder.md#projecttitle">projectTitle</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceMdDox.md#writegenerictitlebar">writeGenericTitleBar</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1SiteBuilder.md#getrefid">getRefId</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1Reference.md#getid">getId</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceMdDox.md#ico_file">ICO_FILE</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1Reference.md#getname">getName</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1IndexPageFilter.md#pages">pages</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceMdDox.md#ico_folder">ICO_FOLDER</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1IndexPageFilter.md#directories">directories</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceMdDox.md#ico_namespace">ICO_NAMESPACE</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1IndexPageFilter.md#namespaces">namespaces</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceMdDox.md#ico_class">ICO_CLASS</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1IndexPageFilter.md#classes">classes</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/IndexPageWriter.h#L54" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">IndexPageWriter.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/MdDoxTree/IndexPageWriter.cpp#L191" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">IndexPageWriter.cpp</span>
</a>
</span>
<br/>
</div>
</div>
</body>
</html>
