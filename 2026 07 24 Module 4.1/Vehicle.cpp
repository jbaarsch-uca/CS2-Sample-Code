#include "Vehicle.h"
#include <string>

Vehicle::Vehicle() : Vehicle(1, 0) {

}
Vehicle::Vehicle(int passCap, double speed) 
	: passengerCapacity(passCap) {
	this->speed = speed;
	std::cout << "Constructing Vehicle...." << std::endl;
}
double Vehicle::getSpeed() {
	return speed;
}
int Vehicle::getPassengerCapacity() {
	return passengerCapacity;
}
void Vehicle::setSpeed(double speed) {
	this->speed = speed;
}

std::ostream& operator<<(std::ostream& strm, Vehicle v) {
	strm << "A " << std::to_string(v.passengerCapacity)
		<< "-person Vehicle "
		<< "moving " << std::to_string(v.speed) << "kmph.";
	return strm;
}