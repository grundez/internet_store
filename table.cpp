#include "table.h"
#include "lib.h"

table::table() {

}
table::~table() {

}

void table::set_table(const char* seller_name, const char* product_name, int count, const char* customer_fio, const char* helper_fio, int *table_i ) {
	(this+*table_i)->seller_tb.set_seller_name_table(seller_name);
	(this + *table_i)->product_tb.set_product_name_table(product_name);
	(this + *table_i)->product_tb.set_product_count_table(count);
	(this + *table_i)->customer_tb.set_customer_fio_table(customer_fio);
	(this + *table_i)->helper_tb.set_helper_fio_table(helper_fio);
	*table_i+=1;
}

void table::table_input(int customer_i, int seller_i, int product_i, int helper_i, int table_i, seller* seller_help_table, product* product_help_table, customer* customer_help_table, helper* helper_help_table) { //ДОДЕЛАТЬ ВЫВОД
	int number_customer, number_seller, number_product, number_helper;
	char* fio_customer, *name_seller, *fio_helper, *name_product, count_product;
	customer_help_table->output_customer(customer_i);
	printf("\n\nВведите номер покупателя: ");
	scanf("%d", &number_customer);

	seller_help_table->output_seller(seller_i);
	printf("\n\nВведите номер продавца: ");
	scanf("%d", &number_seller);

	product_help_table->output_product(product_i);
	printf("\n\nВведите номер продукта: ");
	scanf("%d", &number_seller);

	helper_help_table->output_helper(helper_i);
	printf("\n\nВведите номер консультанта: ");
	scanf("%d", &number_helper);

	fio_customer = customer_help_table->get_customer_fio();
	this[table_i].customer_tb.set_customer_fio_table(fio_customer);

	name_seller = seller_help_table->get_seller_name();
	this[table_i].seller_tb.set_seller_name_table(name_seller);

	fio_helper = helper_help_table->get_helper_fio();
	this[table_i].helper_tb.set_helper_fio_table(fio_helper);

	name_product = product_help_table->get_product_name();
	this[table_i].product_tb.set_product_name_table(name_product);

	count_product = product_help_table->get_product_count();
	this[table_i].product_tb.set_product_count_table(count_product);
}

/*void table::table_input_seller(table* table_main, seller* seller_help_table, seller* seller_main) {
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
	fio = helper_main->get_helper_fio();
	table_help.helper_tb.set_helper_table(fio);
	*table_main = table_help;
}*/

void table::table_output(int number) {
	printf("<№><Продавец> <Товар> <Количество> <Покупатель> <Консультант>");
	for (int j = 0; j < number; j++) {
		printf("\n%2d%6s%11s%10d%15s%15s", j + 1, this[j].seller_tb.get_seller_name(), this[j].product_tb.get_product_name(), this[j].product_tb.get_product_count(), this[j].customer_tb.get_customer_fio(), this[j].helper_tb.get_helper_fio());
	}
}



