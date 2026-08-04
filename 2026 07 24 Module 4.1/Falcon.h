#pragma once
#include "Companion.h"
class Falcon :
    public Companion
{
public:
    Falcon();
    Falcon(std::string name);
    void scoutArea();
    void performAction() override;
};

