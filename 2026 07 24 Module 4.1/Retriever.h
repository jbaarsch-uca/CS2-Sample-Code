#pragma once
#include "HuntingDog.h"
class Retriever :
    public HuntingDog
{


public:
    std::string doTrick() {
        return HuntingDog::doTrick() + ": Object fetched";
    }
};

