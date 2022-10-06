#include "customer.h"
#include "lib.h"

int customers_i1 = 0;

void set_customer(customer *customer_main, const char* fio, int *customer_i) {
	
	customer customer_help;
	strcpy(customer_help.fio, fio);
	customer_help.id = *customer_i+1;
	*customer_main = customer_help;
	*customer_i += 1;
}

void input_customer(customer* customer, int customers_i) {
	char fio[MAX];
	printf("\nВведите ФИО покупателя: ");
	scanf("%s", fio);
	strcpy(customer->fio, fio);
	customer->id = customers_i + 1;
}

void output_customer(customer customer) {
	printf("\n%d     |     %s", customer.id, customer.fio);
}



