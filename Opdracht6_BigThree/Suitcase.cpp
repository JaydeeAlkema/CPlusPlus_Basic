#include "Suitcase.h"

Suitcase::Suitcase()
{
	std::cout << "Suitcase: ctor: " << " adres " << this << std::endl;
}

Suitcase::Suitcase(std::string color)
{
	std::cout << "Suitcase: ctor: '" << this->color << "' adres " << this << std::endl;
	this->color = color;
}

Suitcase::Suitcase(const Suitcase& otherSuitcase)
{
	std::cout << "Suitcase: cctor: '" << this->color << "' adres " << this << std::endl;
	if (this == &otherSuitcase) return;
	delete socks;
	this->color = otherSuitcase.color;
	socks = new Socks(*otherSuitcase.socks);
}

Suitcase& Suitcase::operator=(const Suitcase& otherSuitcase)
{
	std::cout << "Suitcase: assignment-oper" << std::endl;
	delete socks;
	this->color = otherSuitcase.color;
	return *this;
}

Suitcase::~Suitcase()
{
	std::cout << "Suitcase: dtor" << std::endl;
}

void Suitcase::fillSuitcase(Socks& socks)
{
	this->socks = &socks;
}

void Suitcase::showContents()
{
	std::cout << "Socks: " << socks->color << std::endl;
}

