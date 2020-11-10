#include <iostream>

#include "Library.h"
#include "book.h"

Library* library = new Library();
Book* book = new Book(false);

void getUserInput()
{
	int in;

	std::cout << "Enter one of the number commands below:" << std::endl;
	std::cout << "1. Loan the one and only book..." << std::endl;
	std::cout << "2. Return the one and only book." << std::endl;
	std::cout << "3. Exit application." << std::endl;
	std::cout << "\n";
	std::cin >> in;

	switch (in)
	{
	case 1:
		library->lendBook(*book);
		getUserInput();
		break;

	case 2:
		library->returnBook(*book);
		getUserInput();
		break;

	case 3:
		break;

	default:
		break;
	}
}


int main()
{
	getUserInput();

	delete library;
	delete book;
}
