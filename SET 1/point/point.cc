#include <iostream>
#include "point.h"
        Point::Point(): m_x (0),m_y (0){}

        Point::Point(int a, int b): m_x (a), m_y (b){}

        Point::Point(const Point &z): m_x (z.m_x), m_y (z.m_y){}

        double Point:: distanceFromOrigin(){
            return (sqrt((m_x*m_x)+(m_y*m_y)));
        }

        int Point:: quadrant(){
            if(m_x>0 && m_y>0)
                return Q1;
            if(m_x<0 && m_y>0)
                return Q2;
            if(m_x<0 && m_y<0)
                return Q3;
            else
                return Q4;
        }

        bool Point:: isOrigin(){
            if(m_x==0 && m_y==0)
                return true;
            else
                return false;
        }

        bool Point:: isOnXAxis(){
            if(m_y==0 && m_x!=0)
                return true;
            else
                return false;
        }

        bool Point:: isOnYAxis(){
            if(m_x==0 && m_y!=0)
                return true;
            else
                return false;
        }

        void Point:: display(){
        cout<<m_x<<" "<<m_y<<endl;
        }
