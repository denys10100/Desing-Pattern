#ifndef COFFEESHOP_H
#define COFFEESHOP_H

#include <vector>

#include "Date.h"
#include "Product.h"
#include "MakeProduct.h"
#include "MakeEspresso.h"
#include "MakeLatte.h"
#include "MakeCappuccino.h"
#include "MakeAmericano.h"

//struct InfoRoduct
//{
//	Date date;
//	Product product;
//};

class CoffeeShop
{

private:

	std::vector<Date, Product> productList;
	std::vector<Date, Product> salesLict;

public:
	virtual void makeProducts(Product product, Date date, int count = 1);

	virtual void sellProduct(Product product, Date date);
};

#endif