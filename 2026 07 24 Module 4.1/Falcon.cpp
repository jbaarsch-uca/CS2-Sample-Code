#include "Falcon.h"

Falcon::Falcon() : Companion("Falcon") {

}

Falcon::Falcon(std::string name) : Companion(name) {
}

void Falcon::scoutArea() {
	std::cout << "flies overhead, scouting the area.";
}
void Falcon::performAction() {
	std::cout << getName() << " the falcon ";
	scoutArea();
	std::cout << std::endl;
}