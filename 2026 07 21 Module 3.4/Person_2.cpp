#define _CRT_SECURE_NO_WARNINGS
#include "Person_2.h"

// Default constructor
Person_2::Person_2()
{
    cout << "*** default constructor ***\n";
    name = nullptr;
}

// Constructor with a parameter
Person_2::Person_2(const char* n)
{
    cout << "*** parameterized constructor ***\n";
    name = new char[strlen(n) + 1];
    strcpy(name, n);
}

// Copy constructor
Person_2::Person_2(const Person_2& obj)
{
    cout << "*** copy constructor ***\n";
    name = new char[strlen(obj.name) + 1];
    strcpy(name, obj.name);
}

// Move constructor
Person_2::Person_2(Person_2&& temp)
{  
    cout << "*** move constructor ***\n";
    //swap(name, temp.name);
    
    // Steal the name pointer from temp.
    
    name = temp.name;

    // Nullify the temp object's name pointer.
    temp.name = nullptr;
}

// Destructor
Person_2::~Person_2()
{
    cout << "*** destructor ***\n";
    delete name;
}

// Copy assignment operator
Person_2& Person_2::operator=(const Person_2& right)
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

// Move assignment operator
Person_2& Person_2::operator=(Person_2&& right)
{
    cout << "*** move assignment operator ***\n";
    if (this != &right)
    {
        swap(name, right.name);
    }
    return *this;
}

// getName member fucntion
char* Person_2::getName() const
{
    return name;
}