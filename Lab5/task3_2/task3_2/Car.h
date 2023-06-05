#pragma once

#include "Component.h"
#include "Engine.h"
#include "Wheel.h"
#include "Transmission.h"

class Car
{
private:
    std::string bodyType;
    std::unordered_map<std::string, Component*> components;

public:
    Car(std::string bodyType) : bodyType(bodyType) {}

    void addComponent(const std::string& key, Component* component)
    {
        components[key] = component;
    }

    Component* getComponent(const std::string& key) const
    {
        if (components.count(key))
            return components.at(key)->clone();
        return nullptr;
    }

    void print() const
    {
        std::cout << "Car - Body Type: " << bodyType << std::endl;
        for (const auto& pair : components)
        {
            std::cout << "- ";
            pair.second->print();
        }
    }

    ~Car()
    {
        for (const auto& pair : components)
        {
            delete pair.second;
        }
    }
};
