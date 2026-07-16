#pragma once
#include <iostream>
#include "Student.h"
using namespace std;
class Roster
{
private:
	string courseName;
	Student* students;
	int size;
public:
	Roster();
	Roster(string n);
	Roster(string n, Student* s, int size);
	Roster(const Roster& roster);
	~Roster();
	string getCourseName();
	void setCourseName(string name);
	Student* getStudents();
	void setStudents(Student* s);
	int getSize();
	void setSize(int size);
	Student getStudent(int index);
	void dropStudent(Student s);
	Roster operator=(Roster& right);
	Roster operator+(Roster& otherRoster);
	Roster operator-(Roster& otherRoster);
	Roster operator==(Roster& otherRoster);
	Student operator[](const int &sub);




};

