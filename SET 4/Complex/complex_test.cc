#include "complex.h"
#include "complex.cc"
#include <gtest/gtest.h>


TEST(Complex,Default)
{
    Complex <int> a1;
    EXPECT_EQ(0,a1.real());
    EXPECT_EQ(0,a1.imag());
}
TEST(Complex,Parameterised)
{
    Complex <int> a1(16,20);
    EXPECT_EQ(16,a1.real());
    EXPECT_EQ(20,a1.imag());
}


