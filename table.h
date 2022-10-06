#pragma once
#include "lib.h"

struct table {
	customer customer;
	product product;
	seller seller;
	helper helper;
};

void set_table(table* table_main, const char* seller_name, const char* product_name, int count, const char* customer_fio, const char* helper_fio, int* table_i);
void table_input_seller(seller* seller_help_table, seller* seller_main);
void table_input_product(product* product_help_table, product* product_main);
void table_input_customer(customer* customer_help_table, customer* customer_main);
void table_input_helper(helper* helper_help_table, helper* helper_main);
void table_output(table table_output[], int number);

