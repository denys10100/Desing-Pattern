#include <iostream>

#include "Product1.h"
#include "Product2.h"
#include "ConcreteCreator1.h"
#include "ConcreteCreator2.h"


int main()
{
	ConcreteCreator1 c;
	c.createProduct();
	return 0;
}