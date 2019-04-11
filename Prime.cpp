#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>


int isPrime(int test)
{
	for (int i = 2; i < test - 1; i++)
	{
		if (test%i == 0)
			return 0;
	}
	return test;
}

int main()
{
	bool invalid = true;
	int prime = 0;
	while (invalid)
	{
		std::cout << "Enter an integer greater than one: ";
		std::string temp;
		std::cin >> temp;
		prime = std::stoi(temp);
		if (prime > 1)
			invalid = false;
	}
	std::vector<int> list(prime);
	for (int i = 0; i < prime; i++)
		list[i] = i + 2;

	for (int i = 0; i < list.size(); i++)
	{
		int value = isPrime(list[i]);
		if (value > 0)
			std::cout << value << " "<<std::endl;
	}

	return 0;
}