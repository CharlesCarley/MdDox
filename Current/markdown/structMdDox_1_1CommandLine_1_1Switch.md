<a id="switch"></a>
<h1>Switch</h1>
<a id="structMdDox_1_1CommandLine_1_1Switch"></a>
<a id="mddoxcommandlineswitch"></a>
<a href="https://github.com/CharlesCarley/MdDox">~</a>
<a href="indexpage.md#main">Main</a>
<span class="inline-text">/</span>
<a href="index.md#index">Index</a>
<span class="inline-text">::</span>
<a href="namespaceMdDox.md#mddox">MdDox</a>
<span class="inline-text">::</span>
<a href="namespaceMdDox_1_1CommandLine.md#commandline">CommandLine</a>
<span class="inline-text">::</span>
<span class="bold-text"><b>Switch</b></span>
<br/>
<br/>
<span class="inline-text">A structure that represents a command line switch. </span>
<br/>
<br/>
<a id="public-members"></a>
<h2>Public Members</h2>
<span class="icon-list-item"><a href="#argcount" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">argCount</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#description" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">description</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#id" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">id</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#longswitch" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">longSwitch</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#optional" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">optional</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#shortswitch" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">shortSwitch</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Option.h#L35" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Option.h</span>
</a>
</span>
<br/>
<a id="argcount"></a>
<h2>argCount</h2>
<span class="inline-text">size_t</span>
<span class="bold-text"><b>argCount</b></span>
<br/>
<span class="inline-text">Defines the number of required arguments. </span>
<br/>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Option.h#L68" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Option.h</span>
</a>
</span>
<br/>
<br/>
<a id="description"></a>
<h2>description</h2>
<span class="inline-text">const char *</span>
<span class="bold-text"><b>description</b></span>
<br/>
<span class="inline-text">Provides A brief description for the -h, </span>
<span class="inline-text">help builtin option. </span>
<br/>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Option.h#L58" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Option.h</span>
</a>
</span>
<br/>
<br/>
<a id="id"></a>
<h2>id</h2>
<span class="inline-text">uint32_t</span>
<span class="bold-text"><b>id</b></span>
<br/>
<span class="inline-text">Defines the lookup id for this switch. </span>
<br/>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Option.h#L39" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Option.h</span>
</a>
</span>
<br/>
<br/>
<a id="longswitch"></a>
<h2>longSwitch</h2>
<span class="inline-text">const char *</span>
<span class="bold-text"><b>longSwitch</b></span>
<br/>
<span class="inline-text">Assigns word or phrase value for this switch </span>
<span class="inline-text">[a-zA-Z]+. </span>
<br/>
<br/>
<span class="inline-text">A value of null means unused. </span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Option.h#L53" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Option.h</span>
</a>
</span>
<br/>
<br/>
<a id="optional"></a>
<h2>optional</h2>
<span class="inline-text">bool</span>
<span class="bold-text"><b>optional</b></span>
<br/>
<span class="inline-text">Defines this switch as optional. </span>
<br/>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Option.h#L63" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Option.h</span>
</a>
</span>
<br/>
<br/>
<a id="shortswitch"></a>
<h2>shortSwitch</h2>
<span class="inline-text">char</span>
<span class="bold-text"><b>shortSwitch</b></span>
<br/>
<span class="inline-text">Assigns a single character value for this switch -[a-zA-Z]. </span>
<br/>
<br/>
<span class="inline-text">A value of 0 means unused. </span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Utils/CommandLine/Option.h#L46" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Option.h</span>
</a>
</span>
<br/>
<br/>
<br/>
<blockquote>
<img src="../images/debug24px.svg"/><span class="inline-text">The following sources were used to generate this page.</span>
<br/>
<span class="icon-list-item"><a href="../xml/structMdDox_1_1CommandLine_1_1Switch.xml#L1" class="icon-list-item"><img src="../images/lookInside24px.svg" class="icon-list-item"/><span class="icon-list-item">structMdDox_1_1CommandLine_1_1Switch.xml</span>
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
