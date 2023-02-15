#ifndef MAKELATTE_H
#define MAKELATTE_H

#include "MakeProduct.h"
#include "Latte.h"

class MakeLatte : public MakeProduct 
{
public:
	virtual  Product* prepareProduct() override
	{
		return  new Latte();
	}
};

#endif
