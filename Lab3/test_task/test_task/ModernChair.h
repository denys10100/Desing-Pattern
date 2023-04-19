#pragma once
#include "Chair.h"


class ModernChair : public Chair
{

public:
	bool hasLegs() const override
	{
		return true;
	}
	bool sitOn() const override
	{
		return true;
	}
};

