#pragma once
#include <string>

class Person
{
protected:
	int age = 0;
	std::string name = "";

public:
	int getAge();
	void setAge(int value);

	std::string getName();
	void setName(std::string value);
};