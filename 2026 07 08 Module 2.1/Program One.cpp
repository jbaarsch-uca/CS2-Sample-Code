// Name:  Jon Baarsch
// Class: CS2
// Term:  Summer, 2026

#include <iostream>
#include "Rectangle.h"
#include "Car.h"
using namespace std;


int main()
{

    // Easy Random Function:
    // 1.  Seed the random generator.  JUST DO THIS ONCE:
    srand(time(0));
    // 2.  Generate a random number
    int max = 6;
    int min = 1;
    rand() % (max - min + 1) + min;


    Car myCar;

    myCar.setTires("Bridgestone");
    myCar.setColor("Grey");
    myCar.setGas(13.5);

    cout << myCar.getTires() << endl;
    cout << myCar.honkHorn(7) << endl;
    cout << "$" << myCar.getValue() << endl;

    Rectangle myRectangle;
    myRectangle.setLength( 50);
    myRectangle.setWidth(100);

    std::cout << myRectangle.getLength() << endl;

    Rectangle yourRectangle;
    yourRectangle.setLength(150);
    yourRectangle.setWidth(1000);

    cout << yourRectangle.getLength() << endl;

    cout << myRectangle.getArea() << endl;


}

