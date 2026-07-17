#pragma once
#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
	string name;
	long id;
	string major;

public:
	Student();
	Student(string n, long i, string m);
	Student(const Student& student);
	string getName();
	long getId();
	string getMajor();
	void setName(string n);
	void setId(long i);
	void setMajor(string m);
	bool operator==(const Student& right);
};

