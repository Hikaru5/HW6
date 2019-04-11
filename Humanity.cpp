#include "stdafx.h" 
#include <cstdio> 
#include <iostream>
#include <string> 



class Employee
{

private:

	std::string name;
	int id;
	std::string date;

public:
	
	Employee(std::string _name, int _id, std::string _date)

	{
		name = _name;
		id = _id;
		date = _date;
		if (id < 0 || id>9999)
		{
			std::string exceptionString = "InvalidEmployeeNumber\n";
			throw exceptionString;
		}
	}

	std::string getName()
	{
		return name;
	}

	int getId()
	{
		return id;
	}

	std::string getDate()
	{
		return date;
	}

	void setName(std::string _name)

	{
		name = _name;
	}

	void setId(int _id)
	{
		id = _id;
	}

	void setDate(std::string _date)
	{
		date = _date;
	}
};

class ProductionWorker : public Employee
{

private:
	int shift;
	double rate;

public:
	ProductionWorker(int _shift, double _rate, std::string _name, int _id, std::string _date) : Employee(_name, _id, _date)
	{
		shift = _shift;
		rate = _rate;
		if (shift < 0)
		{
			std::string exceptionString = "InvalidShift\n";
			throw exceptionString;
		}
		if (rate < 0)
		{
			std::string exceptionString = "InvalidPayRate\n";
			throw exceptionString;
		}
	}

	int getShift()
	{
		return shift;
	}

	double getRate()
	{
		return rate;
	}

	void setShift(int _shift)
	{
		shift = _shift;
	}

	void setRate(double _rate)
	{
		rate = rate;
	}
};

int main()
{
	try 
	{
		Employee staff("Chales Xavier", -5, "09/01/1986");
	}
	catch (std::string exceptionString)
	{
		std::cout << exceptionString;
	}
	try
	{
		Employee above("Frank Furter", 999999, "01/01/2001");
	}
	catch (std::string exceptionString)
	{
		std::cout << exceptionString;
	}
	try
	{
		ProductionWorker worker(-3, 12.5, "Joe Smith", 8335, "08/23/1970");
	}
	catch (std::string exceptionString)
	{
		std::cout << exceptionString;
	}
	try
	{
		ProductionWorker underpaid(8, -50.3, "Save Me", 3355, "11/11/1991");
	}
	catch (std::string exceptionString)
	{
		std::cout << exceptionString;
	}
}