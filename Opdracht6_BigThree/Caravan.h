#pragma once

#include <iostream>

#include "Suitcase.h"
#include "Socks.h"

class Caravan
{
public:
	Caravan();
	Caravan(std::string color);
	Caravan(const Caravan& otherCaravan);
	Caravan& operator=(const Caravan& otherCaravan);
	virtual ~Caravan();

	void fillCaravan(Suitcase& suitcase);
	void showContents();

	std::string color;

private:
	Suitcase* suitcase = nullptr;
};

