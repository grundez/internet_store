#include "product_more_info.h"
#include "lib.h"

product_more_info::product_more_info(string name, float price, int count, int id, string d, string m, string y, float w) {
	product_name = name;
	product_price = price;
	product_count = count;
	product_id = id;
	day = d;
	month = m;
	year = y;
	weight = w;
	data = d + "." + m + "." + y;
}

product_more_info::product_more_info(int id, string d, string m, string y, float w) {
	product_name = "Товар0";
	product_price = 0;
	product_count = 0;
	product_id = 0000;
	day = d;
	month = m;
	year = y;
	weight = w;
	data = d + "." + m + "." + y;
}

product_more_info::product_more_info() {
	product_name = "Товар0";
	product_price = 0;
	product_count = 0;
	product_id = 0000;
	day = "00";
	month = "00";
	year = "0000";
	weight = 0;
	data = "00.00.0000";
}
product_more_info::~product_more_info() {

}

string product_more_info::get_data() {
	return data;
}

product_more_info product_more_info::operator=(const product& objProduct) {
	product::operator=(objProduct);
	this->data = "00.00.0000";
	this->weight = 0;
	return *this;
}

float product_more_info::get_weight() {
	return weight;
}

void product_more_info::print()
{ cout << endl << "id производного продукта : " << product_id; }


