#include<math.h>
#include <iostream>
#include "point.h"

template<typename T>

Point<T>::Point():m_x(0),m_y(0){}
template<typename T>

Point<T>::Point(T a, T b):m_x(a),m_y(b){}

template<typename T>

double Point<T>::distanceFromOrigin(){
    return(sqrt((m_x*m_x)+(m_y*m_y)));
}

template<typename T>

Quadrant Point<T>::quadrant(){
    if(m_x >=0 && m_y >=0)
        {return  Q1;}
    else if(m_x <= 0 && m_y >= 0)
        {return  Q2;}
    else if(m_x <= 0 && m_y <= 0)
        {return Q3;}
    else
        {return Q4;}

}
template<typename T>

void Point<T>::display(){
    std::cout<<m_x<<m_y;
}
