#pragma once
#include "lib.h"
#define MAX 100

class product {
private:
	string product_name;
	float product_price;
	int product_count;
	int product_id; //артикул товара

public:
	product(string name, float price, int count, int id);
	product();
	~product();
	void input_product();
	void output_product();
};

