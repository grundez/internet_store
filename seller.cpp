#include "seller.h"


seller::seller(string name, char mark) {
	seller_name = name;
	seller_mark = mark;
}
seller::seller() {
	seller_name = "Продавец0";
	seller_mark = 0;
}
seller::~seller(){
}


void seller::input_seller() {
	printf("\nВведите название бренда, имя продавца или компанию: ");
	getline(cin, seller_name);
	printf("Введите оценку работы продавца: ");
	cin >> seller_mark;
	while (getchar() != '\n');
}

void seller::output_seller() {
	printf("\n<Продавец><Оценка>");
	cout << "\n" << seller_name << "\t" << seller_mark << endl;
}



