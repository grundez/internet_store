#include "product.h"
#include "lib.h"
#define MAX 100

product::product(string name, float price, int count, int id) {
	product_name = name;
	product_price = price;
	product_count = count;
	product_id = id;
}
product::product(){
	product_name = "�����0";
	product_price = 0;
	product_count = 0;
	product_id = 0000;
}

product::~product() {
}


void product::input_product() {
	printf("\n������� �������� ������: ");
	getline(cin, product_name);
	printf("������� ���� ������: ");
	cin >> product_price;
	while (getchar() != '\n');
	printf("������� ���������� ������: ");
	cin >> product_count;
	while (getchar() != '\n');
	printf("������� ������� ������: ");
	cin >> product_id;
	while (getchar() != '\n');
}


void product::output_product() {
	printf("\n<�������� ������><���� ������><���������� ������><������� ������>");
	cout << "\n" << product_name << "\t\t" << product_price << "\t\t" << product_count << "\t\t" << product_id << endl;
}

