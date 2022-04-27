# MdDox

Transforms Doxygen XML output into a GitHub flavored markdown based HTML format.

The output can be found in the [index,](Current/markdown/index.md#mddox) and the
output is generated in the [Current](Current/) directory.

## Current State

It is still in active development. In its current state, it can embed into GitHub
and it can generate graphs from source code comments.

There are still a lot of loose ends that need worked out. And it is only slightly
beyond a proof of concept. Changes to its structure may happen frequently.

- [x] Create a small XML parser from scratch.
- [x] Load index.xml and use it to generate the initial site.
- [x] Generate an API off the compound.xsd file.
- [x] Use separate backend document writers.
- [X] Output a basic html site.
- [X] Test on different repositories.
- [ ] Organize and clean up the fragmented documents.
- [ ] Make the MarkdownDocumentWriter write pure markdown.
- [ ] Build small example use cases.
