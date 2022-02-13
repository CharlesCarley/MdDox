<!DOCTYPE html>
<html>
<head>
</head>
<body>
<a id="xml"></a>
<h1>Xml</h1>
<a id="namespaceMdDox_1_1Xml"></a>
<a id="mddoxxml"></a>
<a href="https://github.com/CharlesCarley/MdDox">~</a>
<a href="indexpage.md#main">Main</a>
<span class="inline-text">/</span>
<a href="index.md#index">Index</a>
<span class="inline-text">::</span>
<a href="namespaceMdDox.md#mddox">MdDox</a>
<span class="inline-text">::</span>
<span class="bold-text"><b>Xml</b></span>
<br/>
<br/>
<span class="inline-text">Provides a grouping of classes that handle parsing XML files. </span>
<a id="contents"></a>
<h2>Contents</h2>
<ul>
<li><a href="#classes">Classes</a>
</li>
<li><a href="#enums">Enums</a>
</li>
<li><a href="#typedefs">Typedefs</a>
</li>
<li><a href="#variables">Variables</a>
<br/>
</ul>
<a id="details"></a>
<h2>Details</h2>
<span class="bold-text"><b>Typical Usage:</b></span>
<br/>
<span class="inline-text">The </span>
<a href="classMdDox_1_1Xml_1_1Parser.md#parser">Parser</a>
<span class="inline-text"> is easy to use, just create an instance of the parser then invoke it&apos;s parse method.</span>
<span class="inline-text">Internally, parse and syntax errors will throw an exception so it needs to be wrapped in a try catch block. On a successful parse, the </span>
<a href="#parserroot()">Parser::root()</a>
<span class="inline-text"> method will return the root node of the tree.</span>
<span class="inline-text">The following example shows how to use it.</span>

