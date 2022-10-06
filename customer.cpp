#include "customer.h"
#include "lib.h"

void set_customer(customer *customer_main, const char* fio, int *customer_i) {
	
	customer customer_help;
	strcpy(customer_help.fio, fio);
	customer_help.id = *customer_i+1;
	*customer_main = customer_help;
	*customer_i += 1;
}

void input_customer(customer* customer, int customers_i) {
	char fio[MAX];
	int f;
	do {
		f = 0;
		printf("\nВведите ФИО покупателя: ");
		scanf("%s", fio);
		f = str_check(fio);
	} while (f == 1);
	
	strcpy(customer->fio, fio);
	customer->id = customers_i + 1;
}

void output_customer(customer customer[], int number) {
	printf("<id> <ФИО>");
	for (int j = 0; j < number; j++) {
		printf("\n%2d%10s", customer[j].id, customer[j].fio);
	}
}



