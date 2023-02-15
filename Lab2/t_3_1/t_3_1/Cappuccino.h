#ifndef CAPPUCCINO_H
#define CAPPUCCINO_H

#include "Product.h"

class Cappuccino : public Product
{
private:
	float cost = 2.5;
	float price = 15;

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
