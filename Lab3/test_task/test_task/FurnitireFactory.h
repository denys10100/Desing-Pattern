#pragma once

#include "Chair.h"
#include "Sofa.h"
#include "Table.h"

class FurnitureFactory
{
public:
	virtual Chair* CreateChair() const = 0;
	virtual Sofa* CreateSofa() const = 0;
	virtual Table* CreateTable() const = 0;
};