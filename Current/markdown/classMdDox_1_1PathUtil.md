<a id="pathutil"></a>
<h1>PathUtil</h1>
<a id="classMdDox_1_1PathUtil"></a>
<a id="mddoxpathutil"></a>
<a href="https://github.com/CharlesCarley/MdDox">~</a>
<a href="indexpage.md#main">Main</a>
<span class="inline-text">/</span>
<a href="index.md#index">Index</a>
<span class="inline-text">::</span>
<a href="namespaceMdDox.md#mddox">MdDox</a>
<span class="inline-text">::</span>
<span class="bold-text"><b>PathUtil</b></span>
<br/>
<br/>
<span class="inline-text">A utility file for path access. </span>
<br/>
<br/>
<a id="private-members"></a>
<h2>Private Members</h2>
<span class="icon-list-item"><a href="#_root" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">_root</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_directory" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">_directory</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_file" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">_file</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_extension" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">_extension</span>
</a>
</span>
<br/>
<a id="private-methods"></a>
<h2>Private Methods</h2>
<span class="icon-list-item"><a href="#construct" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">construct</span>
</a>
</span>
<br/>
<a id="public-methods"></a>
<h2>Public Methods</h2>
<span class="icon-list-item"><a href="#pathutil" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">PathUtil</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#pathutil" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">PathUtil</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#pathutil" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">PathUtil</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#stem" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">stem</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#directory" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">directory</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#directorylist" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">directoryList</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#hasdirectory" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">hasDirectory</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parentdir" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">parentDir</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#parentpath" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">parentPath</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#exists" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">exists</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#fullpath" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">fullPath</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#rooteddir" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">rootedDir</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#filename" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">fileName</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#filename" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">fileName</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#filename" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">fileName</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#fullextension" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">fullExtension</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#primaryextension" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">primaryExtension</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#appenddirectory" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">appendDirectory</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#appenddirectory" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">appendDirectory</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#empty" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">empty</span>
</a>
</span>
<br/>
<a id="details"></a>
<h2>Details</h2>
<span class="inline-text">Interprets a path as a structure of segments</span>
<code class="typewriter">root</code>
<code class="typewriter">directory/</code>
<code class="typewriter">stem</code>
<code class="typewriter">extension</code>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/Path.h#L37" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Path.h</span>
</a>
</span>
<br/>
<a id="_root"></a>
<h2>_root</h2>
<a href="namespaceMdDox.md#string">String</a>
<span class="bold-text"><b>_root</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/Path.h#L39" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Path.h</span>
</a>
</span>
<br/>
<br/>
<a id="_directory"></a>
<h2>_directory</h2>
<a href="namespaceMdDox.md#string">String</a>
<span class="bold-text"><b>_directory</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/Path.h#L40" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Path.h</span>
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
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/Path.h#L41" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Path.h</span>
</a>
</span>
<br/>
<br/>
<a id="_extension"></a>
<h2>_extension</h2>
<a href="namespaceMdDox.md#stringdeque">StringDeque</a>
<span class="bold-text"><b>_extension</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/Path.h#L42" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Path.h</span>
</a>
</span>
<br/>
<br/>
<a id="construct"></a>
<h2>construct</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>construct</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">str</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h3>Details</h3>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/Path.h#L44" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Path.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/Path.cpp#L32" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Path.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="pathutil"></a>
<h2>PathUtil</h2>
<span class="bold-text"><b>PathUtil</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h3>Details</h3>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/Path.h#L47" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Path.h</span>
</a>
</span>
<br/>
<br/>
<a id="pathutil"></a>
<h2>PathUtil</h2>
<span class="bold-text"><b>PathUtil</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1PathUtil.md#pathutil">PathUtil</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">oth</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h3>Details</h3>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/Path.h#L49" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Path.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/Path.cpp#L90" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Path.cpp</span>
</a>
</span>
<br/>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1PathUtil.md#fullpath" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">fullPath</span>
</a>
</span>
<br/>
<br/>
<a id="pathutil"></a>
<h2>PathUtil</h2>
<span class="bold-text"><b>PathUtil</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">fileName</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h3>Details</h3>
<span class="inline-text">Constructs the path with a file name. </span>
<br/>
<br/>
<ul>
<li><span class="bold-text"><b>fileName</b></span>
<span class="inline-text"> - </span>
<span class="inline-text">The file path that will be broken up into sections. </span>
</li>
</ul>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/Path.h#L55" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Path.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/Path.cpp#L95" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Path.cpp</span>
</a>
</span>
<br/>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1PathUtil.md#filename" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">fileName</span>
</a>
</span>
<br/>
<br/>
<a id="stem"></a>
<h2>stem</h2>
<span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="bold-text"><b>stem</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h3>Details</h3>
<span class="inline-text">Provides access to the name portion of the file. </span>
<br/>
<br/>
<a id="returns"></a>
<h4>Returns</h4>
<span class="inline-text">The file name without an extension. </span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/Path.h#L61" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Path.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/Path.cpp#L126" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Path.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="directory"></a>
<h2>directory</h2>
<span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="bold-text"><b>directory</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h3>Details</h3>
<span class="inline-text">Provides access to the directory portion of the file. </span>
<br/>
<br/>
<a id="returns"></a>
<h4>Returns</h4>
<span class="inline-text">a/b/c/d/ </span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/Path.h#L67" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Path.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/Path.cpp#L131" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Path.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="directorylist"></a>
<h2>directoryList</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>directoryList</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="namespaceMdDox.md#stringdeque">StringDeque</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">dir</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h3>Details</h3>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/Path.h#L69" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Path.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/Path.cpp#L136" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Path.cpp</span>
</a>
</span>
<br/>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1StringUtils.md#split" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">split</span>
</a>
</span>
<br/>
<br/>
<a id="hasdirectory"></a>
<h2>hasDirectory</h2>
<span class="inline-text">bool</span>
<span class="bold-text"><b>hasDirectory</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h3>Details</h3>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/Path.h#L71" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Path.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/Path.cpp#L141" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Path.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="parentdir"></a>
<h2>parentDir</h2>
<a href="namespaceMdDox.md#string">String</a>
<span class="bold-text"><b>parentDir</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">size_t</span>
<span class="inline-text">n</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h3>Details</h3>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/Path.h#L73" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Path.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/Path.cpp#L146" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Path.cpp</span>
</a>
</span>
<br/>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1PathUtil.md#rooteddir" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">rootedDir</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1StringUtils.md#split" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">split</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="namespaceMdDox.md#stringcombine" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">StringCombine</span>
</a>
</span>
<br/>
<br/>
<a id="parentpath"></a>
<h2>parentPath</h2>
<a href="classMdDox_1_1PathUtil.md#pathutil">PathUtil</a>
<span class="bold-text"><b>parentPath</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">size_t</span>
<span class="inline-text">n</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h3>Details</h3>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/Path.h#L75" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Path.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/Path.cpp#L171" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Path.cpp</span>
</a>
</span>
<br/>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1PathUtil.md#pathutil" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">PathUtil</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1PathUtil.md#parentdir" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">parentDir</span>
</a>
</span>
<br/>
<br/>
<a id="exists"></a>
<h2>exists</h2>
<span class="inline-text">bool</span>
<span class="bold-text"><b>exists</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h3>Details</h3>
<a id="returns"></a>
<h4>Returns</h4>
<span class="inline-text">true if the file is present at the supplied path </span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/Path.h#L80" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Path.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/Path.cpp#L176" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Path.cpp</span>
</a>
</span>
<br/>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1PathUtil.md#fullpath" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">fullPath</span>
</a>
</span>
<br/>
<br/>
<a id="fullpath"></a>
<h2>fullPath</h2>
<a href="namespaceMdDox.md#string">String</a>
<span class="bold-text"><b>fullPath</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h3>Details</h3>
<a id="returns"></a>
<h4>Returns</h4>
<span class="inline-text">The full file path </span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/Path.h#L85" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Path.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/Path.cpp#L181" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Path.cpp</span>
</a>
</span>
<br/>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1PathUtil.md#fullextension" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">fullExtension</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="namespaceMdDox.md#stringcombine" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">StringCombine</span>
</a>
</span>
<br/>
<br/>
<a id="rooteddir"></a>
<h2>rootedDir</h2>
<a href="namespaceMdDox.md#string">String</a>
<span class="bold-text"><b>rootedDir</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h3>Details</h3>
<a id="returns"></a>
<h4>Returns</h4>
<span class="inline-text">The combination of all attached extensions </span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/Path.h#L90" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Path.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/Path.cpp#L191" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Path.cpp</span>
</a>
</span>
<br/>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="namespaceMdDox.md#stringcombine" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">StringCombine</span>
</a>
</span>
<br/>
<br/>
<a id="filename"></a>
<h2>fileName</h2>
<a href="namespaceMdDox.md#string">String</a>
<span class="bold-text"><b>fileName</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h3>Details</h3>
<a id="returns"></a>
<h4>Returns</h4>
<span class="inline-text">The file base name and any extensions attached to it </span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/Path.h#L95" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Path.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/Path.cpp#L107" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Path.cpp</span>
</a>
</span>
<br/>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="namespaceMdDox.md#stringcombine" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">StringCombine</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1PathUtil.md#stem" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">stem</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1PathUtil.md#fullextension" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">fullExtension</span>
</a>
</span>
<br/>
<br/>
<a id="filename"></a>
<h2>fileName</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>fileName</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1PathUtil.md#pathutil">PathUtil</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">file</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h3>Details</h3>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/Path.h#L97" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Path.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/Path.cpp#L112" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Path.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="filename"></a>
<h2>fileName</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>fileName</b></span>
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
<h3>Details</h3>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/Path.h#L99" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Path.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/Path.cpp#L118" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Path.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="fullextension"></a>
<h2>fullExtension</h2>
<a href="namespaceMdDox.md#string">String</a>
<span class="bold-text"><b>fullExtension</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h3>Details</h3>
<a id="returns"></a>
<h4>Returns</h4>
<span class="inline-text">The combination of all attached extensions </span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/Path.h#L104" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Path.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/Path.cpp#L196" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Path.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="primaryextension"></a>
<h2>primaryExtension</h2>
<a href="namespaceMdDox.md#string">String</a>
<span class="bold-text"><b>primaryExtension</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h3>Details</h3>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/Path.h#L106" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Path.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/Path.cpp#L100" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Path.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="appenddirectory"></a>
<h2>appendDirectory</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>appendDirectory</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="classMdDox_1_1PathUtil.md#pathutil">PathUtil</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">filePath</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h3>Details</h3>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/Path.h#L108" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Path.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/Path.cpp#L204" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Path.cpp</span>
</a>
</span>
<br/>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="namespaceMdDox.md#stringcombine" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">StringCombine</span>
</a>
</span>
<br/>
<br/>
<a id="appenddirectory"></a>
<h2>appendDirectory</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>appendDirectory</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">filePath</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h3>Details</h3>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/Path.h#L110" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Path.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/Path.cpp#L210" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Path.cpp</span>
</a>
</span>
<br/>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1PathUtil.md#appenddirectory" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">appendDirectory</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1PathUtil.md#pathutil" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">PathUtil</span>
</a>
</span>
<br/>
<br/>
<a id="empty"></a>
<h2>empty</h2>
<span class="inline-text">bool</span>
<span class="bold-text"><b>empty</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="details"></a>
<h3>Details</h3>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/Path.h#L112" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Path.h</span>
</a>
</span>
<br/>
<br/>
<br/>
<blockquote>
<img src="../images/debug24px.svg"/><span class="inline-text">The following sources were used to generate this page.</span>
<br/>
<span class="icon-list-item"><a href="../xml/classMdDox_1_1PathUtil.xml#L1" class="icon-list-item"><img src="../images/lookInside24px.svg" class="icon-list-item"/><span class="icon-list-item">classMdDox_1_1PathUtil.xml</span>
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
