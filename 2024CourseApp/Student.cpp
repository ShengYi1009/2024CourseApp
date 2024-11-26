#include "Student.h"
#include <iostream>
using namespace std;

Student::Student(const string& id, const string& lastName, const string& firstName, const string& gender, const string& birthDate, const string& studentId, Department department, ClassName className) :Person(id, lastName, firstName, gender, birthDate), studentId(studentId), department(department), className(className)
{
}

string Student::getStudentId() const
{
	return studentId;
}

Department Student::getdepartment() const
{
	return Department();
}

ClassName Student::getclassName() const
{
	return ClassName();
}

void Student::setStudentId(const string& studentId)
{
}

void Student::setdepartment(const string& departmant)
{
}

void Student::setClassName(const string& ClassName)
{
}
