#pragma once

#include <string>

class Coffee
{
public:
    virtual ~Coffee() {}
    virtual std::string getType() = 0;
    virtual double getPrice() = 0;
};