#pragma once
#include "lib.h"
#define MAX 100

struct seller {
	char name[MAX / 2];
	double mark; //оценка продавца
};

void set_seller(seller* seller_main, const char* name, double mark, int* seller_i);
void input_seller(seller* seller, int seller_i);
void output_seller(seller seller);