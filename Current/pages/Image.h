#pragma once
/*!
\page Image Image handling


\section S1 Image handling information.

Application icons and other images are pulled directly from the source code comment and output
in-line with the current document.
<br/>
For example, the following shows the current set of navigation icons.

<blockquote>
\image html back.svg
\image html horSpace24px.svg
\image html error.svg
\image html horSpace24px.svg
\image html folder.svg
\image html horSpace24px.svg
\image html home.svg
\image html horSpace24px.svg
\image html enum.svg
\image html horSpace24px.svg
\image html jumpToTop.svg
\image html horSpace24px.svg
\image html debug.svg
\image html horSpace24px.svg
\image html file.svg
\image html horSpace24px.svg
\image html link.svg
\image html horSpace24px.svg
\image html lookInside.svg
\image html horSpace24px.svg
\image html class.svg
\image html horSpace24px.svg
\image html namespace.svg
</blockquote>


The command <tt>\\image html [file-stem.file-extension]</tt> embeds the image. <br/>
Icons are expected to be in the <a href="../images">images</a> directory.

\subsection Internal Icons

The static class \ref MdDox::IconSet maps files in the image directory to the enum \ref MdDox::IconId.
Internal icons are referenced by \ref MdDox::IconId through \ref MdDox::IconSet.


\subsubsection  Sources

Some icons have been copied and modified from the material-design-icons set.
The original sources can be found here: https://github.com/google/material-design-icons

*/