# MdDox

Is a project that transforms Doxygen XML output into a GFM based 
HTML format. 

The primary goal is to embed the output files into the markdown browser on GitHub. 
The embedded content would serve the same purpose as a static document site. 
Except that it would be more integrated with the online source code browser. Another 
goal is to build dot graphs and custom SVG content from the source code comments. 

## Current State

It is still in active development. In its current state, it can embed into GitHub,
and it can generate graphs.

There are still a lot of loose ends that need worked out. It is only slightly beyod
a proof of concept stage. Changes to its structure may happen frequently.

- [x] Create a small XML parser from scratch. 
- [x] Load index.xml and use it to generate the initial site. 
- [x] Generate an API off the compound.xsd file.
- [x] Use seperate backend document writers.
- [X] Output a basic html site.
- [ ] Make the MarkdownDocumentWriter write pure markdown.
- [ ] Build small example use cases.
- [ ] Reference the dot executable from a path in the config file.  
- [ ] Test on different repositories. 
- [ ] Write a c++ SVG drawing context that can be called from code comments.  

### Documentation index

The output can be found in the [Current](Current/) directory and the [Index](Current/markdown/indexpage.md#mddox)