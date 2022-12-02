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

product& record::get_product() {
	return this->Product;
}
customer& record::get_customer() {
	return this->Customer;
}
helper& record::get_helper() {
	return this->Helper;
}
seller& record::get_seller() {
	return this->Seller;
}

int* record::get_productcount(){
	return &this->Product.product_count;
}

float record::get_summ_product_price() {
	return (Product.product_count * Product.product_price);
}

record record::operator+(const record& C) {
	this->Product.product_price += C.Product.product_price;
	return *this;
}

