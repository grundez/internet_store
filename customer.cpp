#include "customer.h"
#include "lib.h"

customer::customer(int id, string name) {
	customer_id = id;
	customer_fio = name;
}
customer::customer() {
	customer_id = 0;
	customer_fio = "����������";
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




