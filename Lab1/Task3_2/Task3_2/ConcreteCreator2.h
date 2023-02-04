#pragma once
#include "Creator.h"
#include "Product2.h"

class ConcreteCreator2: public Creator
{

public:

	virtual Product& createProduct() const override
	{
		Product2 p;
		return p;

	}
};