#ifndef __POINT_H_
#define __POINT_H_

#include <iostream>
#include <math.h>

using namespace std;

enum quadrant{
    Q1,
    Q2,
    Q3,
    Q4
};

class Point{

    private:
        int m_x;
        int m_y;


public:

  Point();
  Point(int,int);
  Point(const Point&);
  double distanceFromOrigin() ;
  int quadrant() ;
  bool isOrigin() ;
  bool isOnXAxis() ;
  bool isOnYAxis() ;
  void display() ;
};


#endif // __POINT_H_
