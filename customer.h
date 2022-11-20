#pragma once
#include "lib.h"
#define MAX 100


class customer {

private:
	string customer_fio;
	int customer_id;

public:
	customer(int id, string name);
	customer();
	~customer();
	
	void input_customer();
	void output_customer();
};

