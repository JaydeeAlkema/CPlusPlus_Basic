#pragma once
#include "Person.h"

class Teacher : public Person
{
private:
	/// <summary>
	/// Income of the Teacher.
	/// </summary>
	int income = 0;

public:
	/// <summary>
	/// Constructor of the Teacher. Set the base variables here.
	/// </summary>
	/// <param name="_age"> The age of the Teacher. </param>
	/// <param name="_name"> The name of the Teacher. </param>
	/// <param name="_income"> The income of the Teacher. </param>
	Teacher(int _age, std::string _name, int _income);

	/// <summary>
	/// Get the Income of the Teacher.
	/// </summary>
	/// <returns> income </returns>
	int getIncome();
	/// <summary>
	/// Set the Income of the Teacher.
	/// </summary>
	/// <param name="value"> New Income Value. </param>
	void setIncome(int value);
};
