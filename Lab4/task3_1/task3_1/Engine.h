#pragma once

#include <string>
class Engine {
public:
    void setPower(int power) {
        m_power = power;
    }

    void setDisplacement(double displacement) {
        m_displacement = displacement;
    }

    void setTorque(int torque) {
        m_torque = torque;
    }

    void setFuelType(std::string fuelType) {
        m_fuelType = fuelType;
    }

    void showDetails() {
        std::cout << "Engine details: power=" << m_power
                  << ", displacement=" << m_displacement
                  << ", torque=" << m_torque
                  << ", fuel type=" << m_fuelType << std::endl;
    }

private:
    int m_power;
    double m_displacement;
    int m_torque;
    std::string m_fuelType;
};
