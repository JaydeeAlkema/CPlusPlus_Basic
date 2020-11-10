#pragma once
#include <iostream>

class Coin
{
public:
	Coin(float newValue, std::string newName);

	float getValue();
	void setValue(float newValue);

	std::string getName();
	void setName(std::string newName);

private:
	float value;
	std::string name;
};