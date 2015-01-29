// Copyright (C) 2015 Internet Systems Consortium, Inc. ("ISC")
//
// Permission to use, copy, modify, and/or distribute this software for any
// purpose with or without fee is hereby granted, provided that the above
// copyright notice and this permission notice appear in all copies.
//
// THE SOFTWARE IS PROVIDED "AS IS" AND ISC DISCLAIMS ALL WARRANTIES WITH
// REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY
// AND FITNESS.  IN NO EVENT SHALL ISC BE LIABLE FOR ANY SPECIAL, DIRECT,
// INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM
// LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE
// OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
// PERFORMANCE OF THIS SOFTWARE.

#include <lfc/lfc_controller.h>
#include <gtest/gtest.h>

using namespace isc::lfc;
using namespace std;

namespace {

/// @brief Verify initial state of LFC controller.
/// Create an instance of the controller and see that
/// all of the initial values are empty as expected.
TEST(LFCControllerTest, initialValues) {
    LFCController lfc_controller;

    // Verify that we start with all the private variables empty
    EXPECT_EQ(lfc_controller.getProtocolVersion(), 0);
    EXPECT_TRUE(lfc_controller.getConfigFile().empty());
    EXPECT_TRUE(lfc_controller.getPreviousFile().empty());
    EXPECT_TRUE(lfc_controller.getCopyFile().empty());
    EXPECT_TRUE(lfc_controller.getOutputFile().empty());
    EXPECT_TRUE(lfc_controller.getFinishFile().empty());
    EXPECT_TRUE(lfc_controller.getPidFile().empty());
}

/// @brief Verify that parsing a full command line works.
/// Parse a complete command line then verify the parsed
/// and saved data matches our expectations.
TEST(LFCControllerTest, fullCommandLine) {
    LFCController lfc_controller;

    // Verify that standard options can be parsed without error
    char* argv[] = { const_cast<char*>("progName"),
                     const_cast<char*>("-4"),
                     const_cast<char*>("-x"),
                     const_cast<char*>("previous"),
                     const_cast<char*>("-i"),
                     const_cast<char*>("copy"),
                     const_cast<char*>("-o"),
                     const_cast<char*>("output"),
                     const_cast<char*>("-c"),
                     const_cast<char*>("config"),
                     const_cast<char*>("-f"),
                     const_cast<char*>("finish"),
                     const_cast<char*>("-p"),
                     const_cast<char*>("pid") };
    int argc = 14;

    ASSERT_NO_THROW(lfc_controller.parseArgs(argc, argv));

    // Check all the parsed data from above to the known values
    EXPECT_EQ(lfc_controller.getProtocolVersion(), 4);
    EXPECT_EQ(lfc_controller.getConfigFile(), "config");
    EXPECT_EQ(lfc_controller.getPreviousFile(), "previous");
    EXPECT_EQ(lfc_controller.getCopyFile(), "copy");
    EXPECT_EQ(lfc_controller.getOutputFile(), "output");
    EXPECT_EQ(lfc_controller.getFinishFile(), "finish");
    EXPECT_EQ(lfc_controller.getPidFile(), "pid");
}

/// @brief Verify that parsing a correct but incomplete line fails.
/// Parse a command line that is correctly formatted but isn't complete
/// (doesn't include some options or an some option arguments).  We
/// expect that the parse will fail with an InvalidUsage exception.
TEST(LFCControllerTest, notEnoughData) {
    LFCController lfc_controller;

    // Test the results if we don't include all of the required arguments
    // This argument list is correct but we shall only suppy part of it
    // to the parse routine via the argc variable.
    char* argv[] = { const_cast<char*>("progName"),
                     const_cast<char*>("-4"),
                     const_cast<char*>("-x"),
                     const_cast<char*>("previous"),
                     const_cast<char*>("-i"),
                     const_cast<char*>("copy"),
                     const_cast<char*>("-o"),
                     const_cast<char*>("output"),
                     const_cast<char*>("-c"),
                     const_cast<char*>("config"),
                     const_cast<char*>("-f"),
                     const_cast<char*>("finish"),
                     const_cast<char*>("-p"),
                     const_cast<char*>("pid") };

    int argc = 1;

    for (; argc < 14; ++argc) {
        EXPECT_THROW(lfc_controller.parseArgs(argc, argv), InvalidUsage)
            << "test failed for argc = " << argc;
    }

    // Verify we can still parse the full string properly
    ASSERT_NO_THROW(lfc_controller.parseArgs(argc, argv));
}

/// @brief Verify that extra arguments cause the parse to fail.
/// Parse a full command line plus some extra arguments on the end
/// to verify that we don't stop parsing when we find all of the
/// required arguments.  We exepct the parse to fail with an
/// InvalidUsage exception.
TEST(LFCControllerTest, tooMuchData) {
    LFCController lfc_controller;

    // The standard options plus some others

    char* argv[] = { const_cast<char*>("progName"),
                     const_cast<char*>("-4"),
                     const_cast<char*>("-x"),
                     const_cast<char*>("previous"),
                     const_cast<char*>("-i"),
                     const_cast<char*>("copy"),
                     const_cast<char*>("-o"),
                     const_cast<char*>("output"),
                     const_cast<char*>("-c"),
                     const_cast<char*>("config"),
                     const_cast<char*>("-f"),
                     const_cast<char*>("finish"),
                     const_cast<char*>("-p"),
                     const_cast<char*>("pid"),
                     const_cast<char*>("some"),
                     const_cast<char*>("other"),
                     const_cast<char*>("args"),
    };
    int argc = 17;

    // We expect an error as we have arguments that aren't valid
    EXPECT_THROW(lfc_controller.parseArgs(argc, argv), InvalidUsage);
}

/// @brief Verify that unknown arguments cause the parse to fail.
/// Parse some unknown arguments to verify that we generate the
/// proper InvalidUsage exception.
TEST(LFCControllerTest, someBadData) {
    LFCController lfc_controller;

    // Some random arguments

    char* argv[] = { const_cast<char*>("progName"),
                     const_cast<char*>("some"),
                     const_cast<char*>("bad"),
                     const_cast<char*>("args"),
    };
    int argc = 4;

    // We expect an error as the arguments aren't valid
    EXPECT_THROW(lfc_controller.parseArgs(argc, argv), InvalidUsage);
}

} // end of anonymous namespace
