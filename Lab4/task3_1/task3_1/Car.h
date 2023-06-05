#pragma once

#include <string>
#include "Engine.h"
#include "Transmission.h"
#include "Wheels.h"
#include "Tires.h"


class Car
{
public:
    void setBodyType(const std::string& bodyType)
    {
        m_bodyType = bodyType;
    }
    void setEngine(Engine* engine)
    {
        m_engine = engine;
    }
    void setTransmission(Transmission* transmission)
    {
        m_transmission = transmission;
    }
    void setWheels(Wheels* wheels)
    {
        for (int i = 0; i < 4; ++i)
        {
            m_wheels[i] = wheels[i];
        }
    }
    void setColor(const std::string& color)
    {
        m_color = color;
    }
    void print() const
    {
        std::cout << "Car Specifications:\n";
        std::cout << "Body Type: " << m_bodyType << "\n";
        std::cout << "Engine: " << m_engine->getPower() << " HP, " << m_engine->getDisplacement() << " cc, " << m_engine->getTorque() << " Nm, " << m_engine->getFuelType() << "\n";
        std::cout << "Transmission: " << m_transmission->getType() << ", " << m_transmission->getNumGears() << " gears\n";
        std::cout << "Wheels: " << m_wheels[0]->getMaterial() << ", " << m_wheels[0]->getDiameter() << " inches\n";
        std::cout << "Color: " << m_color << "\n";
    }
private:
    std::string m_bodyType;
    Engine* m_engine;
    Transmission* m_transmission;
    Wheels* m_wheels[4];
    std::string m_color;
};