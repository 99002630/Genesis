#include "box.h"
#include <gtest/gtest.h>

TEST(Box,VolumeTest)
{
    Box B1(30,30,30);
    EXPECT_EQ(27000, B1.volume());

}
/*TEST(Box,DisplayTest) {
    Box B1(30,30,30);
    std::string ExpectedOut="30,30,30\n";
    testing::internal::CaptureStdout();
    B1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}*/
