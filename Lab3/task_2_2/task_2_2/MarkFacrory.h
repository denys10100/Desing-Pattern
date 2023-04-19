#pragma once


#include "Bus.h"
#include "Tram.h"
#include "Trolleybus.h"
class MarkFactory
{
	virtual Bus* createBus() const = 0;
	virtual Tram* createTram() const = 0;
	virtual Trolleybus* createTrolleybus() const = 0;

};