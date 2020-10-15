#include "Caravan.h"

Caravan::Caravan()
{
	std::cout << "Caravan: ctor: " << " adres " << this << std::endl;
}

Caravan::Caravan(std::string color)
{
	std::cout << "Caravan: ctor: '" << this->color << "' adres " << this << std::endl;
	this->color = color;
}

Caravan::Caravan(const Caravan& otherCaravan)
{
	std::cout << "Caravan: cctor: '" << this->color << "' adres " << this << std::endl;
	if (this == &otherCaravan) return;
	suitcase = new Suitcase(*otherCaravan.suitcase);
}

Caravan& Caravan::operator=(const Caravan& otherCaravan)
{
	std::cout << "Caravan: assignment-oper" << std::endl;
	if (this == &otherCaravan) return *this;
	delete suitcase;
	this->color = otherCaravan.color;
	suitcase = new Suitcase(*otherCaravan.suitcase);
	return *this;
}

Caravan::~Caravan()
{
	std::cout << "Caravan: dtor:" << std::endl;
	delete suitcase;
}

void Caravan::fillCaravan(Suitcase& suitcase)
{
	this->suitcase = &suitcase;
}

void Caravan::showContents()
{
	std::cout << "Caravan: " << this->color << std::endl;
	std::cout << "Suitcase: " << suitcase->color << std::endl;
	suitcase->showContents();
}
