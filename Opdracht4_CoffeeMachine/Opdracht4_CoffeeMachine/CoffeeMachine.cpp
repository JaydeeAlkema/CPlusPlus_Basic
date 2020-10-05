#include "CoffeeMachine.h"

void CoffeeMachine::insertCoin(Coin c)
{
	float coinValue = c.getValue();

	system("cls");
	std::cout << "You can afford these kinds of coffee with :" << c.getName() << std::endl;
	std::cout << "Coin Value :" << c.getValue() << std::endl;
	std::cout << "\n";

	// Ultimately these would be sepperate coffee extending from a 
	// Coffee super class, with each their own name and cost... 
	// but lazyness got the best of me. And this is more a proof of concept.
	if (coinValue >= 0.50f)
	{
		std::cout << "Cappucino." << std::endl;
	}
	if (coinValue >= 1)
	{
		std::cout << "Cafe Latte." << std::endl;
	}
	if (coinValue > 2)
	{
		std::cout << "Macchiato." << std::endl;
	}

	std::cout << "\n";
}

void CoffeeMachine::getCoffeeChoices()
{
	system("cls");
	std::cout << "Available Coffee:" << std::endl;
	std::cout << "Cappucino." << std::endl;
	std::cout << "Cafe Latte." << std::endl;
	std::cout << "Macchiato." << std::endl;
}
