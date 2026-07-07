// Name:  Jon Baarsch
// Class: CS2
// Term:  Summer, 2026

#include <iostream>
#include <string>
using namespace std;

// this is a "Forward Declaration."  I am declaring that there
// will be a struct called Student, though I am leaving the 
// details for later.  This is so Course can refer to Students.
struct Student;

struct Course {
	string name;
	long id;
	// Since Student is using a forward declaration and hasn't
	// been detailed yet, I need to refer to Students in Course
	// with pointers, because the compiler wants to know how
	// big Students are--but that hasn't yet been established.
	// All pointers, though, are the same size, regardless of 
	// the size of the entities to which they point.
	Student* roster[5];
};

struct Student {
	string firstName;
    string lastName;
	long id;
	double gpa;
	// Course does not require a pointer reference becasue the 
	// details of the Course struct have already been spelled
	// out above.
	Course classes[5];

	// Optional technique for translating a Student Struct into
	// a data stream for display.  We will cover these in more
	// detail in Module 3.
	// We are overloading the way the << operator works when 
	// we give it a student.  This is actually modifying the 
	// ostream class function.  We don't normally have access
	// to that class, but because we declare that we are a 
	// "friend", we are allowed to re-write the code.
	/*
	friend ostream& operator<<(ostream& strm, const Student& student)
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
	Student* student = getStudent();
	
	// print out a student using the optional method above--
	// the operator<< overload in the Student definition.
	// cout << *student << endl;

	// print out a student using the displayStudent function
	displayStudent(student);

	// release the memory of that was allocated for the student:
	delete student;
	student = nullptr;
}

Student* getStudent() {
	// We need to allocate the student dynamically in order to 
	// ensure that the details remain in memory beyond the 
	// execution of this function.
	Student* student = new Student;
	
	cout << "Please enter the student's first name:" << endl;
	// dynamic memory is accessed with pointers.
	// BUT, the pointer to a student doesn't have a first name 
	// or any of the student details--it's just a pointer.
	// so we need to use the struct pointer operator (->) to 
	// access the details of the student stored at the 
	// location the student pointer points to.
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

