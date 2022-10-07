#include "product.h"
#include "lib.h"
#define MAX 100

product::product(){
}
product::~product() {
};

void product::set_product(product* product_main, const char* name, double price, int count, int id, int* product_i) {
	product product_help;
	strcpy(product_help.name, name);
	product_help.price = price;
	product_help.count = count;
	product_help.id = id;
	*product_main = product_help;
	*product_i += 1;
}

void product::input_product(product* product, int product_i) {
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


void product::output_product(product product[], int number) {
	printf("\n\n<№><Название товара><Цена товара><Количество товара><Артикул товара>");
	for (int j = 0; j < number; j++) {
		printf("\n%3d%12s%15.2lf%15d%15d", j + 1, product[j].name, product[j].price, product[j].count, product[j].id);
	}
}

int product::get_product_count() {
	return this->count;
}

void product::set_product_count_table(int count) {
	this->count = count;
}

char* product::get_product_name() {
	return this->name;
}

void product::set_product_name_table(const char* name) {
	strcpy(this->name, name);
}