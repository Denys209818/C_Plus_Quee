#pragma once
#include "libs.h"
template<typename T>
class RingQuee
{
private:
	enum { MAX_SIZE = 100 };
	int size = 0;
	T arr[MAX_SIZE];
public:
	int static col;
	RingQuee();

	T Pop();

	void Push(T el);

	bool empty();

	T front();
};
int RingQuee<int>::col = 0;
template<typename T>
RingQuee<T>::RingQuee()
{
	this->size = 0;
}

template<typename T>
T RingQuee<T>::Pop()
{
	if (!empty())
	{
		T a = this->arr[0];
		for (int i = 0; i < this->size; i++)
		{
			this->arr[i] = this->arr[i + 1];
		}
		this->arr[this->size - 1] = a;
		return this->arr[0];
	}
	else
	{
		return -1;
	}
}
template<typename T>
void RingQuee<T>::Push(T el)
{
	RingQuee::col++;
	this->arr[this->size] = el;
	this->size++;
}

template<typename T>
bool RingQuee<T>::empty()
{
	return this->size == 0;
}

template<typename T>
T RingQuee<T>::front()
{
	if (!empty())
	{
		return this->arr[0];
	}
}