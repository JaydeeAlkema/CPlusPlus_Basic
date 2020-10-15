#pragma once

#include <string>
#include <iostream>

#include "Socks.h"

class Suitcase
{
public:
	Suitcase();
	Suitcase(std::string color);
	Suitcase(const Suitcase& otherSuitcase);
	Suitcase& operator=(const Suitcase& otherSuitcase);
	virtual ~Suitcase();

	void fillSuitcase(Socks& socks);
	void showContents();

	std::string color;

private:
	Socks* socks = nullptr;
};
