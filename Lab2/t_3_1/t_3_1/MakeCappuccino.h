#ifndef MAKECAPPUCCINO_H
#define MAKECAPPUCCINO_H

#include "MakeProduct.h"
#include "Cappuccino.h"

class MakeCappuccino : public MakeProduct
{
public:
	virtual  Product* prepareProduct() override
	{
		return  new Cappuccino();
	}
};

#endif
