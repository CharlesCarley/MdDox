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
#include "DoxygenFilter.h"
#include "Utils/TypeFilter.h"

namespace MdDox::Doxygen
{
    constexpr TypeFilter CurrentTags[] = {
        // clang-format off
        {"_text_node",           DoxTextNode},
        {"anchor",               DoxAnchor},
        {"argsstring",           DoxArgString},
        {"array",                DoxArray},
        {"basecompoundref",      DoxBaseCompoundRef},
        {"blockquote",           DoxBlockQuote},
        {"bold",                 DoxBold},
        {"briefdescription",     DoxBriefDescription},
        {"caption",              DoxCaption},
        {"center",               DoxCenter},
        {"childnode",            DoxChildNode},
        {"codeline",             DoxCodeLine},
        {"collaborationgraph",   DoxCollaborationGraph},
        {"compound",			 DoxCompound},
        {"compounddef",          DoxCompoundDef},
        {"compoundname",         DoxCompoundName},
        {"computeroutput",       DoxComputerOutput},
        {"declname",             DoxDeclName},
        {"definition",           DoxDefinition},
        {"defname",              DoxDefName},
        {"defval",               DoxDefVal},
        {"derivedcompoundref",   DoxDerivedCompoundRef},
        {"description",          DoxDescription},
        {"detaileddescription",  DoxDetailedDescription},
        {"dot",                  DoxDot},
        {"dotfile",              DoxDotFile},
        {"doxygen",              DoxDoxygen},
        {"doxygenindex",         DoxDoxygenIndex},
        {"edgelabel",            DoxEdgeLabel},
        {"emphasis",             DoxEmphasis},
        {"entry",                DoxEntry},
        {"enumvalue",            DoxEnumValue},
        {"exceptions",           DoxExceptions},
        {"header",               DoxHeader},
        {"heading",              DoxHeading},
        {"highlight",            DoxHighlight},
        {"hruler",               DoxHruler},
        {"image",                DoxImage},
        {"inbodydescription",    DoxInBodyDescription},
        {"incdepgraph",          DoxIncDepGraph},
        {"includedby",           DoxIncludedBy},
        {"includes",             DoxIncludes},
        {"indexentry",           DoxIndexEntry},
        {"inheritancegraph",     DoxInheritanceGraph},
        {"initializer",          DoxInitializer},
        {"innerclass",           DoxInnerclass},
        {"innerdir",             DoxInnerDir},
        {"innerfile",            DoxInnerFile},
        {"innergroup",           DoxInnerGroup},
        {"innernamespace",       DoxInnerNamespace},
        {"innerpage",            DoxInnerPage},
        {"int",                  DoxInt},
        {"internal",             DoxInternal},
        {"invincdepgraph",       DoxInvIncDepGraph},
        {"itemizedlist",         DoxItemizedList},
        {"label",                DoxLabel},
        {"lang",                 DoxLang},
        {"language",             DoxLanguage},
        {"linebreak",            DoxLineBreak},
        {"link",                 DoxLink},
        {"listitem",             DoxListItem},
        {"listofallmembers",     DoxListOfAllMembers},
        {"location",             DoxLocation},
        {"member",               DoxMember},
        {"memberdef",            DoxMemberDef},
        {"name",                 DoxName},
        {"node",                 DoxNode},
        {"orderedlist",          DoxOrderedList},
        {"para",                 DoxPara},
        {"param",                DoxParam},
        {"parameterdescription", DoxParameterDescription},
        {"parameteritem",        DoxParameterItem},
        {"parameterlist",        DoxParameterList},
        {"parametername",        DoxParameterName},
        {"parameternamelist",    DoxParameterNameList},
        {"parametertype",        DoxParameterType},
        {"parblock",             DoxParBlock},
        {"part",                 DoxPart},
        {"preformatted",         DoxPreFormatted},
        {"prod",                 DoxProd},
        {"programlisting",       DoxProgramListing},
        {"prop",                 DoxProp},
        {"ref",                  DoxRef},
        {"referencedby",         DoxReferencedBy},
        {"references",           DoxReferences},
        {"registered",           DoxRegistered},
        {"reimplementedby",      DoxReImplementedBy},
        {"reimplements",         DoxReImplements},
        {"scope",                DoxScope},
        {"sect",                 DoxSect},
        {"sect1",                DoxSect1},
        {"sect2",                DoxSect2},
        {"sect3",                DoxSect3},
        {"sect4",                DoxSect4},
        {"sectiondef",           DoxSectionDef},
        {"simplesect",           DoxSimpleSect},
        {"small",                DoxSmall},
        {"sp",                   DoxSp},
        {"table",                DoxTable},
        {"tableofcontents",      DoxTableOfContents},
        {"templateparamlist",    DoxTemplateParamList},
        {"title",                DoxTitle},
        {"tocitem",              DoxTocItem},
        {"toclist",              DoxTocList},
        {"type",                 DoxType},
        {"ulink",                DoxUlink},
        {"variablelist",         DoxVariableList},
        {"varlistentry",         DoxVarListEntry},
        {"verbatim",             DoxVerbatim},
        {"write",                DoxWrite},
        // clang-format on
    };

    constexpr const TypeFilter* getFilter()
    {
        return CurrentTags;
    }

    size_t getFilterSize()
    {
        return sizeof CurrentTags / sizeof CurrentTags[0];
    }

}  // namespace MdDox::Doxygen
