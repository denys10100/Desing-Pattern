#pragma once

#include "Table.h"
class ModernTable: public Table
{

public:
	bool hasLegs() const  override
	{
		return false;
	}
};

