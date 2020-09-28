#include <iostream>
#include <vector>
#include <time.h>
#include <cstdlib>

/// <summary>
/// Since I'm lazy I will be putting all the code within the main.cpp
/// I'm kinda shooting myself in the foot here...
/// </summary>

std::vector<int> randomizedInts;
std::vector<int> inputInts;

void clear();
void getUserInput();
void addRandomIntegerToVectorAndPrintToConsole();
void initGameLoop();
void checkUserInputForErrors();

void clear()
{
	// CSI[2J clears screen, CSI[H moves the cursor to top-left corner
	std::cout << "\x1B[2J\x1B[H";
}

void getUserInput()
{
	clear();

	std::cout << "Your time to shine!" << std::endl;
	std::cout << "Enter the previously shown sequence of integers:" << std::endl;

	for (size_t i = 0; i < randomizedInts.size(); i++)
	{
		std::cout << "Int " << i + 1 << ":";
		int input;
		std::cin >> input;
		inputInts.push_back(input);
		std::cout << "\n";
	}

	// check if list is correct
	checkUserInputForErrors();
}

void addRandomIntegerToVectorAndPrintToConsole()
{
	clear();

	int randInt = std::rand() % 100;
	randomizedInts.push_back(randInt);

	std::cout << "Simon Says:" << std::endl;
	for (size_t i = 0; i < randomizedInts.size(); i++)
	{
		std::cout << randomizedInts[i] << ", " << std::endl;
	}

	std::cout << "Press ENTER to continue." << std::cin.get();
	getUserInput();
}

// Initialize the random integers vector and display it to the user.
void initGameLoop()
{
	clear();

	for (size_t i = 0; i < 3; i++)
	{
		int randInt = std::rand() % 100;
		randomizedInts.push_back(randInt);
	}

	std::cout << "Simon Says:" << std::endl;
	for (size_t i = 0; i < randomizedInts.size(); i++)
	{
		std::cout << randomizedInts[i] << ", " << std::endl;
	}

	std::cout << "Press ENTER to continue." << std::cin.get();
	getUserInput();
}

void checkUserInputForErrors()
{
	clear();

	for (size_t i = 0; i < randomizedInts.size(); i++)
	{
		if (inputInts[i] != randomizedInts[i])
		{
			clear();
			std::cout << "GAME OVER" << std::endl;
			std::cout << "Press ENTER to continue..." << std::cin.get();
			std::exit(0);
		}
	}
	addRandomIntegerToVectorAndPrintToConsole();
}

int main()
{
	srand(time(NULL));
	initGameLoop();

	return 0;
}
