#pragma once
#include <iostream>
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

	void addLevelMarks(int tempLevel, int smallMarks [4])
	{
		if (tempLevel == 4)
		{
			for (int i = 0; i < 3; i++) 
			{
				marks[i] = smallMarks[i];
			}
		}
		if (tempLevel == 5)
		{
			for (int i = 4; i < 7; i++)
			{
				marks[i] = smallMarks[i];
			}
		}
		if (tempLevel == 6)
		{
			for (int i = 8; i < 11; i++)
			{
				marks[i] = smallMarks[i];
			}
		}	
	}
	
	void outputMarks() 
	{
		cout << firstName << " " << lastName << " " << "(" << studentIDNumber << ")" << endl;
	}
};