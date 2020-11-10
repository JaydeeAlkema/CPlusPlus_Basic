#include "Student.h"


Student::Student(int _age, std::string _name, int _studentloan) : Person(_age, _name)
{
	studentLoan = _studentloan;
}

int Student::getStudentLoan()
{
	return studentLoan;
}

void Student::setStudentLoan(int value)
{
	studentLoan = value;
}
