#pragma once

#include "FurnitireFactory.h"
#include "ModernChair.h"
#include "ModernSofa.h"
#include "ModernTable.h"

class ModernFurnitureFactory
{
public:
	
	Chair* CreateChair() const
	{
		return new ModernChair();
	}
	Sofa* CreateSofa() const
	{
		return new ModernSofa();
	};
	Table* CreateTable() const
	{
		return new ModernTable();
	};

};

