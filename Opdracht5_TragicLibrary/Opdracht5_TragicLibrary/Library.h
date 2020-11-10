#pragma once

#include <iostream>
#include <vector>

#include "Book.h"

class Library
{
public:
	Library();
	~Library();

	void lendBook(Book& book);
	void returnBook(Book& book);

private:

};