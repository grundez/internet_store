#include "customer.h"
#include "lib.h"

int customer::customers_counter = 0;

customer::customer(int id, string name) {
	customer_id = id;
	customer_fio = name;
	customers_counter++;
}
customer::customer() {
	customer_id = 0;
	customer_fio = "����������";
	customers_counter++;
}
customer::~customer() {
}

void customer::input_customer() {
	printf("������� id ����������: ");
	cin >> customer_id;
	while (getchar() != '\n');
	printf("������� ��� ����������: ");
	getline(cin, customer_fio);
}

void customer::output_customer() {
	printf("\n<id> <���>");
	cout << "\n" << customer_id << ' ' << customer_fio << endl;
}

int customer::get_count() {
	return customers_counter;
}








