#include "Roster.h"

Roster::Roster() : Roster("Unnamed") {
	
}
Roster::Roster(string n) {
	courseName = n;
	students = new Student[0];
	size = 0;
}
Roster::Roster(string n, Student* s, int numberOfStudents) {
	courseName = n;
	students = s;
	size = numberOfStudents;
}
Roster::Roster(const Roster& roster) {
	courseName = roster.courseName;
	size = roster.size;
	students = new Student[size];
	for (int i = 0; i < size; i++)
		students[i] = roster.students[i];
}
Roster::~Roster() {
	delete[] students;
}
string Roster::getCourseName() {
	return courseName;
}
void Roster::setCourseName(string name) {
	courseName = name;
}
Student* Roster::getStudents() {
	return students;
}
void Roster::setStudents(Student* s) {
	students = s;
}
int Roster::getSize() {
	return size;
}
void Roster::setSize(int s) {
	size = s;
}
Student Roster::getStudent(int index) {
	return students[index];
}
void Roster::dropStudent(Student s) {
	int studentFound = -1;
	for (int i = 0; i < size; i++) {
		if (s == students[i]) {
			studentFound = i;
			break;
		}
	}
	if (studentFound >= 0) {
		Student* newClassList = new Student[size - 1];
		for (int i = 0; i < studentFound; i++)
			newClassList[i] = students[i];
		for (int i = studentFound+1; i < size; i++)
			newClassList[i] = students[i];
		size = size - 1;
		delete[] students;
		students = newClassList;
	}
}
Roster Roster::operator=(Roster& right) {
	if (this != &right) {
		delete[] students;   // delete current students
		courseName = right.courseName;  // transfer normal data
		size = right.size;
		students = new Student[size];  // create new dynamically allocated array
		for (int i = 0; i < size; i++)
			students[i] = right.students[i]; // transfer students
	}
	return *this;
}
Roster Roster::operator+(Roster& otherRoster) {
	Roster roster;
	return roster;
}
Roster Roster::operator-(Roster& otherRoster) {
	Roster roster;
	return roster;
}
Roster Roster::operator==(Roster& otherRoster) {
	Roster roster;
	return roster;
}
Student Roster::operator[](const int& sub) {
	if (sub < 0 || sub >(size - 1)) // out of range
		throw new std::out_of_range("out of range error!");
	return students[sub];
	
}
