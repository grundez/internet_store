#pragma once
#include "lib.h"
#define MAX 100


class customer {

private:
	char fio[MAX/2];
	int id;

public:
	customer();
	~customer();
	void set_customer(customer* customer, const char* fio, int* customer_i);
	void input_customer(customer* customer, int customers_i);
	void output_customer(customer customer[], int number);

	char* get_customer_fio();
	void set_customer_fio_table(const char* fio);
};

