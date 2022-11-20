#pragma once
#include "lib.h"
#include "customer.h"
#include "product.h"
#include "seller.h"
#include "helper.h"

class record{
	
private:
	seller Seller;
	customer Customer;
	product Product;
	helper Helper;

public:
	record(customer Cus, helper Hel, seller Sel, product Pr);
	record();
	void record_input();
	void record_output();
};





