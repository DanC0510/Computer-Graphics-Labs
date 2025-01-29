#pragma once

using namespace std;

class Student
{
public:
	string firstName;
	string lastName;
	int studentIDNumber;
	string course;
	int level;
	int marks [12];

	Student(string FirstName, string LastName, int StudentIDNumber, string Course, int Level)
	{
		firstName = FirstName;
		lastName = LastName;
		studentIDNumber = StudentIDNumber;
		course = Course;
		level = Level;
	}
};