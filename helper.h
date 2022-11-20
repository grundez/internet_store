#pragma once
#include "lib.h"
#define MAX 100

class helper{

private:
	string helper_fio;
	int help_count;

public:
	helper(string name, int help_count);
	helper();
	~helper();
	
	void input_helper();
	void output_helper();
};

