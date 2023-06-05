#pragma once
#include "CarBuilder.h"

class TransmissionBuilder : public CarBuilder
{
private:
    Transmission* m_transmission;
public:
    TransmissionBuilder()
    {
        m_transmission = new Transmission();
    }
    void setType(const std::string& type) override
    {
        m_transmission->setType(type);
    }
    void setGears(int gears) override
    {
        m_transmission->setGears(gears);
    }
    Transmission* getResult() override
    {
        return m_transmission;
    }
};
