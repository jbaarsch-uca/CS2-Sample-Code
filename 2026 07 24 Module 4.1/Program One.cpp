// Name:  Jon Baarsch
// Class: CS2
// Term:  Summer, 2026
// Created: 7/23/2026 11:37:51 AM

#include <iostream>
#include "Vehicle.h"
#include "Automobile.h"
#include "Car.h"
#include "Hatchback.h"
#include "HondaFit.h"
using namespace std;

int main()
{
    Automobile myCar;
    Automobile yourCar("V8", 5, 120);

    cout << myCar << endl;
    cout << yourCar << endl;
    cout << "\n\n\n";
    cout << "Passengers MY car can carry: "
        << myCar.getPassengerCapacity() << endl;
    cout << "Passengers YOUR car can carry: "
        << yourCar.getPassengerCapacity() << endl;

    cout << "\n\n\n";

    HondaFit myExesCar;
    //cout << myExesCar << endl;

}
