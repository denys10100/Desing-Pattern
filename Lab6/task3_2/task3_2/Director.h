#pragma once
#include <iostream>
#include <string>


class Director
{
private:
    std::string name;
    static Director* instance;

    Director(const std::string& name) : name(name)
    {
        
    }

public:
    static Director& getInstance(const std::string& name)
    {
        if (!instance)
        {
            instance = new Director(name);
        }
        return *instance;
    }

    void buildCar()
    {
        
        std::cout << "Building a car by " << name << std::endl;
    }
};

Director* Director::instance = nullptr;