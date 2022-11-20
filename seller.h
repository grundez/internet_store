#pragma once
#include "lib.h"
#define MAX 100

class seller {
private:
	string seller_name;
	double seller_mark; //оценка продавца
public:
	seller(string name, char mark);
	seller();
	~seller();
	void input_seller();
	void output_seller();
};



