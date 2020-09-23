#ifndef __STACK_H_
#define __STACK_H_

constexpr int max_size=50;

template<class T>
class MyStack {
  T m_arr[max_size];
  int m_top;
  int m_maxlen;
  public:
  MyStack();
  MyStack(int len);
  void push(T val);
  T pop();
  T peek();
  bool isEmpty();
  bool isFull();
};
#endif
