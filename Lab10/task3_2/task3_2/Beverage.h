#pragma once

class Beverage
{
public:
    virtual std::string description() = 0;
    virtual double cost() = 0;
};