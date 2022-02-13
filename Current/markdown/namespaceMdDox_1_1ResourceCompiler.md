<!DOCTYPE html>
<html>
<head>
<meta http-equiv="Content-Type" content="text/xhtml;charset=UTF-8"/>
<meta http-equiv="X-UA-Compatible" content="IE=9" />
<meta http-equiv="Content-Type" content="text/xhtml;charset=UTF-8"/>
<meta name="robots" content="noindex" />
<meta name="generator" content="MdDox"/>
<meta name="viewport" content="width=device-width, initial-scale=1"/>
<link href="style.css" rel="stylesheet" type="text/css"/>
<title>ResourceCompiler</title>
</head>
<body>
<div class="document">
<div class="document-header">
<a id="resourcecompiler"></a>
<h1>ResourceCompiler</h1>
<a id="namespaceMdDox_1_1ResourceCompiler"></a>
<a id="mddoxresourcecompiler"></a>
<a href="https://github.com/CharlesCarley/MdDoc">~</a>
<a href="indexpage.md#main">Main</a>
<span class="inline-text">/</span>
<a href="indexpage.md#index">Index</a>
<span class="inline-text">::</span>
<a href="namespaceMdDox.md#mddox">MdDox</a>
<span class="inline-text">::</span>
<span class="bold-text"><b>ResourceCompiler</b></span>
<br/>
<br/>
<a id="classes"></a>
<h2>Classes</h2>
<span class="icon-list-item"><a href="classMdDox_1_1ResourceCompiler_1_1Application.md#application" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">Application</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="structMdDox_1_1ResourceCompiler_1_1Resource.md#resource" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">Resource</span>
</a>
</span>
<br/>
<a id="enums"></a>
<h2>Enums</h2>
<span class="icon-list-item"><a href="#option" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">Option</span>
</a>
</span>
<br/>
<a id="typedefs"></a>
<h2>Typedefs</h2>
<span class="icon-list-item"><a href="#resourcemap" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">ResourceMap</span>
</a>
</span>
<br/>
<a id="global-variables"></a>
<h2>Global Variables</h2>
<span class="icon-list-item"><a href="#switches" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">Switches</span>
</a>
</span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Tools/ResourceCompiler/Main.cpp#L33" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Main.cpp</span>
</a>
</span>
<br/>
<a id="option"></a>
<h2>Option</h2>
<span class="bold-text"><b>Option</b></span>
<br/>
<a href="namespaceMdDox_1_1ResourceCompiler.md#resourcecompiler">ResourceCompiler</a>
<span class="inline-text"> command line options. </span>
<br/>
<br/>
<span class="icon-list-item"><a href="#optoutputfilename" class="icon-list-item"><img src="../images/enum24px.svg" class="icon-list-item"/><span class="icon-list-item">OptOutputFileName</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#optnamespace" class="icon-list-item"><img src="../images/enum24px.svg" class="icon-list-item"/><span class="icon-list-item">OptNameSpace</span>
</a>
</span>
<br/>
<img src="../images/enum24px.svg"/><span class="inline-text">OptionsMax</span>
<br/>
<a id="optoutputfilename"></a>
<h4>OptOutputFileName</h4>
<br/>
<span class="inline-text">Specify an output file name. </span>
<br/>
<br/>
<code class="typewriter">-o [file-stem-name]</code>
<span class="inline-text">The output files will be split between a source and header file with the supplied name. </span>
<br/>
<a id="optnamespace"></a>
<h4>OptNameSpace</h4>
<br/>
<span class="inline-text">Specify a root namespace name. </span>
<br/>
<br/>
<code class="typewriter">-n [namespace]</code>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Tools/ResourceCompiler/Main.cpp#L38" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Main.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="resourcemap"></a>
<h2>ResourceMap</h2>
<span class="inline-text">std::unordered_map&lt; </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text">, </span>
<a href="structMdDox_1_1ResourceCompiler_1_1Resource.md#resource">Resource</a>
<span class="inline-text"> &gt;</span>
<span class="bold-text"><b>ResourceMap</b></span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Tools/ResourceCompiler/Main.cpp#L89" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Main.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="switches"></a>
<h2>Switches</h2>
<span class="inline-text">constexpr </span>
<a href="structMdDox_1_1CommandLine_1_1Switch.md#commandlineswitch">CommandLine::Switch</a>
<span class="bold-text"><b>Switches</b></span>
<br/>
<span class="inline-text">Provides and array of </span>
<a href="structMdDox_1_1CommandLine_1_1Switch.md#commandlineswitch">CommandLine::Switch</a>
<span class="inline-text"> objects foreach </span>
<a href="#option">Option</a>
<span class="inline-text">. </span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Tools/ResourceCompiler/Main.cpp#L64" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Main.cpp</span>
</a>
</span>
<br/>
<br/>
<br/>
<blockquote>
<img src="../images/debug24px.svg"/><span class="inline-text">The following sources were used to generate this page.</span>
<br/>
<span class="icon-list-item"><a href="../xml/namespaceMdDox_1_1ResourceCompiler.xml#L1" class="icon-list-item"><img src="../images/lookInside24px.svg" class="icon-list-item"/><span class="icon-list-item">namespaceMdDox_1_1ResourceCompiler.xml</span>
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
