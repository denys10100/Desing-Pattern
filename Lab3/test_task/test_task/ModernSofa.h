#pragma once

#include "Sofa.h"
class ModernSofa: public Sofa
{

public:
	bool hasLegs() const  override
	{
		return false;
	}
};

