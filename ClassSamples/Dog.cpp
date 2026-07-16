
#include "Dog.h"


Dog::Dog(string n, string b, int a) { name = n; breed = b; age = a; }
void Dog::setName(string n) { name = n; }
string Dog::getName() { return name; }
void Dog::setBreed(string b) { breed = b; }
void Dog::setAge(int a) { age = a; }
string Dog::getBreed() { return breed; }
int Dog::getAge() { return age; }
string Dog::getDog() {
    return name + " is a " + to_string(age) + "-year old " +
        breed + ".";
}