#pragma once
#include "Companion.h"

class Wolf :
    public Companion
{
private:
    std::string packName;
public:
    Wolf();
    Wolf(std::string name);
    Wolf(std::string name, std::string packName);
    void performAction() override;

};

