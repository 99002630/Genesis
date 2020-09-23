#include <iostream>
#include "time.h"
using namespace std;

    MyTime::MyTime():hh(0),mm(0),ss(0){}

    MyTime::MyTime(int h, int m, int s): hh(h), mm(m), ss(s){}

    MyTime::MyTime(int hs,int ms): hh(hs), mm(ms),ss(0){}

   MyTime MyTime:: operator+(const MyTime &ref){
        int tmins = mm + ref.mm;
        int thrs =  hh + ref.hh;
        int tsec = ss + ref.ss;
        return MyTime(thrs,tmins,tsec);
    }

    MyTime MyTime:: operator-(const MyTime &ref){
        int tmins = mm - ref.mm;
        int thrs = hh - ref.hh;
        int tsec = ss - ref.ss;
        return MyTime(thrs,tmins,tsec);
    }

    MyTime MyTime:: operator+(int nmins){
        int tmins = mm+nmins;
        int thrs = hh;
        int tsec = ss;
        return MyTime(thrs,tmins,tsec);
    }

   MyTime MyTime:: operator-(int nmins){
        int tmins = mm-nmins;
        int thrs = hh;
        int tsec = ss;
        return MyTime(thrs,tmins,tsec);
    }

    MyTime& MyTime:: operator++(){
        ++mm;
        return *this;
    }

    MyTime MyTime:: operator++(int data) {
        MyTime orig(*this);
        ++mm;
        return orig;
  }

    MyTime& MyTime ::operator+=(const MyTime &ref){
        hh += ref.hh;
        mm += ref.mm;
        ss += ref.ss;
        return *this;
    }

    bool MyTime:: operator==(const MyTime &ref) {
        return hh == ref.hh && mm == ref.mm && ss == ref.ss;
    }

    bool MyTime:: operator <(const MyTime &ref){
        return hh < ref.hh && mm < ref.mm && ss < ref.ss;
    }

    bool MyTime:: operator >(const MyTime &ref){
        return hh > ref.hh && mm > ref.mm && ss > ref.ss;
    }


    void MyTime::display() const { cout <<"Hours: " << hh << "Minutes: " << mm << "Seconds: " <<ss;}


