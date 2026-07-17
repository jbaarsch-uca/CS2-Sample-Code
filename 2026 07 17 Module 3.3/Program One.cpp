// Name:  Jon Baarsch
// Class: CS2
// Term:  Summer, 2026
// Created: 7/17/2026 11:39:04 AM

#include <iostream>
#include "Roster.h"
#include "Student.h"
using namespace std;

int main()
{
    Student* list1 = new Student[2];
    list1[0] = Student("Josiah", 1, "Computer Science");
    list1[1] = Student("Ashanti", 2, "Computer Science");

    Student* list2 = new Student[3];
    list2[0] = Student("Herschel", 3, "Computer Science");
    list2[1] = Student("Brasen", 4, "Computer Science");
    list2[2] = Student("Callie", 5, "Computer Science");

    Roster cs1("CS1", list1, 2);
    Roster cs2("CS2", list2, 3);

    for (int i = 0; i < cs2.getSize(); i++)
        cout << cs2.getStudent(i)->getName() << endl;


    //cs2 = cs2 = cs1;
    //cs2.operator=(cs1);


    for (int i = 0; i < cs2.getSize(); i++)
        cout << cs2.getStudent(i)->getName() << endl;

    Roster cs3;
    cs3 = cs1 + cs2;

    for (int i = 0; i < cs3.getSize(); i++)
        cout << cs3.getStudent(i)->getName() << endl;
}
