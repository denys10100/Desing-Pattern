#pragma once
#include "Sofa.h"
class VictorianSofa: public Sofa
{
public:

	bool hasLegs() const  override
	{
		return true;
	}
};

