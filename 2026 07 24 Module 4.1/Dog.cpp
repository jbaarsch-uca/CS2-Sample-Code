#include "Dog.h"

Dog::Dog() : Dog("Spot", 3) {

}
Dog::Dog(std::string name, int age) {
	this->name = name;
	this->age = age;
}
int Dog::getAge() {
	return age;

}
std::string Dog::getName() {
	return name;
}
void Dog::setAge(int age) {
	this->age = age;
}
void Dog::setName(std::string name) {
	this->name = name;
}
std::string Dog::doTrick() {
	return name + " raises a paw to shake.";
}
