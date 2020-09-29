#pragma once
#include "Person.h"

class Teacher : public Person
{
private:
	int income = 0;

public:
	int getIncome();
	void setIncome(int value);
};
