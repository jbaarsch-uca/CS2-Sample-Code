// Name:  Jon Baarsch
// Class: CS2
// Term:  Summer, 2026

#include <iostream>
#include <string>
using namespace std;

struct Student;

struct Course {
	string name;
	long id;
	Student* roster[5];
};

struct Student {
	string firstName;
    string lastName;
	long id;
	double gpa;
	Course classes[5];

	// optional technique for translating a Student Struct into
	// a data stream for display
	/*friend ostream& operator<<(ostream& strm, const Student& student)
	{
		strm << "First Name" << "\t" << student.firstName << endl;
		strm << "Last Name" << "\t" << student.lastName << endl;
		strm << "Id" << "\t" << student.id << endl;
		strm << "GPA" << "\t" << student.gpa << endl;

		return strm;
	}

	*/
};

Student* getStudent();
void displayStudent(Student* student);


int main()
{
 

	Student student = *getStudent();

	

	
	

}

Student* getStudent() {
	Student* student = new Student;
	
	cout << "Please enter the student's first name:" << endl;
	getline(cin, student->firstName);
	cout << "Please enter the student's last name:" << endl;
	getline(cin, student->lastName);
	cout << "Please enter the student's id:" << endl;
	cin >> student->id;
	cin.ignore();
	cout << "Please enter the student's gpa:" << endl;
	cin >> student->gpa;
	cin.ignore();

	return student;


}

// displays a Student struct nicely to the console.

void displayStudent(Student* student) {
	cout << "First Name" << "\t" << student->firstName << endl;
	cout << "Last Name" << "\t" << student->lastName << endl;
	cout << "Id" << "\t" << student->id << endl;
	cout << "GPA" << "\t" << student->gpa << endl;

}

