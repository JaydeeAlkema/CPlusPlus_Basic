#pragma once
#include "student.h"
#include <string>
#include <vector>

class Group
{
private:
	// Owner of the group. (Ultimately this should be a different class.)
	std::string owner;
	// name of the group
	std::string name;
	/* List of all the students within the group.
	// With this you can get all the students that belong to this group.
	// but the student also holds a vector of all the groups they belong to.
	*/
	std::vector<Student> students = std::vector<Student>();
public:
	// Get the owner of the group.
	std::string getOwner();
	// Get the name of the group.
	std::string getName();

	// Add a student to the group.
	void addStudent(Student studentToAdd);
	// Add a vector of students to the group
	void addStudent(std::vector<Student> studentsToAdd);

	// Remove student from the group at index
	void removeStudent(int index);
	// Remove students from the vector from index a, to b
	void removeStudent(int a, int b);

	// Get a student from the vector from the given index.
	Student getStudent(int index);
	// Get the vector with students.
	std::vector<Student> getStudents();
};