#ifndef MAKEAMERICANO_H
#define MAKEAMERICANO_H

#include "MakeProduct.h"
#include "Americano.h"

class MakeAmericano : public MakeProduct
{
public:
	virtual  Product* prepareProduct() override
	{
		return  new Americano();
	}
};

#endif
