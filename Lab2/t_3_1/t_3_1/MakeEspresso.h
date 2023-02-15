#ifndef MAKEESPRESSO_H
#define MAKEESPRESSO_H

#include "MakeProduct.h"
#include "Espresso.h"

class MakeEspresso : public MakeProduct
{
public:
	virtual  Product* prepareProduct() override
	{
		return  new Espresso();
	}
};

#endif