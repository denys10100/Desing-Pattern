#ifndef LATTE_H
#define LATTE_H

#include "Product.h"

class Latte : public Product
{
private:
	float cost = 1.5;
	float price = 10;

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
