#include "seller.h"


seller::seller(){}
seller::~seller(){};

void seller::set_seller(seller *seller_main, const char* name, double mark, int *seller_i) {
	seller seller_help;
	strcpy(seller_help.name, name);
	seller_help.mark = mark;
	*seller_main = seller_help;
	*seller_i+=1;
}

void seller::input_seller(seller* seller_main, int seller_i) {
	seller seller_help;
	
	printf("\n������� �������� ������, ��� �������� ��� ��������: ");
	scanf("%s", seller_help.name);
	printf("������� ������ ������ ��������: ");
	scanf("%lf", &seller_help.mark);
	*seller_main = seller_help;
	
	
	/*printf("\n������� �������� ������, ��� �������� ��� ��������: ");
	scanf("%s",name);
	printf("������� ������ ������ ��������: ");					//�������������� ������ ���������� �������
	scanf("%lf", &mark);
	strcpy(seller->name, name);
	seller->mark = mark;*/
}

void seller::output_seller(seller seller[], int number) {
	printf("\n\n<�><��������><������>");
	for (int j = 0; j < number; j++) {
		printf("\n%2d%7s%10.2lf", j+1, seller[j].name, seller[j].mark);
	}
}

char* seller::get_seller() {
	return this->name;
}

void seller::set_seller_table(const char* name) {
	strcpy(this->name, name);
}


