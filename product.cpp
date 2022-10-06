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

void output_product(product product) {
	printf("\n	%s\t\t|\t%.2lf\t|\t%d\t\t|\t%d", product.name, product.price, product.count, product.id);
}