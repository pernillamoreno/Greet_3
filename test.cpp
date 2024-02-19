#include "greet.h"
#include <gtest/gtest.h>
/**
 * @brief Construct a new TEST object
 * Instead of a CMake file, use a Makefile to build and run the test
    Following the Github Flow strategy
    Creating a workflow which is triggered on
        Pushes to any branch to build and run the test
            If the branch is main, make a release
        Pull request on the main branch to build and run the test
    Create a status badge in README.md
 *
 */

TEST(greetTest, noName)
{
    EXPECT_EQ("Hello, my friend.", greet(""));
    EXPECT_EQ("Hello, my friend.", greet("   $ @,   0,  . "));
}

TEST(greetTest, oneName)
{
    EXPECT_EQ("Hello, Bob.", greet("Bob"));
    /*EXPECT_EQ("Hello, Bob.", greet("      Bob"));
    EXPECT_EQ("Hello, Bob.", greet("  ,    Bob"));*/
    EXPECT_EQ("Hello, Bob.", greet("  ,    0Bob, @ "));


    EXPECT_EQ("HELLO, BOB!", greet("BOB"));
    EXPECT_EQ("HELLO, BOB!", greet("  ,    0BOB, @ "));
}

TEST(greetTest, twoName)
{
    EXPECT_EQ("Hello, Jill and Jane.", greet("Jill, Jane"));
}
