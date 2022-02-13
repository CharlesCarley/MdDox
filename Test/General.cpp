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
#include <cstdio>
#include "gtest/gtest.h"
#include "Utils/Console.h"
#include "Utils/FileSystem.h"
#include "Utils/String.h"
#include "Xml/Parser.h"

using namespace MdDox;
using namespace Xml;

GTEST_TEST(General, StringSplitCR)
{
    String inp = "A\rB\rC\r";
    StringArray a0;
    StringUtils::splitLine(a0, inp);

    EXPECT_EQ(3, a0.size());
    EXPECT_EQ("A", a0[0]);
    EXPECT_EQ("B", a0[1]);
    EXPECT_EQ("C", a0[2]);

    inp = "A\nB\nC\n";

    StringArray a1;
    StringUtils::splitLine(a1, inp);

    EXPECT_EQ(3, a1.size());
    EXPECT_EQ("A", a1[0]);
    EXPECT_EQ("B", a1[1]);
    EXPECT_EQ("C", a1[2]);

    inp = "A\rB\nC\r";

    StringArray a2;
    StringUtils::splitLine(a2, inp);

    EXPECT_EQ(3, a2.size());
    EXPECT_EQ("A", a2[0]);
    EXPECT_EQ("B", a2[1]);
    EXPECT_EQ("C", a2[2]);

    inp = "A\r\nB\nC\r\n";

    StringArray a3;
    StringUtils::splitLine(a3, inp);

    EXPECT_EQ(3, a3.size());
    EXPECT_EQ("A", a3[0]);
    EXPECT_EQ("B", a3[1]);
    EXPECT_EQ("C", a3[2]);
}

GTEST_TEST(General, LocaFile)
{
    const PathUtil f0 = PathUtil("Z:\\A\\AAA\\BBB\\CCC\\A.ext1.extLast");

    EXPECT_EQ(f0.fullPath(), "Z:/A/AAA/BBB/CCC/A.ext1.extLast");
    EXPECT_TRUE(f0.hasDirectory());

    StringDeque d0;
    f0.directoryList(d0);

    EXPECT_EQ(d0.at(0), "A");
    EXPECT_EQ(d0.at(1), "AAA");
    EXPECT_EQ(d0.at(2), "BBB");
    EXPECT_EQ(d0.at(3), "CCC");

    const PathUtil f1 = PathUtil("/A/AAA/BBB/CCC/A.ext1.extLast");

    EXPECT_EQ(f1.fullPath(), "/A/AAA/BBB/CCC/A.ext1.extLast");
    EXPECT_TRUE(f1.hasDirectory());

    StringDeque d1;
    f1.directoryList(d1);

    EXPECT_EQ(d1.at(0), "A");
    EXPECT_EQ(d1.at(1), "AAA");
    EXPECT_EQ(d1.at(2), "BBB");
    EXPECT_EQ(d1.at(3), "CCC");

    const PathUtil f2 = PathUtil("Z:\\A\\AAA\\BBB\\CCC\\A.ext1.extLast");

    EXPECT_EQ(f2.parentDir(0), "Z:/A/AAA/BBB/CCC/");
    EXPECT_EQ(f2.parentDir(1), "Z:/A/AAA/BBB/");
    EXPECT_EQ(f2.parentDir(2), "Z:/A/AAA/");
    EXPECT_EQ(f2.parentDir(3), "Z:/A/");
    EXPECT_EQ(f2.parentDir(4), "Z:/");
    EXPECT_EQ(f2.parentDir(5), "Z:/");
    EXPECT_EQ(f2.parentDir(6), "Z:/");

    PathUtil newPath = f2.parentPath(2);
    newPath.appendDirectory(PathUtil("/DDD/EEE/"));
    newPath.fileName(f2.fileName());

    EXPECT_EQ(newPath.fullPath(), "Z:/A/AAA/DDD/EEE/A.ext1.extLast");

    const PathUtil f3 = PathUtil("A/AAA/BBB/CCC/A.ext1.extLast");

    EXPECT_EQ(f3.parentDir(0), "/A/AAA/BBB/CCC/");
    EXPECT_EQ(f3.parentDir(1), "/A/AAA/BBB/");
    EXPECT_EQ(f3.parentDir(2), "/A/AAA/");
    EXPECT_EQ(f3.parentDir(3), "/A/");
    EXPECT_EQ(f3.parentDir(4), "/");
    EXPECT_EQ(f3.parentDir(5), "/");
    EXPECT_EQ(f3.parentDir(6), "/");

    PathUtil newPath1 = f3.parentPath(2);
    newPath1.appendDirectory(PathUtil("DDD/EEE/"));
    newPath1.fileName(f3.fileName());

    EXPECT_EQ(newPath1.fullPath(), "/A/AAA/DDD/EEE/A.ext1.extLast");
}

GTEST_TEST(General, Trim)
{
    String inp = "     A B C       ";
    StringUtils::trimWhiteSpace(inp, inp);

    EXPECT_EQ("A B C", inp);

    inp = "\t\t\t\tA\tB\tC\t\t\t\t\t";
    StringUtils::trimWhiteSpace(inp, inp);
    EXPECT_EQ("A\tB\tC", inp);

    inp = " \t \t \tA\tB C \t \t  \t";
    StringUtils::trimWhiteSpace(inp, inp);
    EXPECT_EQ("A\tB C", inp);
}

GTEST_TEST(General, Scramble)
{
    String inp = "     A B C       ";
    StringUtils::trimWhiteSpace(inp, inp);

    String a, b, c, d;

    StringUtils::scramble(a, (size_t)&inp);
    StringUtils::scramble(b, (size_t)&inp);
    EXPECT_NE(a, b);

    StringUtils::scramble(c, (size_t)&inp);
    EXPECT_NE(a, c);
    EXPECT_NE(b, c);

    StringUtils::scramble(d, (size_t)&inp);
    EXPECT_NE(a, d);
    EXPECT_NE(b, d);
    EXPECT_NE(c, d);

    Console::writeLine("Randomized:");
    Console::writeLine(a);
    Console::writeLine(b);
    Console::writeLine(c);
    Console::writeLine(d);

    StringUtils::scramble(a, (size_t)&inp, false);
    StringUtils::scramble(b, (size_t)&inp, false);
    StringUtils::scramble(c, (size_t)&inp, false);
    StringUtils::scramble(d, (size_t)&inp, false);

    EXPECT_EQ(a, b);
    EXPECT_EQ(b, c);
    EXPECT_EQ(c, d);

    Console::writeLine("Not-Randomized:");
    Console::writeLine(a);
    Console::writeLine(b);
    Console::writeLine(c);
    Console::writeLine(d);
}
