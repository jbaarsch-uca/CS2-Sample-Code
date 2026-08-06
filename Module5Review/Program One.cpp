// Name:  Jon Baarsch
// Class: CS2
// Term:  Summer, 2026
// Created: 8/6/2026 9:46:30 AM

#include <iostream>
#include "FloatingPointNumberException.h"
//#include "Vampire.h"
using namespace std;

int getAverage(int nums[], int size);



struct Human {
    int bloodUnits = 50;
    bool isBlessed = false;
    int getBloodUnits() {
        return bloodUnits;
    }
};

struct Werewolf {
    int furThickness = 5;
    int moonPower = 30;
    int getBloodUnits()  {
        return furThickness * moonPower;
    }
};

struct WoodenDummy {
    std::string woodType = "Pine";
    int getBloodUnits()  {
        return 0;
    }
};


class Vampire
{
private:
    int hp = 100;
    int bloodReservoir =0;
public:
    template <class T> void siphonBlood(T& prey);
    int getBloodReservoir() { return bloodReservoir;  }
    //	template <class FormType> FormType shapeshift();
    //	template <class ItemType> void corruptArtifact(ItemType& item);
};

template <class T> void Vampire::siphonBlood(T& prey) {
     
    if constexpr (requires { prey.bloodUnits; }) {
        if (!prey.isBlessed) {
            bloodReservoir += prey.bloodUnits;
            prey.bloodUnits = 0;
        }
        else
            std::cout << "This being of light and goodness cannot be consumed." << std::endl;
    }
    else if constexpr (requires { prey.furThickness; prey.moonPower; }) {
        bloodReservoir += (prey.furThickness * prey.moonPower);
        prey.moonPower = 0;
    }
    else if constexpr (requires { prey.woodType; }) {
        cout << "You bite into wood and break a tooth! (0 blood gained!)";
    }

}

int countCookies(double currentWeight, double targetWeight) {
    if (currentWeight <= targetWeight)
        return 1;
    return countCookies(currentWeight / 2.0, targetWeight)
        + countCookies(currentWeight / 2.0, targetWeight);
}

int main()
{

    double currentWeightOfDough = 317.3; // 158.65 -> 79.325 -> 39.6625
    double targetWeightOfCookie = 50;

    cout << countCookies(currentWeightOfDough, targetWeightOfCookie) 
        << " Cookies can be made." << endl;




    Vampire dracula;
    Human JoeSchmoe;
    Werewolf fuzzy;
    WoodenDummy scarecrow;
    dracula.siphonBlood<Human>(JoeSchmoe);

    cout << dracula.getBloodReservoir() << endl;

    dracula.siphonBlood<Werewolf>(fuzzy);

    cout << dracula.getBloodReservoir() << endl;

    dracula.siphonBlood<WoodenDummy>(scarecrow);

    cout << dracula.getBloodReservoir() << endl;

    int numbers[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int numbers2[8] = { 4, 4, 4, 4, 4, 4, 4, 4 };

    try {
        cout << getAverage(numbers2, 8) << endl;
        cout << getAverage(numbers, 10) << endl;
        cout << "Reached the end" << endl;
    }
    catch (FloatingPointNumberException e) {
        cout << e.getNumber() << " was the REAL average." << endl;
    }





}

int getAverage(int nums[], int size) {

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += nums[i];
    }
    int avg = sum / size;
    if (avg * size != sum)
        throw FloatingPointNumberException(static_cast<double>(sum) / size);
    return sum / size;

}
