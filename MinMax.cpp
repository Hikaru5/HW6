#include "stdafx.h"
#include "MinMax.h"
#include <iostream>

int main()
{
	MinMax<int> intCompare;
	MinMax<bool> truthCompare;
	std::cout<<intCompare.minimum(4, 6)<<std::endl;
	std::cout<<intCompare.maximum(8, 5)<<std::endl;
	std::cout << truthCompare.minimum(true, false) << std::endl;
	std::cout << truthCompare.maximum(true, false) << std::endl;
}
