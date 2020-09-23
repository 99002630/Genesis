#ifndef __COLOUR_H_
#define __COLOUR_H_

#include<iostream>

using namespace std;

enum color_t
{
    m_r,
    m_g,
    m_b
};
class Colour
{
private:
    int m_r;
    int m_g;
    int m_b;
public:
  Color();
  Color(int,int,int);       //r,g,b values//Hex value as string
  Color(color_t);           //enum
  int invert();
  void display() const;
};
};

#endif // __COLOUR_H_
