#ifndef ACCOUNTING_H
#define ACCOUNTING_H

#include "Date.h"

class Accounting
{


public:
	virtual float earnings(Date date) = 0;

	virtual float expenses(Date date) = 0;
};

#endif
