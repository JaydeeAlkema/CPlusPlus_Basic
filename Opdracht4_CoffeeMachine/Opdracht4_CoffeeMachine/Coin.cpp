#include "coin.h"

Coin::Coin(float newValue, std::string newName)
{
	value = newValue;
	name = newName;
}

float Coin::getValue()
{
	return value;
}

void Coin::setValue(float newValue)
{
	value = newValue;
}

std::string Coin::getName()
{
	return name;
}

void Coin::setName(std::string newName)
{
	name = newName;
}
