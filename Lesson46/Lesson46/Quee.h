#pragma once
#include "libs.h"
template<typename T>
class Quee
{
private:
	enum { MAX_SIZE = 100 };
	int size = 0;
	T arr[MAX_SIZE];
public:
	Quee();

	T Pop();

	void Push(T el);

	T front();
};

template<typename T>
Quee<T>::Quee()
{
	this->size = 0;
}
template<typename T>
T Quee<T>::Pop()
{
	if (this->size > 0)
	{
		T a = this->arr[0];
		for (int i = 0; i < this->size - 1; i++)
		{
			this->arr[i] = arr[i + 1];
		}
		this->arr[this->size] = a;
		this->size--;
		return a;
	}

	return -1;
}

template<typename T>
void Quee<T>::Push(T el)
{
	this->arr[this->size] = el;
	this->size++;
}

template<typename T>
T Quee<T>::front()
{
	return this->arr[0];
}
