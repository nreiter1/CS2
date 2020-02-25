#include <iostream>;
#include "Functions.h";
using namespace std;

//struct Student
//{
//
//	int studentID;
//	string fName;
//	string lName;
//	string email;
//	string phone;
//	float gpa;
//	vector<Course> courses;
//};
//
//struct Course
//{
//	int courseID;
//	string name;
//	int hours;
//	char grade;
//};


void displayStudent(Student& student)
{
	cout << "Student Information" << endl;
	cout << "ID: " << student.studentID << endl;
	cout << "Name: " << student.lName << ", " << student.fName << endl;
	cout << "Email: " << student.email << endl;
	cout << "Phone: " << student.phone << endl;
	float gpa = calculateGPA(student.courses);
	cout << "GPA: " << gpa << endl;

}

void displayCourse(Course& course)
{
	cout << "ID: " << course.courseID << endl;
	cout << "Name: " << course.name << endl;
	cout << "Hours: " << course.hours << endl;
	cout << "Grade: " << course.grade << endl;
}

void displayAllStudents(vector<Student> studentList)
{
	for (Student student :studentList)
	{
		displayStudent(student);
		for (Course course : student.courses)
		{
			displayCourse(course);
		}
	}
}

int convertToNumber(char grade)
{
	if (grade == 'A')
		return 4;
	if (grade == 'B')
		return 3;
	if (grade == 'C')
		return 2;
	if (grade == 'D')
		return 1;
	else
		return 0;
}

float calculateGPA(vector<Course> courses)
{
	float totalHours = 0.0;
	float gradePoints = 0.0;
	for (Course course : courses)
	{
		totalHours += course.hours;
		gradePoints += convertToNumber(course.grade) * course.hours;
	}
	return (gradePoints / totalHours);
}