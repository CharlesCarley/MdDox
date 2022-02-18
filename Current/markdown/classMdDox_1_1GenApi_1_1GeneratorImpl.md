<a id="generatorimpl"></a>
<h1>GeneratorImpl</h1>
<a id="classMdDox_1_1GenApi_1_1GeneratorImpl"></a>
<a href="https://github.com/CharlesCarley/MdDox">~</a>
<a href="indexpage.md#mddox">MdDox</a>
<span class="inline-text">/</span>
<a href="index.md#index">Index</a>
<span class="inline-text">/</span>
<a href="namespaceMdDox.md#">MdDox</a>
<span class="inline-text">::</span>
<a href="dir_f29546df2d60a62028851d3354c1d20f.md#">Tools/GenApi</a>
<span class="inline-text">::</span>
<span class="bold-text"><b>GeneratorImpl</b></span>
<br/>
<br/>
<a id="private-members"></a>
<h2>Private Members</h2>
<span class="icon-list-item"><a href="#_alloc" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_alloc</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_attribute" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_attribute</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_complex" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_complex</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_element" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_element</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_enums" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_enums</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_filter" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_filter</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_group" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_group</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_header" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_header</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_out" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_out</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_root" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_root</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_simple" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_simple</span>
</a>
</span>
<br/>
<a id="private-methods"></a>
<h2>Private Methods</h2>
<span class="icon-list-item"><a href="#isgroup" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">isGroup</span>
</a>
</span>
<br/>
<a id="public-methods"></a>
<h2>Public Methods</h2>
<span class="icon-list-item"><a href="#generatorimpl" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">GeneratorImpl</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#~generatorimpl" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">~GeneratorImpl</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#getelement" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">getElement</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#getelementtype" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">getElementType</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#logskip" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">logSkip</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#processcommon" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">processCommon</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#processcomplex" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">processComplex</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#processcomplexattribute" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">processComplexAttribute</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#processcomplexelement" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">processComplexElement</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#processcomplexelementbase" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">processComplexElementBase</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#processcomplexelementcomplex" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">processComplexElementComplex</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#processcomplexelementgroup" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">processComplexElementGroup</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#processcomplexelementsimple" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">processComplexElementSimple</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#processcomplexsequence" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">processComplexSequence</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#processcomplextypes" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">processComplexTypes</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#processenumeration" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">processEnumeration</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#processgroup" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">processGroup</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#processgrouptypes" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">processGroupTypes</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#processrestriction" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">processRestriction</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#processsimple" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">processSimple</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#processsimpletypes" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">processSimpleTypes</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#readsubstitutions" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">readSubstitutions</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#write" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">write</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#writeschema" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">writeSchema</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/GenApi/Generator.cpp#L47" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<a id="_alloc"></a>
<h2>_alloc</h2>
<a href="namespaceMdDox_1_1GenApi.md#allocarray">AllocArray</a>
<span class="bold-text"><b>_alloc</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/GenApi/Generator.cpp#L53" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="_attribute"></a>
<h2>_attribute</h2>
<a href="classMdDox_1_1GenApi_1_1Database.md#database">Database</a>
<span class="bold-text"><b>_attribute</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/GenApi/Generator.cpp#L57" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="_complex"></a>
<h2>_complex</h2>
<a href="classMdDox_1_1GenApi_1_1Database.md#database">Database</a>
<span class="bold-text"><b>_complex</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/GenApi/Generator.cpp#L55" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="_element"></a>
<h2>_element</h2>
<a href="classMdDox_1_1GenApi_1_1Database.md#database">Database</a>
<span class="bold-text"><b>_element</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/GenApi/Generator.cpp#L58" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="_enums"></a>
<h2>_enums</h2>
<a href="classMdDox_1_1GenApi_1_1Database.md#database">Database</a>
<span class="bold-text"><b>_enums</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/GenApi/Generator.cpp#L60" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="_filter"></a>
<h2>_filter</h2>
<a href="namespaceMdDox.md#typefiltermap">TypeFilterMap</a>
<span class="bold-text"><b>_filter</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/GenApi/Generator.cpp#L61" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="_group"></a>
<h2>_group</h2>
<a href="classMdDox_1_1GenApi_1_1Database.md#database">Database</a>
<span class="bold-text"><b>_group</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/GenApi/Generator.cpp#L59" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="_header"></a>
<h2>_header</h2>
<a href="namespaceMdDox.md#string">String</a>
<span class="bold-text"><b>_header</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/GenApi/Generator.cpp#L50" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="_out"></a>
<h2>_out</h2>
<a href="classMdDox_1_1PathUtil.md#pathutil">PathUtil</a>
<span class="bold-text"><b>_out</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/GenApi/Generator.cpp#L51" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="_root"></a>
<h2>_root</h2>
<a href="classMdDox_1_1Xml_1_1Node.md#node">Node</a>
<span class="inline-text"> *</span>
<span class="bold-text"><b>_root</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/GenApi/Generator.cpp#L49" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="_simple"></a>
<h2>_simple</h2>
<a href="classMdDox_1_1GenApi_1_1Database.md#database">Database</a>
<span class="bold-text"><b>_simple</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/GenApi/Generator.cpp#L56" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="isgroup"></a>
<h2>isGroup</h2>
<span class="inline-text">bool</span>
<span class="bold-text"><b>isGroup</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">type</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/GenApi/Generator.cpp#L63" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="generatorimpl"></a>
<h2>GeneratorImpl</h2>
<span class="bold-text"><b>GeneratorImpl</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#node">Node</a>
<span class="inline-text"> *</span>
<span class="inline-text">root</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1PathUtil.md#pathutil">PathUtil</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">out</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/GenApi/Generator.cpp#L69" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="~generatorimpl"></a>
<h2>~GeneratorImpl</h2>
<span class="bold-text"><b>~GeneratorImpl</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/GenApi/Generator.cpp#L75" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="getelement"></a>
<h2>getElement</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>getElement</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="structMdDox_1_1GenApi_1_1Element.md#element">Element</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">dest</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#node">Node</a>
<span class="inline-text"> *</span>
<span class="inline-text">tag</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1Xml_1_1Node.md#attribute" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">attribute</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1Xml_1_1Node.md#parent" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">parent</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1Xml_1_1Node.md#istypeof" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">isTypeOf</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="structMdDox_1_1GenApi_1_1Element.md#type" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">type</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="structMdDox_1_1GenApi_1_1Element.md#isunbounded" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">isUnbounded</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="structMdDox_1_1GenApi_1_1Element.md#searchterm" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">searchTerm</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="namespaceMdDox_1_1GenApi.md#base_type" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">BASE_TYPE</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="structMdDox_1_1GenApi_1_1Element.md#gentype" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">genType</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="structMdDox_1_1GenApi_1_1Element.md#genname" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">genName</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1GenApi_1_1Database.md#value" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">value</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="namespaceMdDox_1_1GenApi.md#simple_type" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">SIMPLE_TYPE</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="namespaceMdDox_1_1GenApi.md#complex_type" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">COMPLEX_TYPE</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="namespaceMdDox_1_1GenApi.md#group_type" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">GROUP_TYPE</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="structMdDox_1_1GenApi_1_1Element.md#issingle" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">isSingle</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="structMdDox_1_1GenApi_1_1Element.md#isrequired" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">isRequired</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="structMdDox_1_1GenApi_1_1Element.md#minoccurs" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">minOccurs</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="structMdDox_1_1GenApi_1_1Element.md#maxoccurs" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">maxOccurs</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1Char.md#touint32" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">toUint32</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="structMdDox_1_1GenApi_1_1Element.md#isvalid" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">isValid</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/GenApi/Generator.cpp#L185" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="getelementtype"></a>
<h2>getElementType</h2>
<span class="inline-text">int</span>
<span class="bold-text"><b>getElementType</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#node">Node</a>
<span class="inline-text"> *</span>
<span class="inline-text">tag</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1Xml_1_1Node.md#attribute" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">attribute</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="namespaceMdDox_1_1GenApi.md#base_type" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">BASE_TYPE</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1GenApi_1_1Database.md#contains" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">contains</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="namespaceMdDox_1_1GenApi.md#simple_type" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">SIMPLE_TYPE</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="namespaceMdDox_1_1GenApi.md#complex_type" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">COMPLEX_TYPE</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="namespaceMdDox_1_1GenApi.md#group_type" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">GROUP_TYPE</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/GenApi/Generator.cpp#L172" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="logskip"></a>
<h2>logSkip</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>logSkip</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#node">Node</a>
<span class="inline-text"> *</span>
<span class="inline-text">tag</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1Console.md#writeline" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">writeLine</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1Xml_1_1Node.md#name" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">name</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/GenApi/Generator.cpp#L427" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="processcommon"></a>
<h2>processCommon</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>processCommon</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1GenApi_1_1Common.md#addinclude" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">addInclude</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1GenApi_1_1Common.md#addforward" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">addForward</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1GenApi_1_1Common.md#write" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">write</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="namespaceMdDox.md#stringcombine" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">StringCombine</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1PathUtil.md#rooteddir" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">rootedDir</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/GenApi/Generator.cpp#L400" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="processcomplex"></a>
<h2>processComplex</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>processComplex</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1GenApi_1_1Group.md#group">Group</a>
<span class="inline-text"> *</span>
<span class="inline-text">complex</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#node">Node</a>
<span class="inline-text"> *</span>
<span class="inline-text">tag</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1Xml_1_1Node.md#children" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">children</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1GenApi_1_1Database.md#object" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">object</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1GenApi_1_1Group.md#addgroup" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">addGroup</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1Xml_1_1Node.md#at" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">at</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/GenApi/Generator.cpp#L334" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="processcomplexattribute"></a>
<h2>processComplexAttribute</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>processComplexAttribute</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1GenApi_1_1Group.md#group">Group</a>
<span class="inline-text"> *</span>
<span class="inline-text">complex</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#node">Node</a>
<span class="inline-text"> *</span>
<span class="inline-text">tag</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1Xml_1_1Node.md#attribute" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">attribute</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1GenApi_1_1Database.md#value" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">value</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1StringUtils.md#toupperfirst" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">toUpperFirst</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1GenApi_1_1Group.md#addstringattribute" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">addStringAttribute</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1GenApi_1_1Group.md#addintegerattribute" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">addIntegerAttribute</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1GenApi_1_1Database.md#contains" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">contains</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1GenApi_1_1Group.md#addenumattribute" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">addEnumAttribute</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/GenApi/Generator.cpp#L131" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="processcomplexelement"></a>
<h2>processComplexElement</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>processComplexElement</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1GenApi_1_1Group.md#group">Group</a>
<span class="inline-text"> *</span>
<span class="inline-text">complex</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#node">Node</a>
<span class="inline-text"> *</span>
<span class="inline-text">tag</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="namespaceMdDox_1_1GenApi.md#base_type" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">BASE_TYPE</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="namespaceMdDox_1_1GenApi.md#simple_type" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">SIMPLE_TYPE</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="namespaceMdDox_1_1GenApi.md#complex_type" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">COMPLEX_TYPE</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="namespaceMdDox_1_1GenApi.md#group_type" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">GROUP_TYPE</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/GenApi/Generator.cpp#L301" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="processcomplexelementbase"></a>
<h2>processComplexElementBase</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>processComplexElementBase</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1GenApi_1_1Group.md#group">Group</a>
<span class="inline-text"> *</span>
<span class="inline-text">group</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#node">Node</a>
<span class="inline-text"> *</span>
<span class="inline-text">tag</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1Xml_1_1Node.md#attribute" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">attribute</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="structMdDox_1_1GenApi_1_1Element.md#typecode" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">typeCode</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="structMdDox_1_1GenApi_1_1Element.md#isvalid" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">isValid</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1GenApi_1_1Group.md#addstringtextelement" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">addStringTextElement</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/GenApi/Generator.cpp#L234" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="processcomplexelementcomplex"></a>
<h2>processComplexElementComplex</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>processComplexElementComplex</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1GenApi_1_1Group.md#group">Group</a>
<span class="inline-text"> *</span>
<span class="inline-text">group</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#node">Node</a>
<span class="inline-text"> *</span>
<span class="inline-text">tag</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1Xml_1_1Node.md#attribute" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">attribute</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="structMdDox_1_1GenApi_1_1Element.md#isvalid" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">isValid</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="structMdDox_1_1GenApi_1_1Element.md#typecode" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">typeCode</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="structMdDox_1_1GenApi_1_1Element.md#isunbounded" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">isUnbounded</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1GenApi_1_1Group.md#addelement" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">addElement</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1GenApi_1_1Group.md#addsingleelement" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">addSingleElement</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/GenApi/Generator.cpp#L261" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="processcomplexelementgroup"></a>
<h2>processComplexElementGroup</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>processComplexElementGroup</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1GenApi_1_1Group.md#group">Group</a>
<span class="inline-text"> *</span>
<span class="inline-text">group</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#node">Node</a>
<span class="inline-text"> *</span>
<span class="inline-text">tag</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="structMdDox_1_1GenApi_1_1Element.md#isvalid" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">isValid</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1GenApi_1_1Database.md#object" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">object</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="structMdDox_1_1GenApi_1_1Element.md#searchterm" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">searchTerm</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1GenApi_1_1Group.md#addgroup" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">addGroup</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/GenApi/Generator.cpp#L286" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="processcomplexelementsimple"></a>
<h2>processComplexElementSimple</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>processComplexElementSimple</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1GenApi_1_1Group.md#group">Group</a>
<span class="inline-text"> *</span>
<span class="inline-text">group</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#node">Node</a>
<span class="inline-text"> *</span>
<span class="inline-text">tag</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/GenApi/Generator.cpp#L255" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="processcomplexsequence"></a>
<h2>processComplexSequence</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>processComplexSequence</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1GenApi_1_1Group.md#group">Group</a>
<span class="inline-text"> *</span>
<span class="inline-text">complex</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#node">Node</a>
<span class="inline-text"> *</span>
<span class="inline-text">tag</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1Xml_1_1Node.md#children" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">children</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/GenApi/Generator.cpp#L323" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="processcomplextypes"></a>
<h2>processComplexTypes</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>processComplexTypes</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="namespaceMdDox.md#stringcombine" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">StringCombine</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1PathUtil.md#rooteddir" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">rootedDir</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/GenApi/Generator.cpp#L377" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="processenumeration"></a>
<h2>processEnumeration</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>processEnumeration</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1GenApi_1_1Simple.md#simple">Simple</a>
<span class="inline-text"> *</span>
<span class="inline-text">simple</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#node">Node</a>
<span class="inline-text"> *</span>
<span class="inline-text">tag</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1Xml_1_1Node.md#attribute" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">attribute</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1GenApi_1_1Database.md#contains" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">contains</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1GenApi_1_1Simple.md#addenumvalue" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">addEnumValue</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1GenApi_1_1Database.md#value" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">value</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/GenApi/Generator.cpp#L81" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="processgroup"></a>
<h2>processGroup</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>processGroup</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1GenApi_1_1Group.md#group">Group</a>
<span class="inline-text"> *</span>
<span class="inline-text">complex</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#node">Node</a>
<span class="inline-text"> *</span>
<span class="inline-text">tag</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1Xml_1_1Node.md#children" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">children</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/GenApi/Generator.cpp#L368" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="processgrouptypes"></a>
<h2>processGroupTypes</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>processGroupTypes</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/GenApi/Generator.cpp#L413" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="processrestriction"></a>
<h2>processRestriction</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>processRestriction</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1GenApi_1_1Simple.md#simple">Simple</a>
<span class="inline-text"> *</span>
<span class="inline-text">simple</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#node">Node</a>
<span class="inline-text"> *</span>
<span class="inline-text">tag</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1Xml_1_1Node.md#children" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">children</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/GenApi/Generator.cpp#L89" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="processsimple"></a>
<h2>processSimple</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>processSimple</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1GenApi_1_1Simple.md#simple">Simple</a>
<span class="inline-text"> *</span>
<span class="inline-text">simple</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#node">Node</a>
<span class="inline-text"> *</span>
<span class="inline-text">tag</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1Xml_1_1Node.md#children" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">children</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/GenApi/Generator.cpp#L98" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="processsimpletypes"></a>
<h2>processSimpleTypes</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>processSimpleTypes</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="namespaceMdDox.md#stringcombine" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">StringCombine</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1PathUtil.md#rooteddir" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">rootedDir</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/GenApi/Generator.cpp#L107" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="readsubstitutions"></a>
<h2>readSubstitutions</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>readSubstitutions</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="namespaceMdDox.md#maketypefilter" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">makeTypeFilter</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="namespaceMdDox_1_1Doxygen.md#getfilter" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">getFilter</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="namespaceMdDox_1_1Doxygen.md#getfiltersize" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">getFilterSize</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1GenApi_1_1Database.md#read" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">read</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/GenApi/Generator.cpp#L470" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="write"></a>
<h2>write</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>write</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1Xml_1_1Node.md#children" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">children</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/GenApi/Generator.cpp#L493" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="writeschema"></a>
<h2>writeSchema</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>writeSchema</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#node">Node</a>
<span class="inline-text"> *</span>
<span class="inline-text">schema</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1Xml_1_1Node.md#children" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">children</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1GenApi_1_1Database.md#insert" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">insert</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Tools/GenApi/Generator.cpp#L436" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<br/>
<br/>
<blockquote>
<img src="../images/debug.svg"/><span class="inline-text">The following sources were used to generate this page.</span>
<br/>
<span class="icon-list-item"><a href="../xml/classMdDox_1_1GenApi_1_1GeneratorImpl.xml#L1" class="icon-list-item"><img src="../images/lookInside.svg" class="icon-list-item"/><span class="icon-list-item">classMdDox_1_1GenApi_1_1GeneratorImpl.xml</span>
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
