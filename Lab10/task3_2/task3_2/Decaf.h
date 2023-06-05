#pragma once
#include "Decaf.h"

class Decaf : public Beverage
{
public:
    std::string description() override
    {
        return "Decaf Coffee";
    }

    double cost() override
    {
        return 1.05;
    }
};