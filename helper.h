#pragma once
#include "lib.h"

struct helper{
	char fio[MAX];
	int help_count;
};

void set_helper(helper* helper_main, char const* fio, int help_count, int* helper_i);
void input_helper(helper* helper_main, int helper_i);
void output_helper(helper helper);