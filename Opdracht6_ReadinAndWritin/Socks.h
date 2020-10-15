#pragma once
#include <string>
#include <iostream>

class Socks
{
public:
	Socks();
	Socks(std::string color);
	Socks(const Socks& otherSocks);
	Socks& operator=(const Socks& otherSocks);
	virtual ~Socks();

	std::string color;
private:

};
