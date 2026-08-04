#include "Wolf.h"

Wolf:: Wolf() : Companion("Wolf") {
	packName = "Columbia Basin Pack";
}
Wolf::Wolf(std::string name) : Companion(name) {
	packName = "Columbia Basin Pack";
}

Wolf::Wolf(std::string name, std::string packName) 
	: Companion(name), packName(packName) {
}
void Wolf::performAction() {
	std::cout << getName() <<
		" the Wolf lets out a howl for the "
		<< packName
		<< " and bites!";
	std::cout << std::endl;
}
