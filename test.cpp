#include "greet.h"
#include <gtest/gtest.h>


TEST(greetTest, noName)
{
    EXPECT_EQ("Hello, my friend.", greet(""));
    EXPECT_EQ("Hello, my friend.", greet("   $ @,   0,  . "));
}