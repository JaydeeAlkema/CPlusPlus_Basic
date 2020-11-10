#include "Library.h"

Library::Library()
{
	std::cout << "A library has been created!\n" << std::endl;
}

Library::~Library()
{
	std::cout << "A library has been deleted!\n" << std::endl;
}

void Library::lendBook(Book& book)
{
	if (!book.getLoanedStatus())
	{
		std::cout << "You loaned the book! it is now not available is the library anymore.\n" << std::endl;
		book.setLoanedStatus(true);
	}
	else
	{
		std::cout << "Sorry... This book is already loaned out.\n" << std::endl;
	}
}

void Library::returnBook(Book& book)
{
	if (book.getLoanedStatus())
	{
		std::cout << "You returned the book to the library.\n" << std::endl;
		book.setLoanedStatus(false);
	}
	else
	{
		std::cout << "Sorry... You currently don't have this book. Please acquire to book before returning it.\n" << std::endl;
	}
}
