// Name:  Jon Baarsch
// Class: CS2
// Term:  Summer, 2026
// Created: 7/13/2026 9:37:34 AM

#include <iostream>
#include "Die.h"
using namespace std;


int main()
{
    Die myDie;

    Die dice[3] = {
        Die(4), 
        {10, 3},

    };


    cout << dice[1].getNumSides() << endl;
    cout << dice[1].getFaceValue() << endl;

    //myDie.generateRandomNumber();

}


