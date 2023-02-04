#pragma once

#include "Product.h"

class Creator
{

public:

	void someOperation()
	{
		Product& p = createProduct();
		p.doSomething();
	}

	virtual Product& createProduct() const = 0;
	
};