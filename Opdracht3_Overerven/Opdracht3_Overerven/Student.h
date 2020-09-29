#pragma once
#include "Person.h"

class Student : public Person
{
private:
	int studentLoan = 0;

public:
	int getStudentLoan();
	void setStudentLoan(int value);
};
