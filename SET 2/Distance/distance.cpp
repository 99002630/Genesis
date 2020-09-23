#include <iostream>
#include"distance.h"

using namespace std;

    Distance::Distance():m_feets{0},m_inches{0}{}

    Distance::Distance(int f,int i):m_feets{f},m_inches{i}{}

    Distance Distance::operator +(const Distance &ref)
    {
        Distance d;
        d.m_feets=m_feets+ref.m_feets;
        d.m_inches=m_inches+ref.m_inches;
        while(d.m_inches>=12)
        {
            d.m_feets+=1;
            d.m_inches-=12;
        }
        return d;
    }
    Distance Distance::operator -(const Distance &ref)
    {
         Distance c;
        if(m_inches>=ref.m_inches || m_feets<=ref.m_feets)
        {
            c.m_inches=m_inches-ref.m_inches;
            c.m_feets=m_feets-ref.m_feets;
            return c;
        }
        else if (m_inches<=ref.m_inches)
        {
            c.m_inches=m_inches-ref.m_inches+12;
            c.m_feets=m_feets-ref.m_feets-1;
            return c;
        }
        return c;
    }

     Distance Distance::operator +(int a)
    {
    Distance c;
        c.m_inches=m_inches+a;
        c.m_feets=m_feets+(c.m_inches/12);
        c.m_inches%=12;
        return c;
    }

     Distance Distance::operator -(int a)
    {
        Distance c;
        if(m_inches>=a)
        {
            c.m_inches=m_inches-a;
            c.m_feets=m_feets;
            return c;
        }
        else if (m_inches<=a)
        {
            c.m_feets=m_feets-(a/100);
            c.m_inches=m_inches-(a%100);
            return c;
        }
        return c;

    }
     Distance& Distance:: operator ++()
    {
        ++m_inches;
    if(m_inches==12)
       {
           m_feets+=1;
           m_inches=0;
       }
    return *this;
    }

    Distance Distance:: operator ++(int a)
    {
        Distance t(*this);
        ++m_inches;
            if(m_inches==12)
                {
                m_feets+=1;
                m_inches=0;
                }
        return t;
    }

    bool Distance::operator ==(const Distance&a)
    {
        return m_feets==a.m_feets && m_inches==a.m_inches;
    }

    bool Distance:: operator <(const Distance&a)
    {
        if(m_feets<a.m_feets )
    {
        return 1;
    }
    else if(m_feets==a.m_feets)
    {
        if(m_inches<a.m_inches)
            return 1;
        else
            return 0;
        }
        return 0;
    }

    bool Distance::operator >(const Distance&a)
    {
        if(m_feets>a.m_feets )
    {
        return 1;
    }
    else if(m_feets==a.m_feets)
    {
        if(m_inches>a.m_inches)
            return 1;
        else
            return 0;
        }
    return 0;
    }



    void Distance::display()const
    {
        cout<<m_feets<<"feets "<<m_inches<<"inches\n";
    }

    int Distance::feets()const{
     return m_feets;}
    int Distance::inches()const{
     return m_inches;}
