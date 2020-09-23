#include "colour.h"
#include <gtest/gtest.h>

TEST (colour,sample)
{   Colour C1(100,100,100);
    EXPECT_EQ(155,C1.invert());
}
