#pragma once

#include "CarBuilder.h"
#include "Wheels.h"
class WheelBuilder : public CarBuilder
{
private:
    Wheel* wheel;

public:
    WheelBuilder()
    {
        wheel = new Wheel();
    }

    void buildRim(Material material)
    {
        wheel->setRimMaterial(material);
    }

    void buildDiameter(int diameter)
    {
        wheel->setDiameter(diameter);
    }

    Wheel* getResult()
    {
        return wheel;
    }
};