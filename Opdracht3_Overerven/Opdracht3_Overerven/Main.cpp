#include <iostream>
#include "Student.h"
#include "Teacher.h"

Teacher teacher = Teacher(28, "Edwin", 4192);
Student student = Student(20, "Jaydee", 42396);

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
	printTeacherInfo();
	std::cout << std::endl;
	printStudentInfo();

	std::cout << "\nPress Enter to continue..." << std::endl;
	std::cin.get();
}
