#pragma once
#include "lib.h"
#define MAX 100

class product {
	friend class record;
protected:
	string product_name;
	float product_price;
	int product_count;
	int product_id; //артикул товара

public:
	static int product_counter;
	product(string name, float price, int count, int id);
	product();
	~product();
	void input_product();
	void output_product();
	product& operator++(int);
	void compare_product(product& C);
	static int get_count();
	string get_product_name();

	virtual void print();


};

