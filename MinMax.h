#ifndef MINMAX_H
#define MINMAX_H
#include "stdafx.h"
#include <iostream>

template <class T>
class MinMax
{

public:
	MinMax()
	{

	}
	T minimum(T first, T second);

	T maximum(T first, T second);
};

template <class T>
T MinMax<T>::minimum(T first, T second)
{
	if (first<second)
		return first;
	return second;
}

template <class T>
T MinMax<T>::maximum(T first, T second)
{
	if (first>second)
		return first;
	return second;
}
#endif