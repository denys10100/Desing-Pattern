#pragma once

#include "Product.h"

class Product1: public Product
{
public:

	virtual void doSomething() override
	{
		std::cout << "doSomething\n";
	}

};