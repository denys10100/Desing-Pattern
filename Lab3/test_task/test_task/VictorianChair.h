#pragma once
#include "Chair.h"

class VictorianChair: public Chair
{
public :
	bool hasLegs() const  override
	{
		return true;
	}
	bool sitOn() const  override
	{
		return true;
	}
};

