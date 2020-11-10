#include "Teacher.h"

Teacher::Teacher(int _age, std::string _name, int _income) : Person(_age, _name)
{
	income = _income;
}

int Teacher::getIncome()
{
	return income;
}

void Teacher::setIncome(int value)
{
	income = value;
}
