#pragma once
#include "lib.h"
#include "product.h"

class product_more_info: product {
protected:
	string day;
	string month;
	string year;
	string data;
	float weight;
public:
	product_more_info(string name, float price, int count, int id, string d, string m, string y, float w);
	product_more_info(int id, string d, string m, string y, float w);
	product_more_info();
	~product_more_info();

	string get_data();
	float get_weight();
	product_more_info operator=(const product&);

	void print();
};
