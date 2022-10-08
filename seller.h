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
	void set_seller(const char* name, double mark, int* seller_i);
	void input_seller(int seller_i);
	void output_seller(int number);
	char* get_seller();
	void set_seller_table(const char* name);
};



