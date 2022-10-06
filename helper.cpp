#include "helper.h"

void set_helper(helper *helper_main, char const* fio, int help_count, int *helper_i){
	helper helper_help;
	strcpy(helper_help.fio, fio);
	helper_help.help_count = help_count;
	*helper_main = helper_help;
	*helper_i+=1;
}

void input_helper(helper* helper_main, int helper_i) {
	helper helper_help;
	
	printf("\nВведите имя консультанта: ");
	scanf("%s", helper_help.fio);
	printf("Его количество ответов: ");
	scanf("%d", &helper_help.help_count);

	*helper_main = helper_help;
}

void output_helper(helper helper) {
	printf("\n %s\t\t%d", helper.fio, helper.help_count);
}