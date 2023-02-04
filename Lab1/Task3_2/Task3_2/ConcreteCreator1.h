#pragma once

#include "Creator.h"
#include "Product1.h"

class ConcreteCreator1 : public Creator
{

public:
	virtual Product& createProduct() const override
	{
		Product1 p;
		return p;

	}
};