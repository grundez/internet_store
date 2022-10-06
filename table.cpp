#include "table.h"
#include "lib.h"

void table_input_seller(seller* seller_help_table, seller* seller_main) {
	strcpy(seller_help_table->name, seller_main->name);
}

void table_input_product(product* product_help_table, product* product_main) {
	strcpy(product_help_table->name, product_main->name);
}

void table_input_customer(customer* customer_help_table, customer* customer_main) {
	strcpy(customer_help_table->fio, customer_main->fio);
}

void table_input_helper(helper* helper_help_table, helper* helper_main) {
	strcpy(helper_help_table->fio, helper_main->fio);
}

void table_output(table table_output[], int number) {
	printf("<№><Продавец> <Товар> <Покупатель> <Консультант>");
	for (int j = 0; j < number; j++) {
		printf("\n%3d%6s%5s%5s%7s", number + 1, table_output[number].seller.name, table_output[number].product.name, table_output[number].customer.fio, table_output[number].helper.fio);
	}
}