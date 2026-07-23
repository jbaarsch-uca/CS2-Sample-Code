#pragma once
#include "Vehicle.h"
#include <iostream>
class Automobile :
    public Vehicle
{
private:
    const int numberOfWheels;
    std::string engine;
public:
    Automobile();
    Automobile(std::string engine, int passengerCapacity, double speed);
    int getNumberOfWheels();
    std::string getEngine();
    void setEngine(std::string engine);

    friend std::ostream& operator<<(std::ostream& strm, Automobile a);

};

