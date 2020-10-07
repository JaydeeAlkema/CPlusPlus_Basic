#include "Book.h"

Book::Book(bool loaned)
{
	this->loaned = loaned;
}

Book::~Book()
{

}

bool Book::getLoanedStatus()
{
	return this->loaned;
}

void Book::setLoanedStatus(bool status)
{
	this->loaned = status;
}

