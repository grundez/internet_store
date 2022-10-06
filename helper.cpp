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

void output_helper(helper helper[], int number) {
	printf("<№><Консультант><Количество ответов>");
	for (int j = 0; j < number; j++) {
		printf("\n%3d%6s%7d", number + 1, helper[number].fio, helper[number].help_count);
	}
}