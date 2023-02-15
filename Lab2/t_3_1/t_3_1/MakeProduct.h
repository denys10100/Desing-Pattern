#ifndef MAKEPRODUCT_H
#define MAKEPRODUCT_H

#include "Product.h"

class MakeProduct
{
public:
	virtual Product* prepareProduct() = 0;
};

#endif
