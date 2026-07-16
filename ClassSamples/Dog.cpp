
#include "Dog.h"

string Dog::species = "Canis lupus familiaris";

Dog::Dog() : Dog("Nameless", nullptr, 0) {}

Dog::Dog(string n, string* b, int a) {
    name = n; breed = b; age = a;
}

Dog::Dog(const Dog& otherDog) {
    name = otherDog.name;
    age = otherDog.age;
    string newPtr = *(otherDog.breed);
    breed = &newPtr;

}
void Dog::setName(string n) { name = n; }
string Dog::getName() { return name; }
void Dog::setBreed(string* b) { breed = b; }
void Dog::setAge(int a) { age = a; }
string* Dog::getBreed() { return breed; }
int Dog::getAge() { return age; }
string Dog::getDog() {
    return name + " is a " + to_string(age) + "-year old " +
        *breed + ".";
}
string Dog::getSpecies() {
        return species;
    }
void Dog::setSpecies(string s) {
    species = s;
    }

ostream& operator<< (ostream& o, Dog& thisDog) {
    o << thisDog.name + " is a " + to_string(thisDog.age) + "-year old " +
        *(thisDog.breed) + ".";
    return o;
}

