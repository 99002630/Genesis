#include <iostream>
#include "box.h"
using namespace std;
    Box::Box():m_length(0), m_breadth(0), m_height(0){}

    Box::Box(int a, int b, int c):m_length(a), m_breadth(b), m_height(c){}

    /*Box(int x){
    m_length = x;
    m_breadth = x;
    m_height = x;
    }*/

    Box::Box(const Box &z): m_length(z.m_length), m_breadth(z.m_breadth), m_height(z.m_height){}



    int Box::length(){
    return m_length;
    }

    int Box::breadth(){
    return m_breadth;
    }

    int Box::height(){
    return m_height;
    }

    int Box::volume(){
    return (m_length*m_breadth*m_height);
    }

    void Box::display(){
    cout<<m_length<<endl;
    cout<<m_breadth<<endl;
    cout<<m_height<<endl;
    }
