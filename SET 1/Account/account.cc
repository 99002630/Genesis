#include <iostream>
#include "account.h"
using namespace std;
    Account::Account(): m_accnumber (0), m_accName (""), m_balance (0){}

    Account::Account(int a, std::string b, double c): m_accnumber (a), m_accName (b), m_balance (c){}

    Account::Account(int x, double y): m_accnumber(x), m_accName (""), m_balance (y){}

    Account::Account (const Account &z): m_accnumber {z.m_accnumber}, m_accName (z.m_accName), m_balance (z.m_balance){}

    void Account:: debit(double deb){
    m_balance = m_balance-deb;
    }

    void Account:: credit (double cre){
    m_balance = m_balance+cre;
    }

    double Account:: getBalance() const{
    return m_balance;
    }

    void Account:: display(){
    cout<<m_accnumber<<endl;
    cout<<m_accName<<endl;
    cout<<m_balance<<endl;
    }
