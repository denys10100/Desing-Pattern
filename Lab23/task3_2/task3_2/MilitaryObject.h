#pragma once
#include "Spy.h"

class MilitaryObject
{
public:
    virtual void accept(Spy& spy) = 0;
};