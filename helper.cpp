#include "helper.h"

helper::helper() {
}

helper::~helper() {
}

void helper::set_helper(char const* fio, int help_count, int *helper_i){
	strcpy((this+*helper_i)->fio, fio);
	(this + *helper_i)->help_count = help_count;
	*helper_i+=1;
}

void helper::input_helper(int helper_i) {
	char fio[MAX];
	int help_count;
	printf("\nВведите имя консультанта: ");
	scanf("%s", &fio);
	printf("Его количество ответов: ");
	scanf("%d", &help_count);
	strcpy((this+helper_i)->fio, fio);
	(this+helper_i)->help_count = help_count;
}

void helper::output_helper(int number) {
	printf("\n\n<№><Консультант><Количество ответов>");
	for (int j = 0; j < number; j++) {
		printf("\n%2d%10s%12d", j + 1, (this+j)->fio, (this+j)->help_count);
	}
}

char* helper::get_helper_fio() {
	return this->fio;
}
void helper::set_helper_fio_table(const char* fio) {
	strcpy(this->fio, fio);
}