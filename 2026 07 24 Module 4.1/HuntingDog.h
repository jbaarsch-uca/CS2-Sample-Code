#pragma once
#include "Dog.h"
class HuntingDog :
    public Dog
{
private:
public:
    HuntingDog();
    HuntingDog(std::string name, int age);
    virtual std::string doTrick();
};

