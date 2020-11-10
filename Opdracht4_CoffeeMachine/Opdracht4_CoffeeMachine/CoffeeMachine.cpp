#include "CoffeeMachine.h"

void CoffeeMachine::insertCoin(OneEuro oneEuro)
{
	system("cls");
	std::cout << "You Bought a Cappucino!" << std::endl;
	std::cout << "\n";
}

void CoffeeMachine::insertCoin(FiftyCents fiftyCents)
{
	system("cls");
	std::cout << "You Bought a Cafe Latte!" << std::endl;
	std::cout << "\n";
}

void CoffeeMachine::insertCoin(SchlatCoin schlatCoin)
{
	system("cls");
	std::cout << "You Bought a Macchiato!" << std::endl;
	std::cout << "\n";
}

void CoffeeMachine::getCoffeeChoices()
{
	system("cls");
	std::cout << "Available Coffee:" << std::endl;
	std::cout << "Cappucino: 1 Euro" << std::endl;
	std::cout << "Cafe Latte: 50 cents" << std::endl;
	std::cout << "Macchiato: 1 Schlat Coin" << std::endl;
}
