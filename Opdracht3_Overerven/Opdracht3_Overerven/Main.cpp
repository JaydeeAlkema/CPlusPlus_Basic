#include <iostream>
#include "Student.h"
#include "Teacher.h"

Teacher teacher;
Student student;

/// <summary>
/// Initializes the teacher info.
/// </summary>
void initTeacher()
{
	teacher.setName("Edwin");
	teacher.setAge(22); // :)
	teacher.setIncome(4192); // :))))
}
/// <summary>
/// Initializes the Student info.
/// </summary>
void initStudent()
{
	student.setAge(44);
	student.setName("Jaydee");
	student.setStudentLoan(42378);
}

/// <summary>
/// Print Teacher info.
/// </summary>
void printTeacherInfo()
{
	int teacherAge = teacher.getAge();
	std::string teacherName = teacher.getName();
	int teacherIncome = teacher.getIncome();

	std::cout << "Teacher Name: " << teacherName << std::endl;
	std::cout << "Teacher Age: " << teacherAge << std::endl;
	std::cout << "Teacher Income: " << teacherIncome << "$" << std::endl;

}
/// <summary>
/// Print Student info.
/// </summary>
void printStudentInfo()
{
	int studentAge = student.getAge();
	std::string studentName = student.getName();
	int studentLoan = student.getStudentLoan();

	std::cout << "Student Name: " << studentName << std::endl;
	std::cout << "Student Age: " << studentAge << std::endl;
	std::cout << "Student StudentLoan: " << studentLoan << "$" << std::endl;
}

int main()
{
	initTeacher();
	initStudent();

	printTeacherInfo();
	std::cout << std::endl;
	printStudentInfo();

	std::cout << "\nPress Enter to continue..." << std::endl;
	std::cin.get();
}
