#pragma once

#include <string>
#include <iostream>
#include "Car.h"

class CarBuilder
{
private:
    Car* car;
public:
    CarBuilder()
    {
        car = new Car();
    }
    void setBodyType(std::string bodyType)
    {
        car->setBodyType(bodyType);
    }
    void setEngine(Engine* engine)
    {
        car->setEngine(engine);
    }
    void setTransmission(Transmission* transmission)
    {
        car->setTransmission(transmission);
    }
    void setWheels(Wheels* wheels)
    {
        car->setWheels(wheels);
    }
    void setTires(Tires* tires)
    {
        car->setTires(tires);
    }
    void setBodyColor(string bodyColor)
    {
        car->setBodyColor(bodyColor);
    }
    Car* getCar()
    {
        return car;
    }
};