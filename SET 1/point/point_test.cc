
#include "point.h"
#include <gtest/gtest.h>

TEST(Point,Distance)
{
    Point P1(6,8);
    EXPECT_EQ(10,P1.distanceFromOrigin());
}
