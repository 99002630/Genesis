#include"complex.h"
#include <iostream>

using namespace std;


template<typename T>
Complex<T>::Complex():m_real(0),m_image(0){}

template<typename T>
Complex<T>::Complex(T a,T b):m_real(a),m_image(b){}

template <typename T>
T Complex<T>::real(){return m_real;}

template <typename T>
T Complex<T>::imag(){return m_image;}

template <typename T>
void Complex<T>::display(){cout<<real()<<"+"<<imag()<<"i\n";}


