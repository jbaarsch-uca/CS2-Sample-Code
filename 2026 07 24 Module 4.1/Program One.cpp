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
#include "Dog.h";
#include "HuntingDog.h"
#include "LapDog.h"
using namespace std;

int main()
{

    Dog* loyalPup = new Dog;
    HuntingDog* athleticPup = new HuntingDog;
    LapDog* littlePup = new LapDog;

    cout << loyalPup->doTrick() << endl;
    cout << athleticPup->doTrick() << endl;
    cout << littlePup->doTrick() << endl << endl;

    Dog* kennel[3];
    kennel[0] = new Dog;
    kennel[1] = new HuntingDog;
    kennel[2] = new LapDog;

    for (int i = 0; i < 3; i++)
        cout << kennel[i]->doTrick() << endl;

    cout << loyalPup->doTrick() << endl;
    cout << athleticPup->doTrick() << endl;
    cout << littlePup->doTrick() << endl << endl;




    /*
    Automobile myCar;
    
    Automobile yourCar("V8", 5, 120);

    cout << myCar << endl << endl;
    cout << yourCar << endl;
    cout << "\n\n\n";
    /*
    cout << "Passengers MY car can carry: "
        << myCar.getPassengerCapacity() << endl;
    cout << "Passengers YOUR car can carry: "
        << yourCar.getPassengerCapacity() << endl;
        */
    
    cout << "\n\n\n";
    
    //HondaFit myExesCar;
    //cout << myExesCar << endl;

}
