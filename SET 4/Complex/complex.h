
#ifndef __COMPLEX_H_
#define __COMPLEX_H_

template<typename T>
class Complex {
  T m_real;
  T m_image;
  public:
  Complex();
  Complex(T,T);
  T real();
  T imag();
  void display();
};

#endif

