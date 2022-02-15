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
#include "MdDoxTree/Config.h"
#include "TestDirectory.h"
#include "Utils/Exception.h"
#include "gtest/gtest.h"

using namespace MdDox;

GTEST_TEST(General, ConfigInitial)
{
    Config          cfg;
    InputFileStream input(GetTestFilePath("Config001.cfg"));
    EXPECT_TRUE(input.is_open());

    cfg.load(input);

    const String& val1 = cfg.getValue("A");
    EXPECT_EQ("B", val1);
    const String& val2 = cfg.getValue("C");
    EXPECT_EQ("E", val2);
}

GTEST_TEST(General, Config01)
{
    Config          cfg;
    InputFileStream input(GetTestFilePath("Config002.cfg"));
    EXPECT_TRUE(input.is_open());

    cfg.load(input);

    EXPECT_TRUE(cfg.getBool("SHOW_DEBUG"));
    EXPECT_EQ(".md", cfg.getValue("OUTPUT_FILE_EXT"));
    EXPECT_EQ("markdown", cfg.getValue("OUTPUT_DIR"));
    EXPECT_EQ("MdDox", cfg.getValue("PROJECT_ROOT"));
    EXPECT_EQ("style.css", cfg.getValue("STYLESHEET"));
    EXPECT_EQ("https://github.com/CharlesCarley/MdDoc", cfg.getValue("SITE_URL"));
    EXPECT_EQ("https://github.com/CharlesCarley/MdDoc/blob/master", cfg.getValue("BASE_URL"));
    EXPECT_EQ("Source,Tools", cfg.getValue("SEARCH_DIRS"));
}

GTEST_TEST(General, Config003)
{
    Config          cfg;
    InputFileStream input(GetTestFilePath("Config003.cfg"));
    EXPECT_TRUE(input.is_open());

    try
    {
        cfg.load(input);
    }
    catch (Exception& ex)
    {
        Console::writeLine(ex.what());
    }
}

GTEST_TEST(General, Config004)
{
    Config          cfg;
    InputFileStream input(GetTestFilePath("Config004.cfg"));
    EXPECT_TRUE(input.is_open());

    cfg.load(input);
    EXPECT_EQ(cfg.getValue("a0"), "Valid");
    EXPECT_TRUE(cfg.getValue("a1").empty());
    EXPECT_EQ(cfg.getValue("a2"), "F00");
}
