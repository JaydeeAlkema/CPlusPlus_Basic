#include "Person.h"

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
