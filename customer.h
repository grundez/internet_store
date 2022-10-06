#pragma once
#include "lib.h"
#define MAX 100

struct customer {
	char fio[MAX/2];
	int id;
};

void set_customer(customer* customer, const char* fio, int *customer_i);

void input_customer(customer* customer, int customers_i);
void output_customer(customer customer);
