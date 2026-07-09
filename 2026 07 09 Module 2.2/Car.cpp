#include "Car.h"

Car::Car() {
	tires = "Goodyear";
	color = "Black";
	gas = 3.54;
}
Car::Car(string t, string c, double g)  {
	tires = t;
	color = c;
	gas = g;
}

string Car::getTires() {
	return tires;
}

string Car::getColor() {
	return color;
}
double Car::getGas() {
	return gas;
}
void Car::setTires(string tires) {
	Car::tires = tires;
}
void Car::setColor(string c) {
	color = c;
}
void Car::setGas(double g) {
	gas = g;
}

string Car::honkHorn(int times) {
	string result;
	for (int i = 0; i < times; i++) {
		result += "Honk!  ";
	}
	return result;
}
double Car::getValue() {
	return PRICE_OF_GAS * gas;
}