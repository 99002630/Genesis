#include "currency.h"
#include <gtest/gtest.h>


TEST(Currency,MinusOverLoading)
{
    Currency c1(5,10);
    Currency c2(3,4);
    Currency c3 = c1-c2;
    EXPECT_EQ(2,c3.rupees());
    EXPECT_EQ(6,c3.paise());

}
