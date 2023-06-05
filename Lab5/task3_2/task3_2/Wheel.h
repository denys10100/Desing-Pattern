#pragma once
#include "Component.h"

class Wheel : public Component
{
private:
    std::string material;
    double diameter;

public:
    Wheel(std::string material, double diameter)
        : material(material), diameter(diameter)
    {
    }

    Component* clone() const override
    {
        return new Wheel(*this);
    }

    void print() const override
    {
        std::cout << "Wheel - Material: " << material << ", Diameter: " << diameter << " inches" << std::endl;
    }
};