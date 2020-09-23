#ifndef __BOX_H_
#define __BOX_H_
using namespace std;

class Box {

private:
    int m_length;
    int m_breadth;
    int m_height;

public:
  Box();
  Box(int,int,int);
  Box(int);
  Box(const Box&);
  int length() ;
  int breadth() ;
  int height() ;
  int volume() ;
  void display() ;
};
#endif // __BOX_H_
