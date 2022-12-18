#pragma once
#include "lib.h"
#include "customer.h"
#include "product.h"
#include "seller.h"
#include "helper.h"
#include "product_more_info.h"

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
	product& get_product();
	customer& get_customer();
	helper& get_helper();
	seller& get_seller();
	
	int* get_productcount();
	float get_summ_product_price();

	int operator+();
	record operator+(const record& C);
};





