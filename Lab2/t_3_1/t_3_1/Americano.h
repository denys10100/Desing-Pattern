#ifndef AMERICANO_H
#define AMERICANO_H

#include "Product.h"

class Americano : public Product
{
private:
	float cost = 1.0;
	float price = 7.0;

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
