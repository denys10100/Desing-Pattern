#pragma once

#include "Coffee.h"


class Americano : public Coffee
{
public:
    std::string getType() override
    {
        return "Americano";
    }

    double getPrice() override
    {
        return 1.5;
    }
};