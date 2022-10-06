#include "table.h"
#include "lib.h"

void set_table(table* table_main, const char* seller_name, const char* product_name, int count, const char* customer_fio, const char* helper_fio, int *table_i ) {
	table table_help;
	strcpy(table_help.seller.name, seller_name);
	strcpy(table_help.product.name, product_name);
	table_help.product.count = count;
	strcpy(table_help.customer.fio, customer_fio);
	strcpy(table_help.helper.fio, helper_fio);
	*table_i+=1;
	*table_main = table_help;
	table_active = 4;
}


void table_input_seller(seller* seller_help_table, seller* seller_main) {
	strcpy(seller_help_table->name, seller_main->name);
}

void table_input_product(product* product_help_table, product* product_main) {
	strcpy(product_help_table->name, product_main->name);
	product_help_table->count = product_main->count;
}

void table_input_customer(customer* customer_help_table, customer* customer_main) {
	strcpy(customer_help_table->fio, customer_main->fio);
}

void table_input_helper(helper* helper_help_table, helper* helper_main) {
	strcpy(helper_help_table->fio, helper_main->fio);
}

void table_output(table table_output[], int number) {
	printf("<№><Продавец> <Товар> <Количество> <Покупатель> <Консультант>");
	for (int j = 0; j < number; j++) {
		printf("\n%2d%6s%11s%10d%15s%15s", j + 1, table_output[j].seller.name, table_output[j].product.name, table_output[j].product.count, table_output[j].customer.fio, table_output[j].helper.fio);
	}
}