#pragma once

#include <iostream>
#include <string>
#include <unordered_map>

class Component
{
public:
    virtual Component* clone() const = 0;
    virtual void print() const = 0;
    virtual ~Component() {}
};