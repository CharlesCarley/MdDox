#pragma once
/*!
\page Image Image handling


<b>Image handling information.</b><br/>

Application icons and other images are pulled directly from the source code comment and output in-line with the current document.

For example, the following shows the current set of navigation icons.

<blockquote>
\image html sideBar.svg
\image html horSpace24px.svg
\image html back18px.svg
\image html horSpace24px.svg
\image html error18px.svg
\image html horSpace24px.svg
\image html folder18px.svg
\image html horSpace24px.svg
\image html home18px.svg
\image html horSpace24px.svg
\image html link18px.svg
\image html horSpace24px.svg
\image html jumpToTop18px.svg
\image html horSpace24px.svg
\image html debug24px.svg
\image html horSpace24px.svg
\image html file24px.svg
\image html horSpace24px.svg
\image html link24px.svg
\image html horSpace24px.svg
\image html lookInside24px.svg
\image html horSpace24px.svg
\image html class24px.svg
\image html horSpace24px.svg
\image html namespace24px.svg
</blockquote>
> The command <tt>\\image html [file-stem.file-extension]</tt> embeds the image. <br/>
> A common gray color with the value: \c #828EA0FF allows a seamless transition with different GitHub themes.

Icons are expected to be in the <a href="../images">images</a> directory.

\section Internal Icons

The static class \ref MdDox::IconSet maps the enum \ref MdDox::IconId
to the following files to use specific icons internally.

\subsection  Sources

A few of the icons have been copied and modified from the material-design-icons set.
The original sources can be found here: https://github.com/google/material-design-icons

*/