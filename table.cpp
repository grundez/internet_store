#include "table.h"
#include "lib.h"


void table::set_table(table* table_main, const char* seller_name, const char* product_name, int count, const char* customer_fio, const char* helper_fio, int *table_i ) {
	table table_help;
	
	table_help.seller_tb.set_seller_table(seller_name);
	table_help.product_tb.set_product_name_table(product_name);
	table_help.product_tb.set_product_count_table(count);
	table_help.customer_tb.set_customer_fio_table(customer_fio);
	table_help.helper_tb.set_helper_table(helper_fio);
	
	*table_i+=1;
	*table_main = table_help;
}

void table::table_input_seller(table* table_main, seller* seller_help_table, seller* seller_main) {
	table table_help;
	const char* name;
	name = seller_main->get_seller();
	table_help.seller_tb.set_seller_table(name);
	*table_main = table_help;
}

void table::table_input_product(table* table_main, product* product_help_table, product* product_main) {
	table table_help;
	const char* name;
	int count;
	name = product_main->get_product_name();
	table_help.product_tb.set_product_name_table(name);
	count = product_main->get_product_count();
	table_help.product_tb.set_product_count_table(count);
	*table_main = table_help;
}

void table::table_input_customer(table* table_main, customer* customer_help_table, customer* customer_main) {
	table table_help;
	const char* fio;
	fio = customer_main->get_customer_fio();
	table_help.customer_tb.set_customer_fio_table(fio);
	*table_main = table_help;
}

void table::table_input_helper(table* table_main, helper* helper_help_table, helper* helper_main) {
	table table_help;
	const char* fio;
	fio = helper_main->get_helper();
	table_help.helper_tb.set_helper_table(fio);
	*table_main = table_help;
}

void table::table_output(table table_output[], int number) {
	*table_output = table_help;
	printf("<№><Продавец> <Товар> <Количество> <Покупатель> <Консультант>");
	for (int j = 0; j < number; j++) {
		printf("\n%2d%6s%11s%10d%15s%15s", j + 1, table_output[j].seller_tb.name, table_output[j].product_tb.name, table_output[j].product_tb.count, table_output[j].customer_tb.fio, table_output[j].helper_tb.fio);
	}
}



