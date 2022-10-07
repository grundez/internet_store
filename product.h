#pragma once
#include "lib.h"
#define MAX 100

class product {
private:
	char name[MAX/2];
	double price;
	int count;
	int id; //артикул товара

public:
	product();
	~product();
	void set_product(product* product_main, const char* name, double price, int count, int id, int* product_i);
	void input_product(product* product, int product_i);
	void output_product(product product[], int number);

	int get_product_count();
	void set_product_count_table(int count);

	char* get_product_name();
	void set_product_name_table(const char* name);
};

