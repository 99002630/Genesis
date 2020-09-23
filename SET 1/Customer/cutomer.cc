#include <iostream>
#include <string>
#include "customer.h"

    Customer::Customer(): m_custID (0), m_phone (0), m_type (0), m_custName (" "), m_balance (0){}

    Customer::Customer(int a, int b, int c, std::string d, double e): m_custID (a), m_phone (b), m_type (c), m_custName(d), m_balance (e){}

    Customer::Customer(int x, int y, int z): m_custID (x), m_phone (y), m_type (z){}

    Customer::Customer(const Customer &w): m_custID (w.m_custID), m_phone (w.m_phone), m_type (w.m_type), m_custName (w.m_custName),m_balance (w.m_balance){}

     void Customer:: credit(double cre){
        m_balance = m_balance + cre;
    }

    void Customer:: makeCall(double nmins) {
          m_balance -= nmins * CALL_RATE;

      }

    double Customer:: getBalance() {
        return m_balance;
    }

    void Customer:: display(){
    cout<<m_custID<<endl;
    cout<<m_phone<<endl;
    cout<<m_type<<endl;
    cout<<m_custName<<endl;
    cout<<m_balance<<endl;
    }
