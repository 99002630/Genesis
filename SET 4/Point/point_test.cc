#include "point.h"
#include "point.cc"
#include <gtest/gtest.h>

TEST(Point,defaultDistanceQuadrant) {
    Point <int>p1;
    p1.display();
    EXPECT_EQ(0.0,p1.distanceFromOrigin());
    EXPECT_EQ(Q1,p1.quadrant());
}
TEST(Point,DistancefromOrigin)
{   Point <int> p1(-4,-3);
    EXPECT_EQ(5.0, p1.distanceFromOrigin());
    EXPECT_EQ(Q3, p1.quadrant());
}


