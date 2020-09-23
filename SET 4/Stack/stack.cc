#include <iostream>
#include "stack.h"

using namespace std;

template<typename T>

MyStack <T> :: MyStack()
{
    m_arr[max_size];
	m_maxlen = 0;
	m_top = -1;
}

template<typename T>

MyStack <T>:: MyStack(int s)
{
    m_arr[max_size];
	m_maxlen = s;
	m_top = -1;
}

template<typename T>

void MyStack<T>::push(T x)
{

	if (isFull())
	{
		cout << "Empty";
		exit(EXIT_FAILURE);
	}
	cout << "Inserting " << x << endl;
	m_arr[++m_top] = x;
}

template<typename T>
T MyStack<T>::pop()
{
    if (isEmpty())
	{
		cout << "Empty";
		exit(EXIT_FAILURE);
	}
	cout << "Removing " << peek() << endl;
	return m_arr[m_top--];
}

template<typename T>
T MyStack<T>::peek()
{

	if (!isEmpty())
		return m_arr[m_top];
	else
		exit(EXIT_FAILURE);
}
template <typename T>
bool MyStack<T>::isEmpty()
{
	return m_top == -1;
}
template <typename T>
bool MyStack<T>::isFull()
{
	return m_top == m_maxlen - 1;
}
