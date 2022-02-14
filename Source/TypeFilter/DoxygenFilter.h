/*
-------------------------------------------------------------------------------
    Copyright (c) Charles Carley.

  This software is provided 'as-is', without any express or implied
  warranty. In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
-------------------------------------------------------------------------------
*/
#pragma once

#include "Utils/TypeFilter.h"

namespace MdDox::Doxygen
{
    enum UsedElements
    {
        DoxUndefined = -1,
        DoxTextNode,
        DoxAnchor,
        DoxArgString,
        DoxArray,
        DoxBaseCompoundRef,
        DoxBlockQuote,
        DoxBold,
        DoxBriefDescription,
        DoxCaption,
        DoxCenter,
        DoxChildNode,
        DoxCodeLine,
        DoxCollaborationGraph,
        DoxCompoundDef,
        DoxCompound,
        DoxCompoundName,
        DoxComputerOutput,
        DoxDeclName,
        DoxDefinition,
        DoxDefName,
        DoxDefVal,
        DoxDerivedCompoundRef,
        DoxDescription,
        DoxDetailedDescription,
        DoxDot,
        DoxDotFile,
        DoxDoxygen,
        DoxDoxygenIndex,
        DoxEdgeLabel,
        DoxEmphasis,
        DoxEntry,
        DoxEnumValue,
        DoxExceptions,
        DoxHeader,
        DoxHeading,
        DoxHighlight,
        DoxHruler,
        DoxImage,
        DoxInBodyDescription,
        DoxIncDepGraph,
        DoxIncludedBy,
        DoxIncludes,
        DoxIndexEntry,
        DoxInheritanceGraph,
        DoxInitializer,
        DoxInnerclass,
        DoxInnerDir,
        DoxInnerFile,
        DoxInnerGroup,
        DoxInnerNamespace,
        DoxInnerPage,
        DoxInt,
        DoxInternal,
        DoxInvIncDepGraph,
        DoxItemizedList,
        DoxLabel,
        DoxLang,
        DoxLanguage,
        DoxLineBreak,
        DoxLink,
        DoxListItem,
        DoxListOfAllMembers,
        DoxLocation,
        DoxMember,
        DoxMemberDef,
        DoxName,
        DoxNode,
        DoxOrderedList,
        DoxPara,
        DoxParam,
        DoxParameterDescription,
        DoxParameterItem,
        DoxParameterList,
        DoxParameterName,
        DoxParameterNameList,
        DoxParameterType,
        DoxParBlock,
        DoxPart,
        DoxPreFormatted,
        DoxProd,
        DoxProgramListing,
        DoxProp,
        DoxRef,
        DoxReferencedBy,
        DoxReferences,
        DoxRegistered,
        DoxReImplementedBy,
        DoxReImplements,
        DoxScope,
        DoxSect,
        DoxSect1,
        DoxSect2,
        DoxSect3,
        DoxSect4,
        DoxSectionDef,
        DoxSimpleSect,
        DoxSmall,
        DoxSp,
        DoxTable,
        DoxTableOfContents,
        DoxTocItem,
        DoxTocList,
        DoxTemplateParamList,
        DoxTitle,
        DoxType,
        DoxUlink,
        DoxVariableList,
        DoxVarListEntry,
        DoxVerbatim,
        DoxWrite,
    };

    extern const TypeFilter* getFilter();
    extern size_t            getFilterSize();
}  // namespace MdDox::Doxygen
