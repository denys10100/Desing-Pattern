#pragma once

#include "MarkFacrory.h"

#include "VolvoBus.h"
#include "VolvoTram.h"
#include "VolvoTrolleybus.h"
class VolvoFactory: public MarkFactory
{
public:
    Bus* createBus() const override
    {
        return new VolvoBus();
    }
    Tram* createTram() const override
    {
        return new VolvoTram();
    }
    Trolleybus* createTrolleybus() const override
    {
        return new VolvoTrolleybus();
    }
};