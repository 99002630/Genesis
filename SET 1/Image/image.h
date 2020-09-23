#ifndef __IMAGE_H_
#define __IMAGE_H_

#include<iostream>
using namespace std;
class Image{
    private:
        int m_x;
        int m_y;
        int m_width;
        int m_height;

    public:
        Image();
        Image(int,int,int,int);
        Image(const Image&);
        int movee(int,int);
        int scale(int);
        int resizee(int,int);
        void display();
    };

#endif // __IMAGE_H_
