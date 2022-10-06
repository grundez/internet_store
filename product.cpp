#include "product.h"
#include "lib.h"
#define MAX 100

void set_product(product* product_main, const char* name, double price, int count, int id, int* product_i) {
	product product_help;
	strcpy(product_help.name, name);
	product_help.price = price;
	product_help.count = count;
	product_help.id = id;
	*product_main = product_help;
	*product_i += 1;
}

void input_product(product* product, int product_i) {
	char name[MAX];
	double price;
	int count;
	int id;
	printf("\n��� ��������� ������� ESC");

	printf("\n������� �������� ������: ");
	scanf("%s", name); strcpy(product->name, name);

	printf("������� ���� ������: ");
	scanf("%lf", &price); product->price = price;

	printf("������� ���������� ������: ");
	scanf("%d", &count); product->count = count;

	printf("������� ������� ������: ");
	scanf("%d", &id); product->id = id;
}


void output_product(product product[], int number) {
	printf("<�><�������� ������><���� ������><���������� ������><������� ������>");
	for (int j = 0; j < number; j++) {
		printf("\n%3d%12s%15.2lf%15d%15d", j + 1, product[j].name, product[j].price, product[j].count, product[j].id);
	}
	
}