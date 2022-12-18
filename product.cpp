#include "product.h"
#include "lib.h"
#define MAX 100

int product::product_counter = 0;

product::product(string name, float price, int count, int id) {
	product_name = name;
	product_price = price;
	product_count = count;
	product_id = id;
	product_counter++;
}
product::product(){
	product_name = "�����0";
	product_price = 0;
	product_count = 0;
	product_id = 0000;
	product_counter++;
}

product::~product() {
}


void product::input_product() {
	int price;
	printf("\n������� �������� ������: ");
	getline(cin, product_name);
	printf("������� ���� ������: ");
	cin >> price;
	while (getchar() != '\n');
	try {
		if (price > 50000000 || price < 1) throw price;
		product_price = price;
	}
	catch(const int) {
		cout << "����������� ����������� ���� ������" << endl;
	}
	printf("������� ���������� ������: ");
	cin >> product_count;
	while (getchar() != '\n');
	printf("������� ������� ������: ");
	cin >> product_id;
	while (getchar() != '\n');
}


void product::output_product() {
	cout <<"\n<�������� ������><���� ������><���������� ������><������� ������>";
	cout << "\n" << product_name << "\t\t" << product_price << "\t\t" << product_count << "\t\t" << product_id << endl;
}

product& product::operator++(int) {
	this->product_price += 1000;
	return *this;
}

void product::compare_product(product& C) {
	if (this->product_price > C.product_price) {
		cout << this->product_name << " ������";
	}
	else if (this->product_price < C.product_price) {
		cout << this->product_name << " �������";
	}
	else {
		cout << "\n������ ��������� �� ����" << endl;
	}
}

int product::get_count(){
	return product_counter;
}

void product::print()
{
	cout << endl << "id ������������ �������� : " << product_id;
}
