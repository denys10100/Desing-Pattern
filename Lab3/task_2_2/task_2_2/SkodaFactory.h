#pragma once

#include "MarkFacrory.h"

#include "SkodaBus.h"
#include "SkodaTram.h"
#include "SkodaTrolleybus.h"
class SkodaFactory: public MarkFactory
{
public:
    Bus* createBus() const override
    {
        return new SkodaBus();
    }
    Tram* createTram() const override
    {
        return new SkodaTram();
    }
    Trolleybus* createTrolleybus() const override
    {
        return new SkodaTrolleybus();
    }
};