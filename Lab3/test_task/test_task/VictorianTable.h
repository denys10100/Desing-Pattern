#pragma once

#include "Table.h"
class VictorianTable: public Table
{
public :
	bool hasLegs() const  override
	{
		return true;
	}
};

