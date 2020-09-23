#include "customer.h"
#include<gtest/gtest.h>

TEST(Customer, CreditTest) {
	Customer a1(1,1234,1,"Wilson",5000.0);
	a1.credit(1000);
	EXPECT_EQ(6000.0, a1.getBalance());

}
TEST(Customer, makecallTest) {
	Customer a1(1001,1234,1,"Kakarot",5000.0);
	a1.makeCall(1234);
	EXPECT_EQ(5000.0, a1.getBalance());
}
