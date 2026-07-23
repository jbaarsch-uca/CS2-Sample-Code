#pragma once
#include <iostream>
class Vehicle
{
private:
	const int passengerCapacity;
	double speed;
public:
	Vehicle();
	Vehicle(int passengerCapacity, double speed);
	double getSpeed();
	int getPassengerCapacity();
	void setSpeed(double speed);
	
	friend std::ostream& operator<<(std::ostream& strm, Vehicle v);

};

