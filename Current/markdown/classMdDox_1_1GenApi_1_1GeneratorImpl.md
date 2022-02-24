<a id="generatorimpl"></a>
<h1>GeneratorImpl</h1>
<a id="classMdDox_1_1GenApi_1_1GeneratorImpl"></a>
<a href="https://github.com/CharlesCarley/MdDox#~">~</a>
<a href="indexpage.md#mddox">MdDox</a>
<span class="inline-text">/</span>
<a href="index.md#index">Index</a>
<span class="inline-text">/</span>
<a href="namespaceMdDox.md#mddox">MdDox</a>
<span class="inline-text">::</span>
<a href="namespaceMdDox_1_1GenApi.md#genapi">GenApi</a>
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
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Generator.cpp#L47" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<a id="_alloc"></a>
<h2>_alloc</h2>
<a href="namespaceMdDox_1_1GenApi.md#allocarray">AllocArray</a>
<span class="bold-text"><b>_alloc</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Generator.cpp#L53" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<a id="_attribute"></a>
<h2>_attribute</h2>
<a href="classMdDox_1_1GenApi_1_1Database.md#database">Database</a>
<span class="bold-text"><b>_attribute</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Generator.cpp#L57" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<a id="_complex"></a>
<h2>_complex</h2>
<a href="classMdDox_1_1GenApi_1_1Database.md#database">Database</a>
<span class="bold-text"><b>_complex</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Generator.cpp#L55" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<a id="_element"></a>
<h2>_element</h2>
<a href="classMdDox_1_1GenApi_1_1Database.md#database">Database</a>
<span class="bold-text"><b>_element</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Generator.cpp#L58" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<a id="_enums"></a>
<h2>_enums</h2>
<a href="classMdDox_1_1GenApi_1_1Database.md#database">Database</a>
<span class="bold-text"><b>_enums</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Generator.cpp#L60" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<a id="_filter"></a>
<h2>_filter</h2>
<a href="namespaceMdDox.md#typefiltermap">TypeFilterMap</a>
<span class="bold-text"><b>_filter</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Generator.cpp#L61" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<a id="_group"></a>
<h2>_group</h2>
<a href="classMdDox_1_1GenApi_1_1Database.md#database">Database</a>
<span class="bold-text"><b>_group</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Generator.cpp#L59" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<a id="_header"></a>
<h2>_header</h2>
<a href="namespaceMdDox.md#string">String</a>
<span class="bold-text"><b>_header</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Generator.cpp#L50" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<a id="_out"></a>
<h2>_out</h2>
<a href="classMdDox_1_1PathUtil.md#pathutil">PathUtil</a>
<span class="bold-text"><b>_out</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Generator.cpp#L51" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<a id="_root"></a>
<h2>_root</h2>
<a href="classMdDox_1_1Xml_1_1Node.md#node">Node</a>
<span class="inline-text"> *</span>
<span class="bold-text"><b>_root</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Generator.cpp#L49" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<a id="_simple"></a>
<h2>_simple</h2>
<a href="classMdDox_1_1GenApi_1_1Database.md#database">Database</a>
<span class="bold-text"><b>_simple</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Generator.cpp#L56" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
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
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Generator.cpp#L63" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
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
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Generator.cpp#L69" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<a id="~generatorimpl"></a>
<h2>~GeneratorImpl</h2>
<span class="bold-text"><b>~GeneratorImpl</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Generator.cpp#L75" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
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
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#attribute">attribute</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#parent">parent</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#istypeof">isTypeOf</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="structMdDox_1_1GenApi_1_1Element.md#type">type</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="structMdDox_1_1GenApi_1_1Element.md#isunbounded">isUnbounded</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="structMdDox_1_1GenApi_1_1Element.md#searchterm">searchTerm</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceMdDox_1_1GenApi.md#base_type">BASE_TYPE</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="structMdDox_1_1GenApi_1_1Element.md#gentype">genType</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="structMdDox_1_1GenApi_1_1Element.md#genname">genName</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1GenApi_1_1Database.md#value">value</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceMdDox_1_1GenApi.md#simple_type">SIMPLE_TYPE</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceMdDox_1_1GenApi.md#complex_type">COMPLEX_TYPE</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceMdDox_1_1GenApi.md#group_type">GROUP_TYPE</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="structMdDox_1_1GenApi_1_1Element.md#issingle">isSingle</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="structMdDox_1_1GenApi_1_1Element.md#isrequired">isRequired</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="structMdDox_1_1GenApi_1_1Element.md#minoccurs">minOccurs</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="structMdDox_1_1GenApi_1_1Element.md#maxoccurs">maxOccurs</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1Char.md#touint32">toUint32</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="structMdDox_1_1GenApi_1_1Element.md#isvalid">isValid</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Generator.cpp#L185" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
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
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#attribute">attribute</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceMdDox_1_1GenApi.md#base_type">BASE_TYPE</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1GenApi_1_1Database.md#contains">contains</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceMdDox_1_1GenApi.md#simple_type">SIMPLE_TYPE</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceMdDox_1_1GenApi.md#complex_type">COMPLEX_TYPE</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceMdDox_1_1GenApi.md#group_type">GROUP_TYPE</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Generator.cpp#L172" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
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
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1Console.md#writeline">writeLine</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#name">name</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Generator.cpp#L427" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<a id="processcommon"></a>
<h2>processCommon</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>processCommon</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1GenApi_1_1Common.md#addinclude">addInclude</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1GenApi_1_1Common.md#addforward">addForward</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1GenApi_1_1Common.md#write">write</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceMdDox.md#stringcombine">StringCombine</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1PathUtil.md#rooteddir">rootedDir</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Generator.cpp#L400" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
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
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#children">children</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1GenApi_1_1Database.md#object">object</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1GenApi_1_1Group.md#addgroup">addGroup</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#at">at</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Generator.cpp#L334" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
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
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#attribute">attribute</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1GenApi_1_1Database.md#value">value</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1StringUtils.md#toupperfirst">toUpperFirst</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1GenApi_1_1Group.md#addstringattribute">addStringAttribute</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1GenApi_1_1Group.md#addintegerattribute">addIntegerAttribute</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1GenApi_1_1Database.md#contains">contains</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1GenApi_1_1Group.md#addenumattribute">addEnumAttribute</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Generator.cpp#L131" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
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
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceMdDox_1_1GenApi.md#base_type">BASE_TYPE</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceMdDox_1_1GenApi.md#simple_type">SIMPLE_TYPE</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceMdDox_1_1GenApi.md#complex_type">COMPLEX_TYPE</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceMdDox_1_1GenApi.md#group_type">GROUP_TYPE</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Generator.cpp#L301" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
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
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#attribute">attribute</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="structMdDox_1_1GenApi_1_1Element.md#typecode">typeCode</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="structMdDox_1_1GenApi_1_1Element.md#isvalid">isValid</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1GenApi_1_1Group.md#addstringtextelement">addStringTextElement</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Generator.cpp#L234" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
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
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#attribute">attribute</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="structMdDox_1_1GenApi_1_1Element.md#isvalid">isValid</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="structMdDox_1_1GenApi_1_1Element.md#typecode">typeCode</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="structMdDox_1_1GenApi_1_1Element.md#isunbounded">isUnbounded</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1GenApi_1_1Group.md#addelement">addElement</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1GenApi_1_1Group.md#addsingleelement">addSingleElement</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Generator.cpp#L261" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
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
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="structMdDox_1_1GenApi_1_1Element.md#isvalid">isValid</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1GenApi_1_1Database.md#object">object</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="structMdDox_1_1GenApi_1_1Element.md#searchterm">searchTerm</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1GenApi_1_1Group.md#addgroup">addGroup</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Generator.cpp#L286" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
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
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Generator.cpp#L255" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
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
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#children">children</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Generator.cpp#L323" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<a id="processcomplextypes"></a>
<h2>processComplexTypes</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>processComplexTypes</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceMdDox.md#stringcombine">StringCombine</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1PathUtil.md#rooteddir">rootedDir</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Generator.cpp#L377" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
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
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#attribute">attribute</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1GenApi_1_1Database.md#contains">contains</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1GenApi_1_1Simple.md#addenumvalue">addEnumValue</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1GenApi_1_1Database.md#value">value</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Generator.cpp#L81" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
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
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#children">children</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Generator.cpp#L368" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<a id="processgrouptypes"></a>
<h2>processGroupTypes</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>processGroupTypes</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Generator.cpp#L413" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
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
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#children">children</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Generator.cpp#L89" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
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
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#children">children</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Generator.cpp#L98" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<a id="processsimpletypes"></a>
<h2>processSimpleTypes</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>processSimpleTypes</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceMdDox.md#stringcombine">StringCombine</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1PathUtil.md#rooteddir">rootedDir</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Generator.cpp#L107" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<a id="readsubstitutions"></a>
<h2>readSubstitutions</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>readSubstitutions</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceMdDox.md#maketypefilter">makeTypeFilter</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceMdDox_1_1Doxygen.md#getfilter">getFilter</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="namespaceMdDox_1_1Doxygen.md#getfiltersize">getFilterSize</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1GenApi_1_1Database.md#read">read</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Generator.cpp#L470" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
<a id="write"></a>
<h2>write</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>write</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#children">children</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Generator.cpp#L493" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
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
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1Xml_1_1Node.md#children">children</a>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/class.svg"/><a href="classMdDox_1_1GenApi_1_1Database.md#insert">insert</a>
</span>
</div>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Tools/GenApi/Generator.cpp#L436" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">Generator.cpp</span>
</a>
</span>
<br/>
</div>
</div>
</body>
</html>
