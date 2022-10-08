#pragma once
#include "lib.h"
#include "customer.h"
#include "product.h"
#include "seller.h"
#include "helper.h"

class table: public seller, public customer, public product, public helper{
	
public:
	seller seller_tb;
	customer customer_tb;
	product product_tb;
	helper helper_tb;

public:
	void set_table(const char* seller_name, const char* product_name, int count, const char* customer_fio, const char* helper_fio, int* table_i);
	void table_input(int customer_i, int seller_i, int product_i, int helper_i, int table_i, seller* seller_help_table, product* product_help_table, customer* customer_help_table, helper* helper_help_table);
	void table_input_seller(table* table_main, seller* seller_help_table, seller* seller_main);
	void table_input_product(table* table_main, product* product_help_table, product* product_main);
	void table_input_customer(table* table_main, customer* customer_help_table, customer* customer_main);
	void table_input_helper(table* table_main, helper* helper_help_table, helper* helper_main);
	void table_output(int number);

	table();
	~table();
};





