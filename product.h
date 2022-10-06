#pragma once
#include "lib.h"
#define MAX 100

struct product {
	char name[MAX/2];
	double price;
	int count;
	int id; //артикул товара
};

void set_product(product* product_main, const char* name, double price, int count, int id, int* product_i);
void input_product(product* product, int product_i);
void output_product(product product[], int number);