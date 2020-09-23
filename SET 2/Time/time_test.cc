#include <gtest/gtest.h>
#include "time.h"

TEST(Mytime,DisplayTest) {
    MyTime a1(20,27,16);
    std::string ExpectedOut="Hours: 20Minutes: 27Seconds: 16";
    testing::internal::CaptureStdout();
    a1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
