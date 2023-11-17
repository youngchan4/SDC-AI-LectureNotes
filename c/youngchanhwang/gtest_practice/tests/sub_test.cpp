#include <gtest/gtest.h>
#include "../simple/sub.h"


TEST(뺄셈_테스트, 빼기빼기)
{
    EXPECT_EQ(1, sub(3, 2));
}
