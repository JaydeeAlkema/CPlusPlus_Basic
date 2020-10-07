#pragma once

#include <iostream>
#include <string>

class Book
{
public:
	Book(bool loaned);
	~Book();

	bool getLoanedStatus();
	void setLoanedStatus(bool status);

private:
	bool loaned;
};