#include "stack.h"
#include "stack.cc"
#include <gtest/gtest.h>

TEST(MyStack,ParameterConstructor)
{
    MyStack <int> a(2);
    a.push(3);
    a.push(4);
    EXPECT_EQ(4,a.pop());
}


