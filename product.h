#pragma once
#include "lib.h"
#define MAX 100

class product {
private:
	char name[MAX/2];
	double price;
	int count;
	int id; //������� ������

public:
	product();
	~product();
	void set_product(const char* name, double price, int count, int id, int* product_i);
	void input_product(int product_i);
	void output_product(int number);

	int get_product_count();
	void set_product_count_table(int count);

	char* get_product_name();
	void set_product_name_table(const char* name);
};

