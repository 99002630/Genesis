#include "image.h"
#include <gtest/gtest.h>


TEST(Image,movetest)
{   Image I1(27,20,0,0);
    EXPECT_EQ((57,50),I1.movee(30,30));
}


