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
	printf("\nДля остановки нажмите ESC");

	printf("\nВведите название товара: ");
	scanf("%s", name); strcpy(product->name, name);

	printf("Введите цену товара: ");
	scanf("%lf", &price); product->price = price;

	printf("Введите количество товара: ");
	scanf("%d", &count); product->count = count;

	printf("Введите артикул товара: ");
	scanf("%d", &id); product->id = id;
}


void output_product(product product[], int number) {
	printf("<№><Название товара><Цена товара><Количество товара><Артикул товара>");
	for (int j = 0; j < number; j++) {
		printf("\n3%d%7s%5.2lf%10d%7d", number + 1, product[number].name, product[number].price, product[number].count, product[number].id);
	}
	
}