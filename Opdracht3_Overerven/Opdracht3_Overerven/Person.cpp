#include "Person.h"

Person::Person(int _age, std::string _name) : age(_age), name(_name)
{
}

int Person::getAge()
{
	return age;
}

void Person::setAge(int value)
{
	age = value;
}

std::string Person::getName()
{
	return name;
}

void Person::setName(std::string value)
{
	name = value;
}
