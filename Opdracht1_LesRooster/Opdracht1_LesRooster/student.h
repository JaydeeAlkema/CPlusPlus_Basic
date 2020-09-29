#pragma once
#include <string>

class Student
{
private:
	// Name of the student
	std::string name;
	// Student Number.
	int number;
	// Which year the student belongs to.
	int studyYear;
public:
	// Returns the student name.
	std::string getName();
	// Returns the student number. (StudentNumber)
	int getStudentNumber();
	// Returns the student study year.
	int getStudyYear();
};