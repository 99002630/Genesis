#ifndef __POINT_H_
#define __POINT_H_

enum Quadrant {
  Q1,
  Q2,
  Q3,
  Q4
};


template<typename T>
class Point {
  T m_x;
  T m_y;
  public:
  Point();
  Point(T,T);
  double distanceFromOrigin();
  Quadrant quadrant();
  void display();
};

#endif