```cpp
using namespace MdDox;
try
{
     Xml::Parser parser;
     parser.parse("file.xml");

     Xml::Node *root = parser.root();

     Xml::Writer writer(root);
     writer.write(std::cout);
}
catch(Exception &ex)
{
     Console::writeLine(ex.what());
}
```
<a id="classes"></a>
<h2>Classes</h2>
<span class="icon-list-item"><a href="classMdDox_1_1Xml_1_1Attribute.md#attribute" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">Attribute</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1Xml_1_1Node.md#node" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">Node</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1Xml_1_1Parser.md#parser" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1Xml_1_1Scanner.md#scanner" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">Scanner</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="classMdDox_1_1Xml_1_1Writer.md#writer" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">Writer</span>
</a>
</span>
<br/>
<a id="enums"></a>
<h2>Enums</h2>
<span class="icon-list-item"><a href="#tokentype" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">TokenType</span>
</a>
</span>
<br/>
<a id="typedefs"></a>
<h2>Typedefs</h2>
<span class="icon-list-item"><a href="#nodesortfunc" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">NodeSortFunc</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#attributemap" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">AttributeMap</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#nodearray" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">NodeArray</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#nodemap" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">NodeMap</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#stringcache" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">StringCache</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#nodestack" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">NodeStack</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#codecache" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">CodeCache</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#token" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">Token</span>
</a>
</span>
<br/>
<a id="global-variables"></a>
<h2>Global Variables</h2>
<span class="icon-list-item"><a href="#indent" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">Indent</span>
</a>
</span>
<br/>
<a id="global-functions"></a>
<h2>Global Functions</h2>
<span class="icon-list-item"><a href="#isvalidcharacter" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">isValidCharacter</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#isvalididentifier" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">isValidIdentifier</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="#isquote" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">isQuote</span>
</a>
</span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Xml/Attribute.h#L27" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Attribute.h</span>
</a>
</span>
<br/>
<a id="tokentype"></a>
<h2>TokenType</h2>
<span class="bold-text"><b>TokenType</b></span>
<br/>
<img src="../images/enum24px.svg"/><span class="inline-text">TOK_ERROR</span>
<br/>
<img src="../images/enum24px.svg"/><span class="inline-text">TOK_EOF</span>
<br/>
<img src="../images/enum24px.svg"/><span class="inline-text">TOK_NULL</span>
<br/>
<img src="../images/enum24px.svg"/><span class="inline-text">TOK_IDENTIFIER</span>
<br/>
<img src="../images/enum24px.svg"/><span class="inline-text">TOK_STRING</span>
<br/>
<img src="../images/enum24px.svg"/><span class="inline-text">TOK_TEXT</span>
<br/>
<img src="../images/enum24px.svg"/><span class="inline-text">TOK_EQUALS</span>
<br/>
<img src="../images/enum24px.svg"/><span class="inline-text">TOK_ST_TAG</span>
<br/>
<img src="../images/enum24px.svg"/><span class="inline-text">TOK_EN_TAG</span>
<br/>
<img src="../images/enum24px.svg"/><span class="inline-text">TOK_SLASH</span>
<br/>
<img src="../images/enum24px.svg"/><span class="inline-text">TOK_QUESTION</span>
<br/>
<img src="../images/enum24px.svg"/><span class="inline-text">TOK_KW_XML</span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Xml/Token.h#L28" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Token.h</span>
</a>
</span>
<br/>
<br/>
<a id="nodesortfunc"></a>
<h2>NodeSortFunc</h2>
<span class="inline-text">std::function&lt; bool(</span>
<a href="classMdDox_1_1Xml_1_1Node.md#node">Node</a>
<span class="inline-text"> *a, </span>
<a href="classMdDox_1_1Xml_1_1Node.md#node">Node</a>
<span class="inline-text"> *b)&gt;</span>
<span class="bold-text"><b>NodeSortFunc</b></span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Xml/Node.h#L32" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Node.h</span>
</a>
</span>
<br/>
<br/>
<a id="attributemap"></a>
<h2>AttributeMap</h2>
<span class="inline-text">std::unordered_map&lt; </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text">, </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &gt;</span>
<span class="bold-text"><b>AttributeMap</b></span>
<br/>
<span class="inline-text">Defines the attribute storage container. </span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Xml/Node.h#L38" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Node.h</span>
</a>
</span>
<br/>
<br/>
<a id="nodearray"></a>
<h2>NodeArray</h2>
<span class="inline-text">std::vector&lt; </span>
<a href="classMdDox_1_1Xml_1_1Node.md#node">Node</a>
<span class="inline-text"> * &gt;</span>
<span class="bold-text"><b>NodeArray</b></span>
<br/>
<span class="inline-text">Defines the child node storage array container. </span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Xml/Node.h#L43" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Node.h</span>
</a>
</span>
<br/>
<br/>
<a id="nodemap"></a>
<h2>NodeMap</h2>
<span class="inline-text">std::unordered_map&lt; </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text">, </span>
<a href="classMdDox_1_1Xml_1_1Node.md#node">Node</a>
<span class="inline-text"> * &gt;</span>
<span class="bold-text"><b>NodeMap</b></span>
<br/>
<span class="inline-text">Defines a name lookup map for nodes. </span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Xml/Node.h#L48" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Node.h</span>
</a>
</span>
<br/>
<br/>
<a id="stringcache"></a>
<h2>StringCache</h2>
<a href="classMdDox_1_1Cache.md#cache">Cache</a>
<span class="inline-text">&lt; </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &gt;</span>
<span class="bold-text"><b>StringCache</b></span>
<br/>
<span class="inline-text">Provides a string based </span>
<a href="classMdDox_1_1Cache.md#cache">Cache</a>
<span class="inline-text"> implementation. </span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Xml/Parser.h#L71" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<br/>
<a id="nodestack"></a>
<h2>NodeStack</h2>
<span class="inline-text">std::stack&lt; </span>
<a href="classMdDox_1_1Xml_1_1Node.md#node">Node</a>
<span class="inline-text"> * &gt;</span>
<span class="bold-text"><b>NodeStack</b></span>
<br/>
<span class="inline-text">Provides a stack structure to build the node tree. </span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Xml/Parser.h#L76" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Parser.h</span>
</a>
</span>
<br/>
<br/>
<a id="codecache"></a>
<h2>CodeCache</h2>
<span class="inline-text">std::vector&lt; </span>
<a href="namespaceMdDox.md#string">String</a>
<span class="inline-text"> &gt;</span>
<span class="bold-text"><b>CodeCache</b></span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Xml/Scanner.h#L28" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Scanner.h</span>
</a>
</span>
<br/>
<br/>
<a id="token"></a>
<h2>Token</h2>
<a href="classMdDox_1_1TokenBase.md#tokenbase">TokenBase</a>
<span class="bold-text"><b>Token</b></span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Xml/Token.h#L44" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Token.h</span>
</a>
</span>
<br/>
<br/>
<a id="indent"></a>
<h2>Indent</h2>
<span class="inline-text">constexpr size_t</span>
<span class="bold-text"><b>Indent</b></span>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Xml/Writer.cpp#L29" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Writer.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="isvalidcharacter"></a>
<h2>isValidCharacter</h2>
<span class="inline-text">bool</span>
<span class="bold-text"><b>isValidCharacter</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const int</span>
<span class="inline-text">ch</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Xml/Scanner.cpp#L33" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Scanner.cpp</span>
</a>
</span>
<br/>
<br/>
<a id="isvalididentifier"></a>
<h2>isValidIdentifier</h2>
<span class="inline-text">bool</span>
<span class="bold-text"><b>isValidIdentifier</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const int</span>
<span class="inline-text">ch</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Xml/Scanner.cpp#L41" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Scanner.cpp</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="namespaceMdDox.md#isletter" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">isLetter</span>
</a>
</span>
<br/>
<span class="icon-list-item"><a href="namespaceMdDox.md#isdecimal" class="icon-list-item"><img src="../images/class24px.svg" class="icon-list-item"/><span class="icon-list-item">isDecimal</span>
</a>
</span>
<br/>
<br/>
<a id="isquote"></a>
<h2>isQuote</h2>
<span class="inline-text">bool</span>
<span class="bold-text"><b>isQuote</b></span>
<span class="italic-text"><i>(</i></span>
<div class="paragraph">
<span class="paragraph"><img src="../images/horSpace24px.svg"/><span class="inline-text">const int</span>
<span class="inline-text">ch</span>
</span>
</div>
<span class="italic-text"><i>)</i></span>
<br/>
<br/>
<br/>
<span class="bold-text"><b>Defined in</b></span>
<br/>
<span class="icon-list-item"><a href="https://github.com/CharlesCarley/MdDox/blob/master/Source/Xml/Scanner.cpp#L46" class="icon-list-item"><img src="../images/file24px.svg" class="icon-list-item"/><span class="icon-list-item">Scanner.cpp</span>
</a>
</span>
<br/>
<br/>
</div>
</div>
</body>
</html>
