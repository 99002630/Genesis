#ifndef __CUSTOMER_H_
#define __CUSTOMER_H_
#include<string>
using namespace std;
const double CALL_RATE = 1.0;

enum class accounttype{
    prepaid,
    postpaid

};
class Customer{

private:
    int m_custID;
    int m_phone;
    int m_type;
    std::string m_custName;
    double m_balance;

public:
    Customer();
    Customer(int,int,int,std::string,double);
    Customer(int,int,int);
    Customer(const Customer&);
    void credit(double);           //recharge or billPay
    void makeCall(double);
    double getBalance();
    void display() ;
};














#endif // __CUSTOMER_H_
