#pragma once
#include <string>
#include <iostream>

class Wheels
{
public:
    void setRimMaterial(std::string material)
    {
        m_rimMaterial = material;
    }

    void setRimDiameter(int diameter)
    {
        m_rimDiameter = diameter;
    }

    void showDetails()
    {
        std::cout << "Wheel details: rim material=" << m_rimMaterial
            << ", rim diameter=" << m_rimDiameter << std::endl;
    }

private:
    std::string m_rimMaterial;
    int m_rimDiameter;
};