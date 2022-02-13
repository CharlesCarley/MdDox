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
<title>IndexCache</title>
</head>
<body>
<div class="document">
<div class="document-header">
<a id="indexcache"></a>
<h1>IndexCache</h1>
<a id="classMdDox_1_1IndexCache"></a>
<a id="mddoxindexcache"></a>
<a href="https://github.com/CharlesCarley/MdDoc">~</a>
<a href="indexpage.md#main">Main</a>
<span class="inline-text">/</span>
<a href="indexpage.md#index">Index</a>
<span class="inline-text">::</span>
<a href="namespaceMdDox.md#mddox">MdDox</a>
<span class="inline-text">::</span>
<span class="bold-text"><b>IndexCache</b></span>
<br/>
<br/>
<span class="inline-text">Class to map a hash table along side an index-able array. </span>
<br/>
<br/>
<a id="public-typedefs"></a>
<h2>Public Typedefs</h2>
<span class="icon-list-item"><a href="#table" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">Table</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#array" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">Array</span>
</a>
</span>
<br/>
<a id="private-members"></a>
<h2>Private Members</h2>
<span class="icon-list-item"><a href="#_elements" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">_elements</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_list" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">_list</span>
</a>
</span>
<br/>
<a id="public-methods"></a>
<h2>Public Methods</h2>
<span class="icon-list-item"><a href="#insert" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">insert</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#at" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">at</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#at" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">at</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#contains" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">contains</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#contains" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">contains</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#get" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">get</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#size" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">size</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#clear" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">clear</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#begin" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">begin</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#end" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">end</span>
</a>
</span>
<br/>
<a id="details"></a>
<h2>Details</h2>
<ul>
<li><span class="bold-text"><b>T</b></span>
<span class="inline-text"> - </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/Utils/IndexCache.h#L35" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">IndexCache.h</span>
</a>
</span>
<br/>
<span class="bold-text"><b>ClassPageWriter.visitedTemplateParamList</b></span>
<br/>
<a id="table"></a>
<h2>Table</h2>
<span class="inline-text">std::unordered_map&lt; T, size_t &gt;</span>
<span class="bold-text"><b>Table</b></span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/Utils/IndexCache.h#L37" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">IndexCache.h</span>
</a>
</span>
<br/>
<br/>
<a id="array"></a>
<h2>Array</h2>
<span class="inline-text">std::vector&lt; T &gt;</span>
<span class="bold-text"><b>Array</b></span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/Utils/IndexCache.h#L38" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">IndexCache.h</span>
</a>
</span>
<br/>
<br/>
<a id="_elements"></a>
<h2>_elements</h2>
<a href="classMdDox_1_1IndexCache.md#table">Table</a>
<span class="bold-text"><b>_elements</b></span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/Utils/IndexCache.h#L41" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">IndexCache.h</span>
</a>
</span>
<br/>
<br/>
<a id="_list"></a>
<h2>_list</h2>
<a href="classMdDox_1_1IndexCache.md#array">Array</a>
<span class="bold-text"><b>_list</b></span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/Utils/IndexCache.h#L42" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">IndexCache.h</span>
</a>
</span>
<br/>
<br/>
<a id="insert"></a>
<h2>insert</h2>
<span class="inline-text">size_t</span>
<span class="bold-text"><b>insert</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const T &amp;</span>
<span class="inline-text">value</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Inserts a new value into the map if it does not already exist. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>value</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">The value to insert</span>
</li>
</ul>
<a id="returns"></a>
<h4>Returns</h4>
<span class="inline-text">The value&apos;s index into the container</span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/Utils/IndexCache.h#L50" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">IndexCache.h</span>
</a>
</span>
<br/>
<br/>
<a id="at"></a>
<h2>at</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>at</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">T &amp;</span>
<span class="inline-text">destination</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const size_t &amp;</span>
<span class="inline-text">index</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Copies the cache value at the supplied index into the destination variable. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>destination</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">The destination variable</span>
</li>
<li><span class="bold-text"><b>index</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">The index into the cache.</span>
</li>
</ul>
<span class="inline-text">Throws an out of bounds exception if the supplied index is invalid.</span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/Utils/IndexCache.h#L74" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">IndexCache.h</span>
</a>
</span>
<br/>
<br/>
<a id="at"></a>
<h2>at</h2>
<span class="inline-text">const T &amp;</span>
<span class="bold-text"><b>at</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const size_t &amp;</span>
<span class="inline-text">index</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Returns the cache value at the supplied index into the destination variable. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>index</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">The index into the cache.</span>
</li>
</ul>
<span class="inline-text">Throws an out of bounds exception if the supplied index is invalid.</span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/Utils/IndexCache.h#L87" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">IndexCache.h</span>
</a>
</span>
<br/>
<br/>
<a id="contains"></a>
<h2>contains</h2>
<span class="inline-text">bool</span>
<span class="bold-text"><b>contains</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const size_t &amp;</span>
<span class="inline-text">index</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/Utils/IndexCache.h#L95" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">IndexCache.h</span>
</a>
</span>
<br/>
<br/>
<a id="contains"></a>
<h2>contains</h2>
<span class="inline-text">bool</span>
<span class="bold-text"><b>contains</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const T &amp;</span>
<span class="inline-text">value</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/Utils/IndexCache.h#L100" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">IndexCache.h</span>
</a>
</span>
<br/>
<br/>
<a id="get"></a>
<h2>get</h2>
<span class="inline-text">size_t</span>
<span class="bold-text"><b>get</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const T &amp;</span>
<span class="inline-text">value</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/Utils/IndexCache.h#L106" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">IndexCache.h</span>
</a>
</span>
<br/>
<br/>
<a id="size"></a>
<h2>size</h2>
<span class="inline-text">size_t</span>
<span class="bold-text"><b>size</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/Utils/IndexCache.h#L115" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">IndexCache.h</span>
</a>
</span>
<br/>
<br/>
<a id="clear"></a>
<h2>clear</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>clear</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/Utils/IndexCache.h#L120" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">IndexCache.h</span>
</a>
</span>
<br/>
<br/>
<a id="begin"></a>
<h2>begin</h2>
<span class="inline-text">Array::const_iterator</span>
<span class="bold-text"><b>begin</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/Utils/IndexCache.h#L126" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">IndexCache.h</span>
</a>
</span>
<br/>
<br/>
<a id="end"></a>
<h2>end</h2>
<span class="inline-text">Array::const_iterator</span>
<span class="bold-text"><b>end</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDoc/blob/master/Source/Utils/IndexCache.h#L131" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">IndexCache.h</span>
</a>
</span>
<br/>
<br/>
<br/>
<blockquote>
<img src="../images/debug24px.svg"/><span class="inline-text">The following sources were used to generate this page.</span>
<br/>
<span class="icon-list-item"><a href="../xml/classMdDox_1_1IndexCache.xml#L1" class="icon-list-item"><img src="../images/lookInside24px.svg" class="icon-list-item"/><span class="icon-list-item">classMdDox_1_1IndexCache.xml</span>
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
