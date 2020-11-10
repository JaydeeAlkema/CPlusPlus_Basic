#include <iostream>
#include "Caravan.h"
#include "Suitcase.h"
#include "Socks.h"

int main()
{
	Caravan caravan1 = Caravan("Red");
	Caravan caravan2 = Caravan();
	Suitcase* suitcase = new Suitcase("Groen");
	Socks socks = Socks("Blue");

	suitcase->fillSuitcase(socks);
	caravan1.fillCaravan(*suitcase);
	caravan1.showContents();

	std::cout << std::endl;
	std::cout << "Caravan get's stolen..." << std::endl;
	std::cout << std::endl;

	caravan2 = caravan1;
	caravan2.showContents();

	return 0;
}
