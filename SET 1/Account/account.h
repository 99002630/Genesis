#ifndef __ACCOUNT_H_
#define __ACCOUNT_H_

using namespace std;

class Account
{
private:
    int m_accnumber;
    std::string m_accName;
    double m_balance;

public:
  Account();
  Account(int,std::string,double);
  Account(int,double);
  Account(const Account&);
  void debit(double);
  void credit(double);
  double getBalance() const;
  void display();

};
#endif
