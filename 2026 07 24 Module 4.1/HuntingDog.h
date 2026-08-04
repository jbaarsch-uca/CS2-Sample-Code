#pragma once
#include "Dog.h"
class HuntingDog:
    public Dog
{
private:
    //Dog* innerDog = new Dog;
public:
    HuntingDog();
    HuntingDog(std::string name, int age);
    ~HuntingDog() {
        
    }
    std::string doTrick();
};

