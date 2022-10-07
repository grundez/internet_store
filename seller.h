#pragma once
#include "lib.h"
#define MAX 100

class seller {
private:
	char name[MAX / 2];
	double mark; //оценка продавца
public:
	seller();
	~seller();
	void set_seller(seller* seller_main, const char* name, double mark, int* seller_i);
	void input_seller(seller* seller, int seller_i);
	void output_seller(seller seller[], int number);
	char* get_seller();
	void set_seller_table(const char* name);
};



