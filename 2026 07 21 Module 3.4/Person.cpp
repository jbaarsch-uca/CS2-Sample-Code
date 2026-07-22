#define _CRT_SECURE_NO_WARNINGS
#include "Person.h"

Person::Person()
{
    cout << "*** default constructor ***\n";
    name = nullptr;
}

// Constructor with a parameter
Person::Person(const char* n)
{
    cout << "*** parameterized constructor ***\n";
    name = new char[strlen(n) + 1];
    strcpy(name, n);
}

// Copy constructor
Person::Person(const Person& obj)
{
    cout << "*** copy constructor ***\n";
    name = new char[strlen(obj.name) + 1];
    strcpy(name, obj.name);
}

// Destructor
Person::~Person()
{
    cout << "*** destructor ***\n";
    delete name;
}

// Overloaded = operator
Person& Person::operator=(const Person& right)
{
    cout << "*** assignment operator ***\n";
    if (this != &right)
    {
        if (name != nullptr)
            delete[] name;
        name = new char[strlen(right.name) + 1];
        strcpy(name, right.name);
    }
    return *this;
}

// getName member function
char* Person::getName() const
{
    return name;
}
