#ifndef PRODUCT_H
#define PRODUCT_H

//TODO: We can add protected setter 
// for some class Account
//TODO: Also create set component with class
class Product
{


public:
	virtual float getCost() = 0;

	virtual float getShopPrice() = 0;
};

#endif
