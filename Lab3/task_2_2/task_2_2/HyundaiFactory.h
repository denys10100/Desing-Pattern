#pragma once

#include "MarkFacrory.h"

#include "HyundaiBus.h"
#include "HyundaiTram.h"
#include "HyundaiTrolleybus.h"
class HyundaiFactory : public MarkFactory
{
public:
    Bus* createBus() const override
    {
        return new HyundaiBus();
    }
    Tram* createTram() const override
    {
        return new HyundaiTram();
    }
    Trolleybus* createTrolleybus() const override
    {
        return new HyundaiTrolleybus();
    }
};