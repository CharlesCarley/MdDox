<a id="referencetable"></a>
<h1>ReferenceTable</h1>
<a id="classMdDox_1_1ReferenceTable"></a>
<a href="https://github.com/CharlesCarley/MdDox">~</a>
<a href="indexpage.md#mddox">MdDox</a>
<span class="inline-text">/</span>
<a href="index.md#index">Index</a>
<span class="inline-text">/</span>
<a href="namespaceMdDox.md#mddox">MdDox</a>
<span class="inline-text">::</span>
<span class="bold-text"><b>ReferenceTable</b></span>
<br/>
<br/>
<a id="private-members"></a>
<h2>Private Members</h2>
<span class="icon-list-item"><a href="#_compound" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_compound</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_members" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_members</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#_namemap" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">_nameMap</span>
</a>
</span>
<br/>
<a id="private-methods"></a>
<h2>Private Methods</h2>
<span class="icon-list-item"><a href="#insertbyname" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">insertByName</span>
</a>
</span>
<br/>
<a id="public-methods"></a>
<h2>Public Methods</h2>
<span class="icon-list-item"><a href="#referencetable" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">ReferenceTable</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#~referencetable" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">~ReferenceTable</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#findbyname" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">findByName</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#getcompoundref" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">getCompoundRef</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#getmemberref" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">getMemberRef</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#insertcompound" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">insertCompound</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#insertmember" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">insertMember</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/ReferenceTable.h#L37" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ReferenceTable.h</span>
</a>
</span>
<br/>
<a id="_compound"></a>
<h2>_compound</h2>
<a href="namespaceMdDox.md#compoundreferencemap">CompoundReferenceMap</a>
<span class="bold-text"><b>_compound</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/ReferenceTable.h#L39" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ReferenceTable.h</span>
</a>
</span>
<br/>
<br/>
<a id="_members"></a>
<h2>_members</h2>
<a href="namespaceMdDox.md#memberreferencemap">MemberReferenceMap</a>
<span class="bold-text"><b>_members</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/ReferenceTable.h#L40" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ReferenceTable.h</span>
</a>
</span>
<br/>
<br/>
<a id="_namemap"></a>
<h2>_nameMap</h2>
<a href="namespaceMdDox.md#compoundnamemap">CompoundNameMap</a>
<span class="bold-text"><b>_nameMap</b></span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/ReferenceTable.h#L41" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ReferenceTable.h</span>
</a>
</span>
<br/>
<br/>
<a id="insertbyname"></a>
<h2>insertByName</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>insertByName</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox_1_1Doxygen.md#doxygendoxcompoundkindenum">Doxygen::DoxCompoundKindEnum</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">kind</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><a href="classMdDox_1_1CompoundReference.md#compoundreference">CompoundReference</a>
<span class="inline-text"> *</span>
<span class="inline-text">ref</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/ReferenceTable.h#L43" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ReferenceTable.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/ReferenceTable.cpp#L37" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ReferenceTable.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="referencetable"></a>
<h2>ReferenceTable</h2>
<span class="bold-text"><b>ReferenceTable</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/ReferenceTable.h#L46" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ReferenceTable.h</span>
</a>
</span>
<br/>
<br/>
<a id="~referencetable"></a>
<h2>~ReferenceTable</h2>
<span class="bold-text"><b>~ReferenceTable</b></span>
<span class="italic-text"><i>(</i></span>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/ReferenceTable.h#L47" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ReferenceTable.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/ReferenceTable.cpp#L29" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ReferenceTable.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="findbyname"></a>
<h2>findByName</h2>
<a href="classMdDox_1_1Reference.md#reference">Reference</a>
<span class="bold-text"><b>findByName</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox_1_1Doxygen.md#doxygendoxcompoundkindenum">Doxygen::DoxCompoundKindEnum</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">kind</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">name</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="namespaceMdDox_1_1Doxygen.md#dck_max" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">DCK_MAX</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1Reference.md#setname" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">setName</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1Reference.md#getname" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">getName</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1Reference.md#setreference" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">setReference</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1Reference.md#getreference" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">getReference</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/ReferenceTable.h#L53" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ReferenceTable.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/ReferenceTable.cpp#L92" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ReferenceTable.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="getcompoundref"></a>
<h2>getCompoundRef</h2>
<a href="classMdDox_1_1CompoundReference.md#compoundreference">CompoundReference</a>
<span class="inline-text"> *</span>
<span class="bold-text"><b>getCompoundRef</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">id</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/ReferenceTable.h#L51" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ReferenceTable.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/ReferenceTable.cpp#L84" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ReferenceTable.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="getmemberref"></a>
<h2>getMemberRef</h2>
<a href="classMdDox_1_1MemberReference.md#memberreference">MemberReference</a>
<span class="inline-text"> *</span>
<span class="bold-text"><b>getMemberRef</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">id</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/ReferenceTable.h#L57" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ReferenceTable.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/ReferenceTable.cpp#L134" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ReferenceTable.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="insertcompound"></a>
<h2>insertCompound</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>insertCompound</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox_1_1Doxygen.md#doxygendoxcompoundkindenum">Doxygen::DoxCompoundKindEnum</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">kind</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">name</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">id</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1Reference.md#setname" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">setName</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1Reference.md#setreference" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">setReference</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1CompoundReference.md#setkind" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">setKind</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1Console.md#writeline" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">writeLine</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/ReferenceTable.h#L49" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ReferenceTable.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/ReferenceTable.cpp#L63" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ReferenceTable.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="insertmember"></a>
<h2>insertMember</h2>
<span class="inline-text">void</span>
<span class="bold-text"><b>insertMember</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox_1_1Doxygen.md#doxygendoxmemberkindenum">Doxygen::DoxMemberKindEnum</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">kind</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">name</span>
</span>
</div>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &amp;</span>
<span class="inline-text">id</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<a id="references"></a>
<h4>References</h4>
<span class="icon-list-item"><a href="classMdDox_1_1Reference.md#setname" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">setName</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1Reference.md#setreference" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">setReference</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1MemberReference.md#setkind" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">setKind</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1Console.md#writeline" class="icon-list-item"><img src="../images/class.svg" class="icon-list-item"/><span class="icon-list-item">writeLine</span>
</a>
</span>
<br/>
<a id="defined-in"></a>
<h4>Defined in</h4>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/ReferenceTable.h#L55" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ReferenceTable.h</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master//Source/MdDoxTree/ReferenceTable.cpp#L114" class="icon-list-item"><img src="../images/file.svg" class="icon-list-item"/><span class="icon-list-item">ReferenceTable.cpp</span>
</a>
</span>
<br/>
<br/>
<br/>
<blockquote>
<img src="../images/debug.svg"/><span class="inline-text">The following sources were used to generate this page.</span>
<br/>
<span class="icon-list-item"><a href="../xml/classMdDox_1_1ReferenceTable.xml#L1" class="icon-list-item"><img src="../images/lookInside.svg" class="icon-list-item"/><span class="icon-list-item">classMdDox_1_1ReferenceTable.xml</span>
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
