#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
   char *name;
   
public:
   // Default constructor
	Person();

   // Constructor with a parameter
   Person(const char* n);

   // Copy constructor
   Person(const Person& obj);

   // Destructor
   ~Person();

   // Overloaded = operator
   Person& operator=(const Person& right);
   // getName member function
   char* getName() const;

};
#endif