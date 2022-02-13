#pragma once
/*!
\page Design Design tests 


\section S02 Formatting 

<b>Output Tests:</b><br/>
Output test for the special commands. In order of \c \\b, \c \\e, \c \\c.

- This text should be \b bold.
- This text should be \e italic.
- This text should be in \c typewriter font.

\section S03 Paragraph 

<b>Paragraph Test:</b><br/>
This text is a large block of text to inform you about something that is useful.
However, for this block, the content is meant to be meaningless filler.
Its sole purpose is to be nothing more than a long-winded block of over-stated,
over-emphasized text to give the document a much fuller body.
At first glance, it provides the feeling as if this content is saying something
\b important! Although, while this text may appear to be saying something important;
which it is not. That appearance in itself is the real meaning of it, which from
a design perspective allows viewing how a large block of text will be output in
the final markdown document.
<br/>

\section S04 BlockQuote

\subsection SSS01 Block quote test

> This is a markdown style quote... 
>> This is a nested markdown style quote... 
>>> This is another nested markdown style quote... 
<br/>


\subsection SS02 HTML Block Quote Tests

<blockquote>
<b>Output Tests:</b><br/>
Output test for the special commands. In order of \c \\b, \c \\e, \c \\c.

- This text should be \b bold.
- This text should be \e italic.
- This text should be in \c typewriter font.
</blockquote>


\subsubsection SS03 h4 Paragraph Test

This text is a large block of text to inform you about something that is useful.
However, for this block, the content is meant to be meaningless filler.
Its sole purpose is to be nothing more than a long-winded block of over-stated,
over-emphasized text to give the document a much fuller body.
At first glance, it provides the feeling as if this content is saying something
\b important! Although, while this text may appear to be saying something important;
which it is not. That appearance in itself is the real meaning of it, which from
a design perspective allows viewing how a large block of text will be output in
the final markdown document.


\section S05 ImageTest

\subsection SS04 Image Tests:

In order to implement custom dot diagrams the source needs to:
<br/>
- Process dot source, and push it to a list in the site builder.
- Write the final image link as if it already exists.
- After all pages have been processed, the site builder needs to invoke the dot executable for each source and write the output to SVG.
- <i>This is a pre-generated dot file, but it should be possible to do this on the fly!.</i><br/>\image html page-fragment.svg

*/