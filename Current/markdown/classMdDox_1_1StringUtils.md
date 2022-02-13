<!DOCTYPE html>
<html>
<head>
</head>
<body>
<a id="stringutils"></a>
<h1>StringUtils</h1>
<a id="classMdDox_1_1StringUtils"></a>
<a id="mddoxstringutils"></a>
<a href="https://github.com/CharlesCarley/MdDox">~</a>
<a href="indexpage.md#main">Main</a>
<span class="inline-text">/</span>
<a href="index.md#index">Index</a>
<span class="inline-text">::</span>
<a href="namespaceMdDox.md#mddox">MdDox</a>
<span class="inline-text">::</span>
<span class="bold-text"><b>StringUtils</b></span>
<br/>
<br/>
<span class="inline-text">Provides general string conversion utility routines. </span>
<br/>
<br/>
<a id="public-static-methods"></a>
<h2>Public Static Methods</h2>
<span class="icon-list-item"><a href="#split" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">split</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#splitrejectempty" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">splitRejectEmpty</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#split" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">split</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#split" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">split</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#scramble" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">scramble</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#scramble" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">scramble</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#generate" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">generate</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#trimwhitespace" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">trimWhiteSpace</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#triml" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">trimL</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#trimr" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">trimR</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#trim" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">trim</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#splitline" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">splitLine</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#replaceall" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">replaceAll</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#tolower" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">toLower</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#toupper" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">toUpper</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#tolowerfirst" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">toLowerFirst</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#toupperfirst" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">toUpperFirst</span>
</a>
</span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/String.h#L91" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">String.h</span>
</a>
</span>
<br/>
<a id="split"></a>
<h2>split</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>split</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="namespaceMdDox.md#stringarray">StringArray</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">destination</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">input</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">char</span>
<span class="inline-text">separator</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Splits the supplied string into a list of sub-strings. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>destination</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">The structure that will hold the sub-strings. </span>
</li>
<li><span class="bold-text"><b>input</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">The input string to split. </span>
</li>
<li><span class="bold-text"><b>separator</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">The value that determines a split. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/String.h#L99" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">String.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/String.cpp#L125" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">String.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="splitrejectempty"></a>
<h2>splitRejectEmpty</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>splitRejectEmpty</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="namespaceMdDox.md#stringarray">StringArray</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">destination</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">input</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">char</span>
<span class="inline-text">separator</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Splits the supplied string into a list of sub-strings. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>destination</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">The structure that will hold the sub-strings. </span>
</li>
<li><span class="bold-text"><b>input</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">The input string to split. </span>
</li>
<li><span class="bold-text"><b>separator</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">The value that determines a split.</span>
</li>
</ul>
<span class="inline-text">
Removes any empty strings from the result. </span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/String.h#L108" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">String.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/String.cpp#L134" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">String.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1StringUtils.md#trimwhitespace" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">trimWhiteSpace</span>
</a>
</span>
<br/>
<br/>
<a id="split"></a>
<h2>split</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>split</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="namespaceMdDox.md#stringarray">StringArray</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">destination</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">input</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">separator</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Splits the supplied string into a list of sub-strings. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>destination</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">The structure that will hold the sub-strings. </span>
</li>
<li><span class="bold-text"><b>input</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">The input string to split. </span>
</li>
<li><span class="bold-text"><b>separator</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">The value that determines a split. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/String.h#L115" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">String.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/String.cpp#L156" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">String.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="split"></a>
<h2>split</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>split</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="namespaceMdDox.md#stringdeque">StringDeque</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">destination</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">input</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">separator</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Splits the supplied string into a list of sub-strings. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>destination</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">The structure that will hold the sub-strings. </span>
</li>
<li><span class="bold-text"><b>input</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">The input string to split. </span>
</li>
<li><span class="bold-text"><b>separator</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">The value that determines a split. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/String.h#L122" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">String.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/String.cpp#L173" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">String.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="scramble"></a>
<h2>scramble</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>scramble</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">destination</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">size_t</span>
<span class="inline-text">value</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">bool</span>
<span class="inline-text">randomize</span>
<span class="inline-text"> = </span>
<span class="inline-text">true</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Converts the supplied integer to base 64 and uses a nonsensical symbol alphabet to produce a randomized string. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>destination</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">The string that will hold the scrambled value. </span>
</li>
<li><span class="bold-text"><b>value</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">The value to scramble. </span>
</li>
<li><span class="bold-text"><b>randomize</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">If true, the result will randomly be shifted.</span>
</li>
</ul>

