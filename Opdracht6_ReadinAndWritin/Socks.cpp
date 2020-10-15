#include "Socks.h"

Socks::Socks()
{
	std::cout << "Socks: ctor: " << " adres " << this << std::endl;
}

Socks::Socks(std::string color)
{
	std::cout << "Socks: ctor: '" << this->color << "' adres " << this << std::endl;
	this->color = color;
}

Socks::Socks(const Socks& otherSocks)
{
	std::cout << "Socks: cctor: '" << this->color << "' adres " << this << std::endl;
	if (this == &otherSocks) return;
	this->color = otherSocks.color;
}

Socks& Socks::operator=(const Socks& otherSocks)
{
	std::cout << "Socks: assignment-oper" << std::endl;
	if (this == &otherSocks) return *this;
	this->color = otherSocks.color;
	return *this;
}

Socks::~Socks()
{
	std::cout << "Socks: dtor" << std::endl;
}
