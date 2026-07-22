#ifndef PERSON_2_H
#define PERSON_2_H
#include <iostream>
#include <cstring>
using namespace std;

class Person_2
{
private:
   char *name;
public:
   // Default constructor
    Person_2();
   
   // Constructor with a parameter
    Person_2(const char* n);
   
   // Copy constructor
    Person_2(const Person_2& obj);
     
   // Move constructor
    Person_2(Person_2&& temp);
   
   // Destructor
    ~Person_2();
  
   // Copy assignment operator
    Person_2& operator=(const Person_2& right);

   // Move assignment operator
    Person_2& operator=(Person_2&& right);
      
   // getName member fucntion
    char* getName() const;
   
};
#endif