#pragma once
#include <iostream>
#include <string>
using namespace std;

class Dog {
private:
    string name;
    string* breed;
    int age;
    static string species;
public:
    Dog();
    Dog(string n, string* b, int a);
    Dog(const Dog& otherDog);
    void setName(string n);
    string getName();
    
    void setBreed(string* b);
    void setAge(int a);
    string* getBreed();
    int getAge();
    string getDog();
    static string getSpecies();
    static void setSpecies(string s);
    
    friend ostream& operator<< (ostream& o, Dog& thisDog);
    

};
