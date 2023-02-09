#include <gtest/gtest.h>

#include "../src/logger/logger.h"

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions)
{
    // Expect two strings not to be equal.
    int result = add(1, 2);
    // Expect equality.
    EXPECT_EQ(result, 3);
}