// 2026 07 21 Module 3.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Person.h"
#include "Person_2.h"
using namespace std;

// Function prototype
Person makePerson();
void displayPerson(Person);

Person_2 makePerson_2();
void displayPerson_2(Person_2);

int main()
{
	/*
	int max = 8;
	int& AliasOfMax = max;

	cout << AliasOfMax << endl;

	AliasOfMax = 5;

	cout << max << endl;

	int&& sumRef = 4 + 3;
	int&& otherRef = 7+9;

	cout << sumRef << endl;
	 

	 */


	
	Person person;
	Person& AliasOfPerson = person;
	person = makePerson();
	displayPerson(person);
	person = AliasOfPerson;
	
	cout << "\n\n\n";
	Person_2 person_2;
	//Person_2 person_ex = makePerson_2();
	person_2 = makePerson_2();
	displayPerson_2(person_2);

	
	return 0;
}

Person makePerson()
{
	Person p("Will MacKenzie");
	return p;
}

void displayPerson(Person p2)
{
	cout << p2.getName() << endl;
}


Person_2 makePerson_2() {
	Person_2 p("Will MacKenzie_2");
	return p;
}
void displayPerson_2(Person_2 p2) {
	cout << p2.getName() << endl;
}