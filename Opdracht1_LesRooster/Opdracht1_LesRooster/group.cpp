#include "group.h"

std::string Group::getOwner()
{
	return owner;
}

std::string Group::getName()
{
	return name;
}

void Group::addStudent(Student studentToAdd)
{
	students.push_back(studentToAdd);
}

void Group::addStudent(std::vector<Student> studentsToAdd)
{
	students.insert(students.begin(), studentsToAdd.begin(), studentsToAdd.end());
}

void Group::removeStudent(int index)
{
	students.erase(students.begin() + index);
}

void Group::removeStudent(int a, int b)
{
}

Student Group::getStudent(int index)
{
	return students[index];
}

std::vector<Student> Group::getStudents()
{
	return students;
}
