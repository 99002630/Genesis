#include<iostream>
#include"image.h"

using namespace std;

    Image::Image():m_x(0), m_y(0), m_width(0), m_height(0){}

    Image::Image(int a, int b, int c, int d): m_x(a), m_y(b), m_width(c), m_height(d){}

    Image::Image(const Image &z): m_x(z.m_x), m_y(z.m_y), m_width(z.m_width), m_height(z.m_height){}

    int Image:: movee(int x, int y){
        m_x = m_x+x;
        m_y = m_y+y;
        return m_x,m_y;
    }

    int Image::scale(int s){}

    int Image::resizee(int h, int w){
        m_height = m_height + h;
        m_width = m_width + w;
        return m_height,m_width;
    }

    void Image::display(){
    cout<<m_x<<endl;
    cout<<m_y<<endl;
    cout<<m_width<<endl;
    cout<<m_height<<endl;
    }
