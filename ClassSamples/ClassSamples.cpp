
#include <iostream>
#include "Dog.h"

int main()
{
    Dog myDog("Spenser", "Chihuahua mix", 3);
    Dog yourDog("Spenser", "German Shephard", 5);

    yourDog.setName("Fido");

    cout << myDog.getName();     // will print out: Spenser
}

