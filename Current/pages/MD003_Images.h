#pragma once
/*!
\page MD003 Image handling

\brief Describes the way internal icons are accessed.

\h1 Image handling information

Application icons and other images are pulled directly from the source code comment and output
in-line with the current document.
\br

The following shows the current set of navigation icons.
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

The command <tt>\\image html [file-stem.file-extension]</tt> will embed the image.
Icons and reference images are expected to be in the <a href="../images">images</a> directory.
From there, the class \ref_class{IconSet} maps files to the \ref_class{IconId} enum.

\h2 External Sources

Some icons have been copied and modified from the material-design-icons set.
The original sources can be found here: https://github.com/google/material-design-icons

*/