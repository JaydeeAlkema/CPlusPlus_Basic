#pragma once
#include <string>

class Person
{
protected:
	/// <summary>
	/// Age of the Person
	/// </summary>
	int age = 0;
	/// <summary>
	/// Name of the Person.
	/// </summary>
	std::string name = "";

public:
	/// <summary>
	/// Constructor
	/// </summary>
	/// <param name="_age"> Age of the Person. </param>
	/// <param name="_name"> Name of the Person. </param>
	Person(int _age, std::string _name);

	/// <summary>
	/// Get the Person Age.
	/// </summary>
	/// <returns> age </returns>
	int getAge();
	/// <summary>
	/// Set the person age.
	/// </summary>
	/// <param name="value"> new age value </param>
	void setAge(int value);

	/// <summary>
	/// Get the person name.
	/// </summary>
	/// <returns> name </returns>
	std::string getName();
	/// <summary>
	/// Set the person name.
	/// </summary>
	/// <param name="value"> new name value </param>
	void setName(std::string value);
};