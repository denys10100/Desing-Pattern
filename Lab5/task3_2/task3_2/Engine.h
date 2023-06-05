#pragma once
#include "Component.h"

class Engine : public Component
{
private:
    std::string type;
    int power;
    double displacement;
    std::string fuelType;

public:
    Engine(std::string type, int power, double displacement, std::string fuelType)
        : type(type), power(power), displacement(displacement), fuelType(fuelType)
    {
    }

    Component* clone() const override
    {
        return new Engine(*this);
    }

    void print() const override
    {
        std::cout << "Engine - Type: " << type << ", Power: " << power
            << "HP, Displacement: " << displacement << "L, Fuel Type: " << fuelType << std::endl;
    }
};