```txt
Randomized:
  1ILtZEF
  h804iWy
  DpZzzmg
  I0BBSCd
  
Not-Randomized:
  n1mLZd3
  n1mLZd3
  n1mLZd3
  n1mLZd3
```
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/String.h#L148" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">String.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/String.cpp#L204" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">String.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="namespaceMdDox.md#basecharssize" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">BaseCharsSize</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="namespaceMdDox.md#basechars" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">BaseChars</span>
</a>
</span>
<br/>
<br/>
<a id="scramble"></a>
<h2>scramble</h2>
<a href="namespaceMdDox.md#string">String</a>
<span class="bold-text"><b>scramble</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">value</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">bool</span>
<span class="inline-text">randomize</span>
<span class="inline-text"> = </span>
<span class="inline-text">true</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/String.h#L151" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">String.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/String.cpp#L240" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">String.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="unionMdDox_1_1Merge.md#b" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">b</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1StringUtils.md#scramble" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">scramble</span>
</a>
</span>
<br/>
<br/>
<a id="generate"></a>
<h2>generate</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>generate</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">destination</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">int &amp;</span>
<span class="inline-text">counter</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">void *</span>
<span class="inline-text">seed</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Scrambles and combines a contextually unique counter, time stamp, and a memory address. </span>
<br/>
<br/>
<span class="inline-text">Used to generate a unique string without using a GUID.</span>
<ul>
<li><span class="bold-text"><b>destination</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">The string that will hold the generated value </span>
</li>
<li><span class="bold-text"><b>counter</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">A reference to an external counter variable. </span>
</li>
<li><span class="bold-text"><b>seed</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">The memory address to mix into the generated value. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/String.h#L163" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">String.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/String.cpp#L257" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">String.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1StringUtils.md#scramble" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">scramble</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="namespaceMdDox.md#stringcombine" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">StringCombine</span>
</a>
</span>
<br/>
<br/>
<a id="trimwhitespace"></a>
<h2>trimWhiteSpace</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>trimWhiteSpace</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">destination</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">input</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Removes any white space characters from the start and end of the string. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>destination</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">The destination storage. </span>
</li>
<li><span class="bold-text"><b>input</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">The input string that needs to be trimmed. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/String.h#L170" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">String.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/String.cpp#L274" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">String.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="namespaceMdDox.md#iswhitespace" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">isWhiteSpace</span>
</a>
</span>
<br/>
<br/>
<a id="triml"></a>
<h2>trimL</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>trimL</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">destination</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">input</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">char</span>
<span class="inline-text">character</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Removes all occurrences of the supplied character from the left hand side of the string. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>destination</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">The destination storage. </span>
</li>
<li><span class="bold-text"><b>input</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">The input string that needs to be trimmed. </span>
</li>
<li><span class="bold-text"><b>character</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">the character to trim. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/String.h#L179" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">String.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/String.cpp#L304" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">String.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="trimr"></a>
<h2>trimR</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>trimR</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">destination</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">input</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">char</span>
<span class="inline-text">character</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">Removes all occurrences of the supplied character from the right hand side of the string. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>destination</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">The destination storage. </span>
</li>
<li><span class="bold-text"><b>input</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">The input string that needs to be trimmed. </span>
</li>
<li><span class="bold-text"><b>character</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">the character to trim. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/String.h#L188" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">String.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/String.cpp#L319" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">String.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="trim"></a>
<h2>trim</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>trim</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">destination</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">input</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">char</span>
<span class="inline-text">character</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<span class="inline-text">A combination of trimL and trimR. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>destination</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">The destination storage. </span>
</li>
<li><span class="bold-text"><b>input</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">The input string that needs to be trimmed. </span>
</li>
<li><span class="bold-text"><b>character</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">the character to trim. </span>
</li>
</ul>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/String.h#L197" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">String.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/String.cpp#L268" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">String.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1StringUtils.md#triml" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">trimL</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1StringUtils.md#trimr" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">trimR</span>
</a>
</span>
<br/>
<br/>
<a id="splitline"></a>
<h2>splitLine</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>splitLine</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="namespaceMdDox.md#stringarray">StringArray</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">dest</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">input</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">char</span>
<span class="inline-text">swap</span>
<span class="inline-text"> = </span>
<span class="inline-text">&apos;$&apos;</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/String.h#L199" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">String.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/String.cpp#L108" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">String.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1StringUtils.md#replaceall" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">replaceAll</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1StringUtils.md#split" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">split</span>
</a>
</span>
<br/>
<br/>
<a id="replaceall"></a>
<h2>replaceAll</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>replaceAll</b></span>
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
<span class="inline-text">input</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">a</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">b</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/String.h#L201" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">String.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/String.cpp#L31" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">String.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="tolower"></a>
<h2>toLower</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>toLower</b></span>
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
<span class="inline-text">in</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/String.h#L203" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">String.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/String.cpp#L76" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">String.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="toupper"></a>
<h2>toUpper</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>toUpper</b></span>
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
<span class="inline-text">in</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/String.h#L205" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">String.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/String.cpp#L84" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">String.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="tolowerfirst"></a>
<h2>toLowerFirst</h2>
<a href="namespaceMdDox.md#string">String</a>
<span class="bold-text"><b>toLowerFirst</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">in</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/String.h#L207" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">String.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/String.cpp#L92" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">String.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="toupperfirst"></a>
<h2>toUpperFirst</h2>
<a href="namespaceMdDox.md#string">String</a>
<span class="bold-text"><b>toUpperFirst</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">in</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/String.h#L209" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">String.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/String.cpp#L100" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">String.cpp</span>
</a>
</span>
<br/>
<br/>
<br/>
<blockquote>
<img src="../images/debug24px.svg"/><span class="inline-text">The following sources were used to generate this page.</span>
<br/>
<span class="icon-list-item"><a href="../xml/classMdDox_1_1StringUtils.xml#L1" class="icon-list-item"><img src="../images/lookInside24px.svg" class="icon-list-item"/><span class="icon-list-item">classMdDox_1_1StringUtils.xml</span>
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
