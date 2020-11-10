#pragma once
#include "Person.h"

class Student : public Person
{
private:
	/// <summary>
	/// Studentloan of the Student.
	/// </summary>
	int studentLoan = 0;

public:
	/// <summary>
	/// Constructor.
	/// </summary>
	/// <param name="_age"> age of the Student. </param>
	/// <param name="_name"> name of the Student. </param>
	/// <param name="_studentLoan"> studentloan of the Student. </param>
	Student(int _age, std::string _name, int _studentLoan);

	/// <summary>
	/// Get studentloan.
	/// </summary>
	/// <returns> studentLoan </returns>
	int getStudentLoan();
	/// <summary>
	/// Set studentloan.
	/// </summary>
	/// <param name="value"> new studentLoan value.</param>
	void setStudentLoan(int value);
};
