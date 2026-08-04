#include "Adventurer.h"


Adventurer::Adventurer() : Adventurer("Link", nullptr) {
	
}
Adventurer::Adventurer(std::string name, Companion* companion) {
	this->name = name;
	this->companion = companion;
}
std::string Adventurer::getName() {
	return name;
}
Companion* Adventurer::getCompanion() {
	return companion;
}
void Adventurer::setName(std::string name) {
	this->name = name;
}
void Adventurer::setCompanion(Companion* companion) {
	this->companion = companion;
}
void Adventurer::explore() {
	std::cout << getName()
		<< " commands their companion: ";
	companion->performAction();
	std::cout << std::endl;
}