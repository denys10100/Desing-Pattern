#ifndef ESPRESSO_H
#define ESPRESSO_H

#include "Product.h"

class Espresso : public Product
{

private:
	float cost = 2.0;
	float price = 13;

public:
	virtual float getCost() override
	{
		return cost;
	}
	virtual float getShopPrice() override
	{
		return price;
	}
};

#endif
