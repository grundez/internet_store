#pragma once
#include "lib.h"
#define MAX 100


class customer {
	friend class record;
private:
	string customer_fio;
	int customer_id;
	static int customers_counter;
public:
	customer(int id, string name);
	customer();
	~customer();
	
	void input_customer();
	void output_customer();
	static int get_count();
};



