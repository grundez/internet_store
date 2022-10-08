#include "customer.h"
#include "lib.h"

customer::customer() {
}
customer::~customer() {
}

void customer::set_customer(const char* fio, int *customer_i) {
	strcpy((this+*customer_i)->fio, fio);
	(this + *customer_i)->id = *customer_i+1;
	*customer_i += 1;
}

void customer::input_customer(int customer_i) {
	char fio[MAX];
	int f;
	do {
		f = 0;
		printf("\nВведите ФИО покупателя: ");
		scanf("%s", fio);
		f = str_check(fio);
	} while (f == 1);
	strcpy((this+customer_i)->fio, fio);
	(this + customer_i)->id = customer_i + 1;
}

void customer::output_customer(int number) {
	printf("\n\n<id> <ФИО>");
	for (int j = 0; j < number; j++) {
		printf("\n%2d%7s", (this+j)->id, (this + j)->fio);
	}
}

char* customer::get_customer_fio() {
	return this->fio;
}
void customer::set_customer_fio_table(const char* fio) {
	strcpy(this->fio, fio);
}



