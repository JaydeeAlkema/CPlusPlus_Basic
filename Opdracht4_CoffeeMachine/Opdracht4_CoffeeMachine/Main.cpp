#include <iostream>

#include"CoffeeMachine.h"
#include"FiftyCents.h"
#include"OneEuro.h"
#include"SchlatCoin.h"

CoffeeMachine coffeeMachine;

FiftyCents fiftycents = FiftyCents(0.50f, "Fifty Cents");
OneEuro oneEuro = OneEuro(1, "One Euro");
SchlatCoin schlatCoin = SchlatCoin(INT64_MAX, "Schlat Coin");

void getUserInput()
{
	system("cls");
	int userInput;

	std::cout << "commands: (write the number below:)\n";
	std::cout << "1: Show Coffee Choices\n";
	std::cout << "2: Insert Coin\n";
	std::cout << "Command: ";
	std::cin >> userInput;

	if (userInput == 1)
	{
		coffeeMachine.getCoffeeChoices();

		system("pause");

		getUserInput();
	}
	else if (userInput == 2)
	{
		system("cls");
		std::cout << "Which coin do you want to use? (Enter the Number below)\n";
		std::cout << "1: Fifty Cents\n";
		std::cout << "2: One euro\n";
		std::cout << "3: Schlat Coin\n";
		std::cout << "Command: ";
		std::cin >> userInput;

		if (userInput == 1)
		{
			coffeeMachine.insertCoin(fiftycents);
		}
		else if (userInput == 2)
		{
			coffeeMachine.insertCoin(oneEuro);
		}
		else if (userInput == 3)
		{
			coffeeMachine.insertCoin(schlatCoin);
		}
	}
	else
	{
		getUserInput();
	}
}


int main()
{
	getUserInput();

	system("pause");
}
