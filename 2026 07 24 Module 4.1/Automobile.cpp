#include "Automobile.h"
#include <string>

Automobile::Automobile() : Automobile("V4", 2, 0) {

}
Automobile::Automobile(std::string engine, int passengerCapacity,
	double speed) : Vehicle(passengerCapacity, speed), numberOfWheels(4)
{
	this->engine = engine;
	std::cout << "Constructing Automobile...." << std::endl;
}
int Automobile::getNumberOfWheels() {
	return numberOfWheels;
}
std::string Automobile::getEngine() {
	return engine;
}
void Automobile::setEngine(std::string engine) {
	this->engine = engine;
}

std::ostream& operator<<(std::ostream& strm, Automobile a) {
	strm << (Vehicle)a
		<< "\nwith " << std::to_string(a.numberOfWheels) << " wheels"
		<< "\npowered by a " << a.engine << " engine.";
	return strm;
}
