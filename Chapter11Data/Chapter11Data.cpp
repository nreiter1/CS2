// Ch11-DataStructures.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>
#include <vector>
#include "functions.h"
using namespace std;

int main()
{
	//Working program to enter student and course data

	//Create a vector of Student structures using the struct as a type
	vector<Student> studentList;

	cout << "***** Enter Student Data *****" << endl;
	cout << "##############################" << endl;
	bool moreStudents = true;
	while (moreStudents == true)
	{
		Student tmpStudent;
		cout << "Enter Student ID: ";
		cin >> tmpStudent.studentID;
		cout << "Enter Student First Name: ";
		cin >> tmpStudent.fName;
		cout << "Enter Student Last Name: ";
		cin >> tmpStudent.lName;
		cout << "Enter Student Email: ";
		cin >> tmpStudent.email;
		cout << "Enter Student Phone Number: ";
		cin >> tmpStudent.phone;
		//gpa will be calculated later

		//This region of code allows the user to input data for one 
		//or more courses that the student is enrolled in.
#pragma region courseDataEntry

		bool moreCourses;
		char response;
		cout << "Would you like to enter course data for this student? (y or n) ";
		cin >> response;
		if (response == 'y')
			moreCourses = true;
		else
			moreCourses = false;

		while (moreCourses == true)
		{
			Course tmpCourse;
			cout << endl << endl << "Enter Student Courses" << endl << endl;
			cout << "Enter Course ID: ";
			cin >> tmpCourse.courseID;
			cout << "Enter Course Name: ";
			cin >> tmpCourse.name;
			cout << "Enter the Course Hours: ";
			cin >> tmpCourse.hours;
			cout << "Enter course Grade (A,B,C,D,F): ";
			cin >> tmpCourse.grade;

			tmpStudent.courses.push_back(tmpCourse);  //add the course to the student object

			cout << "Would you like to enter another course? (y or n) ";
			cin >> response;
			if (response == 'y')
				moreCourses = true;
			else
				moreCourses = false;
		}
#pragma endregion

		cout << "You entered the following information" << endl;
		displayStudent(tmpStudent);
		cout << endl << "Do you want to save this information? ";
		cin >> response;
		if (response == 'y')
		{
			studentList.push_back(tmpStudent);		//add the student object to the vector of students
		}

		cout << "Would you like to enter another student? (y or n) ";
		cin >> response;
		if (response == 'y')
			moreStudents = true;
		else
			moreStudents = false;
	}

	//display all the students in the studentlist
	displayAllStudents(studentList);

}
