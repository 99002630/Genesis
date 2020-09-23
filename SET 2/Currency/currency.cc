    #include <iostream>
    #include "currency.h"


    using namespace std;

    Currency :: Currency():m_rupees(0),m_paise(0){}

    Currency :: Currency(int r, int p): m_rupees(r), m_paise(p){}

    Currency :: Currency(int p)
    {
        m_paise = m_paise+p;
        m_rupees = 0;
        if(m_paise > 99){
            m_rupees = m_rupees + 1;
            m_paise = m_paise - 100;
        }
    }

    Currency Currency :: operator+(const Currency &ref)
    {
        int trs = m_rupees + ref.m_rupees;
        int tps = m_paise + ref.m_paise;
        return Currency(trs,tps);
    }

    Currency Currency :: operator-(const Currency &ref)
    {
        int trs = m_rupees - ref.m_rupees;
        int tps = m_paise - ref.m_paise;
        return Currency(trs,tps);
    }

    Currency Currency :: operator+(int ps)
    {
        int trs = m_rupees;
        int tps = m_paise + ps;
        if(tps>99){
            trs = trs+1;
            tps = tps-100;
        }
        return Currency(trs,tps);
    }

    Currency Currency :: operator-(int ps)
    {
       int trs = m_rupees;
        int tps = m_paise - ps;
        if(tps<0){
            trs = trs-1;
            tps = tps+100;
        }
        return Currency(trs,tps);
    }

     Currency& Currency :: operator++()
     {
        Currency temp;
        if (temp.m_paise > 99) {
		temp.m_rupees = temp.m_rupees + 1;
		temp.m_paise = temp.m_paise - 100;
	}
        temp.m_rupees += m_rupees ;
        temp.m_paise = m_paise + 1;

        return temp;
     }

     Currency Currency:: operator ++ (int data)//post
    {
        Currency c;
        c.m_rupees = m_rupees;
        c.m_paise = m_paise++;
        if (c.m_paise > 99) {
            c.m_rupees += 1;
            c.m_paise -= 100;
        }
        return c;
    }

    int Currency::rupees() {
        return m_rupees;
    }
    int Currency::paise() {
        return m_paise;
    }

    bool Currency::operator== (const Currency &ref)
    {
        return m_rupees == ref.m_rupees && m_paise == ref.m_paise;
    }
    bool Currency::operator< (const Currency& ref) {
        return m_rupees < ref.m_rupees && m_paise < ref.m_paise;
    }
    bool Currency::operator> (const Currency& ref) {
        return m_rupees > ref.m_rupees && m_paise > ref.m_paise;
    }
    void Currency::display() {
        cout << m_rupees << "." << m_paise;
    }
