#include "table.h"
#include "lib.h"

record::record(customer Cus, helper Hel, seller Sel, product Pr) {
	Customer = Cus;
	Helper = Hel;
	Seller = Sel;
	Product = Pr;
}

record::record() {
	customer cus;
	helper hel;
	product pr;
	seller sel;
	Customer = cus;
	Helper = hel;
	Product = pr;
	Seller = sel;
}


void record::record_input() {
	Customer.input_customer();
	Seller.input_seller();
	Helper.input_helper();
	Product.input_product();
}



void record::record_output() {
	Customer.output_customer();
	Seller.output_seller();
	Helper.output_helper();
	Product.output_product();
}



