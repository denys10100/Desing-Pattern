#pragma once

#include "CarBuilder.h"
#include "EngineBuilder.h"
#include "TransmissionBuilder.h"
#include "WheelBuilder.h"

class Director
{
private:
    CarBuilder* builder;

public:
    void setBuilder(CarBuilder* newBuilder)
    {
        builder = newBuilder;
    }

    Car* getCar()
    {
        return builder->getCar();
    }

    void constructSportsCar()
    {
        builder->createNewCar();
        builder->setBodyType("coupe");
        builder->setEngine(new V8EngineBuilder());
        builder->setTransmission(new AutomaticTransmissionBuilder());
        builder->setWheels(new AlloyWheelBuilder());
        builder->setTires(new PerformanceTireBuilder());
        builder->setBodyColor("red");
    }

    void constructSUV()
    {
        builder->createNewCar();
        builder->setBodyType("SUV");
        builder->setEngine(new V6EngineBuilder());
        builder->setTransmission(new ManualTransmissionBuilder());
        builder->setWheels(new SteelWheelBuilder());
        builder->setTires(new AllTerrainTireBuilder());
        builder->setBodyColor("black");
    }
};
