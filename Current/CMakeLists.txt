# -----------------------------------------------------------------------------
#
#   Copyright (c) Charles Carley.
#
#   This software is provided 'as-is', without any express or implied
# warranty. In no event will the authors be held liable for any damages
# arising from the use of this software.
#
#   Permission is granted to anyone to use this software for any purpose,
# including commercial applications, and to alter it and redistribute it
# freely, subject to the following restrictions:
#
# 1. The origin of this software must not be misrepresented; you must not
#    claim that you wrote the original software. If you use this software
#    in a product, an acknowledgment in the product documentation would be
#    appreciated but is not required.
# 2. Altered source versions must be plainly marked as such, and must not be
#    misrepresented as being the original software.
# 3. This notice may not be removed or altered from any source distribution.
# ------------------------------------------------------------------------------
include(MdDoxBuilder)

# Setup for generating the site

set(MdDoxBuilder_SourceLocation ${MdDox_SOURCE_DIR}/Source ${MdDox_SOURCE_DIR}/Tools)
set(MdDoxBuilder_OutputDir      ${MdDox_SOURCE_DIR}/Current)
set(MdDoxBuilder_SourceExclude  "")
set(MdDoxBuilder_SymbolExclude  "std")
set(MdDoxBuilder_ExamplePaths   ${MdDox_SOURCE_DIR}/Current/pages)
set(MdDoxBuilder_ImagePaths     ${MdDox_SOURCE_DIR}/Current/images)
set(MdDoxBuilder_Config         ${MdDox_SOURCE_DIR}/Current/MdDox.cfg)
set(MdDoxBuilder_ExtraSource    ${MdDox_SOURCE_DIR}/Current/colors.cfg)

set(MdDoxBuilder_ALL     TRUE)
set(MdDoxBuilder_BackEnd html)
MdDox(Doxyfile.txt.in ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile)

