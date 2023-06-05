#pragma once

#include "CarBuilder.h"

class EngineBuilder : public CarPartBuilder
{
public:
    EngineBuilder()
    {
        part = new Engine();
    }

    void setPower(double power) override
    {
        part->setPower(power);
    }

    void setDisplacement(double displacement) override
    {
        part->setDisplacement(displacement);
    }

    void setTorque(double torque) override
    {
        part->setTorque(torque);
    }

    void setFuelType(const std::string& fuelType) override
    {
        part->setFuelType(fuelType);
    }
};