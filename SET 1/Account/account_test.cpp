#include <iostream>
#include "account.h"
#include<gtest/gtest.h>

using namespace std;

/*int main(){
    //Account a1;
    //a1.display();
    //Box b1;
    //b1.display();
    //b1.volume();
    Customer c1;
    c1.display();
    Image d1;
    d1.display();
    return 0;
}*/

TEST(Account,CreditTest) {
    Account a1(1001,"Lippman",5000.0);
    a1.credit(3000);
    EXPECT_EQ(8000.0,a1.getBalance());

}
TEST(Account,DefaultConstructor) {
    Account a1;
    EXPECT_EQ(0.0,a1.getBalance());
}

TEST(Account,DebitTest) {
    Account a1(1001,"Lippman",5000.0);
    a1.debit(1200);
    EXPECT_EQ(3800.0,a1.getBalance());
}

/*TEST(Account,TransactionTest) {
    Account a1(1001,"Lippman",5000.0);
    a1.debit(1200);
    a1.credit(3400);
    a1.debit(2000);
    a1.credit(3000);
    EXPECT_EQ(8200.0,a1.getBalance()) << "Invalid Balance";
}*/


