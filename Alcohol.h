#pragma once
#include "Liquid.h"
class Alcohol final :
    public Liquid
{
    std::string strenght;
public:
    Alcohol();
    Alcohol(std::string n, int d, std::string s);
    void Display() override;
};

