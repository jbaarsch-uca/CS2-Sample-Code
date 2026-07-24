#pragma once
#include "Dog.h"
class LapDog :
    public Dog
{
private:
public:
    LapDog();
    LapDog(std::string name, int age);
   virtual  std::string doTrick();

};

