#pragma once
#include "lib.h"
#define MAX 100

class helper{

private:
	char fio[MAX];
	int help_count;

public:
	helper();
	~helper();
	void set_helper(helper* helper_main, char const* fio, int help_count, int* helper_i);
	void input_helper(helper* helper_main, int helper_i);
	void output_helper(helper helper[], int number);

	char* get_helper();
	void set_helper_table(const char* fio);
};

