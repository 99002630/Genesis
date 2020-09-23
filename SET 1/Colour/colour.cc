#inlcude<iostream>
#inlcude"colour.h"
using namespace std;
    Colour::Colour(): m_r (0), m_g (0), m_b (0){}

    Colour::Colour(int a ,int b, int c): m_r (a), m_b (b), m_g (c){}

    // Colour(Colour_t){}

    int Colour:: invert(){
        m_r = 255 - m_r;
        m_b = 255 - m_b;
        m_g = 255 - m_g;
        return m_r;
    }
    void Colour:: display (){
        cout<<m_r<<" "<<m_g<<" "<<m_b<<endl;
    }
