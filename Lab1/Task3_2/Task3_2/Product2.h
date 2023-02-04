#pragma once

#include "Product.h"

class Product2: public Product 
{
public :

	virtual void doSomething() override
	{
		std::cout << "doSomething\n";

	}
};