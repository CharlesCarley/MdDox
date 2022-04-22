# MdDox

MdDox is a project that transforms Doxygen XML output into a GFM based 
HTML format. 


The primary goal is to embed the output files into the markdown browser on GitHub. 
The embedded serves the same purpose as a static document site. 
Except that it is more integrated with the online source code browser. 


## Current State

It is still in active development. But in its current state, it can embed into GitHub,
and it can generate graphs from source code comments.

There are still a lot of loose ends that need worked out. And it is only slightly beyod
a proof of concept. Changes to its structure may happen frequently.



- [x] Create a small XML parser from scratch. 
- [x] Load index.xml and use it to generate the initial site. 
- [x] Generate an API off the compound.xsd file.
- [x] Use seperate backend document writers.
- [X] Output a basic html site.
- [ ] Make the MarkdownDocumentWriter write pure markdown.
- [ ] Build small example use cases.
- [ ] Test on different repositories. 


### Documentation index

The root of the output can be found in the [Index file](Current/markdown/index.md#mddox), and the output is generated in the [Current](Current/) directory.