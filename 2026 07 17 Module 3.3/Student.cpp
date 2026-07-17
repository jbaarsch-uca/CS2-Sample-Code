#include "Student.h"

Student::Student() : Student("Nameless", 0, "Undeclared") {

}
Student::Student(string n, long i, string m) {
	name = n;
	id = i;
	major = m;
}
Student::Student(const Student& student) {
	name = student.name;
	id = student.id;
	major = student.major;
}
string Student::getName() {
	return name;
}
long Student::getId() {
	return id;
}
string Student::getMajor() {
	return major;
}
void Student::setName(string n) {
	this->name = n;
}
void Student::setId(long i) {
	id = i;
}
void Student::setMajor(string m) {
	major = m;
}

bool Student::operator==(const Student& right) {
	return id == right.id;
}
