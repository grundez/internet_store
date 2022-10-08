#include "seller.h"


seller::seller(){}
seller::~seller(){};

void seller::set_seller(const char* name, double mark, int *seller_i) {
	strcpy((this+*seller_i)->name, name);
	(this + *seller_i)->mark = mark;
	*seller_i+=1;
}

void seller::input_seller(int seller_i) {
	char name[MAX];
	double mark;
	printf("\nВведите название бренда, имя продавца или компанию: ");
	scanf("%s", name);
	printf("Введите оценку работы продавца: ");
	scanf("%lf", &mark);
	strcpy((this + seller_i)->name, name);
	(this + seller_i)->mark = mark;
}

void seller::output_seller(int number) {
	printf("\n\n<№><Продавец><Оценка>");
	for (int j = 0; j < number; j++) {
		printf("\n%2d%10s%10.2lf", j+1, (this+j)->name, (this + j)->mark);
	}
}

char* seller::get_seller_name() {
	return this->name;
}

void seller::set_seller_name_table(const char* name) {
	strcpy(this->name, name);
}


