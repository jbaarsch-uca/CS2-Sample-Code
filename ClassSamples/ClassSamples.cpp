
#include <iostream>
#include "Dog.h"
#include "MathHelper.h"

int main()
{

    cout << Dog::getSpecies() << endl;
    string myDogBreed = "Chihuahua mix";
    string yourDogBreed = "German Shephard";

    Dog myDog("Spenser", &myDogBreed, 3);
    Dog yourDog("Spenser", &yourDogBreed, 5);

    yourDog.setName("Fido");

    //cout << myDog.getName() << endl;     // will print out: Spenser
    //cout << yourDog.getName() << endl;

   // cout << myDog.getSpecies() << endl;
    yourDog.setSpecies("Felis catus");
    // cout << myDog.getSpecies() << endl;
    int size = 13;
    int* nums = new int[13];
    for (int i = 0; i < size; i++)
        nums[i] = i * 3;

    cout << myDog << endl;
    cout << yourDog << endl;

    yourDog = myDog;
    Dog herDog = myDog;
    cout << endl;
    cout << myDog << endl;
    cout << yourDog << endl;

    yourDog.setName("Fido");

    cout << endl;
    cout << myDog << endl;
    cout << yourDog << endl;

    myDog.setBreed(&yourDogBreed);

    cout << endl;
    cout << myDog << endl;
    cout << yourDog << endl;


    /*
    MathHelper::getMean(nums, size);
    MathHelper myTutor;
    myTutor.getMean(nums, size);
    */
}
