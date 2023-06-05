#pragma once

#include <string>

class Transmission
{
public:
    void setType(std::string type)
    {
        m_type = type;
    }

    void setGears(int gears)
    {
        m_gears = gears;
    }

    void showDetails()
    {
        std::cout << "Transmission details: type=" << m_type
            << ", gears=" << m_gears << std::endl;
    }

private:
    std::string m_type;
    int m_gears;
};