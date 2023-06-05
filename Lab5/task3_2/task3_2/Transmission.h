#pragma once
#include "Component.h"

class Transmission : public Component
{
private:
    std::string type;
    int numberOfGears;

public:
    Transmission(std::string type, int numberOfGears)
        : type(type), numberOfGears(numberOfGears)
    {
    }

    Component* clone() const override
    {
        return new Transmission(*this);
    }

    void print() const override
    {
        std::cout << "Transmission - Type: " << type << ", Number of Gears: " << numberOfGears << std::endl;
    }
};