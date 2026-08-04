#include "Companion.h"

Companion::Companion() : Companion("") {

}
Companion::Companion(std::string name) {
	this->name = name;
}
std::string Companion::getName() {
	return name;
}
void Companion::setName(std::string name) {
	this->name = name;
}
void Companion::performAction() {
	std::cout << "Companion Action";
}