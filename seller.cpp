#include "seller.h"


void set_seller(seller *seller_main, const char* name, double mark, int *seller_i) {
	seller seller_help;
	strcpy(seller_help.name, name);
	seller_help.mark = mark;
	*seller_main = seller_help;
	*seller_i+=1;
}

void input_seller(seller* seller_main, int seller_i) {
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

void output_seller(seller seller) {
	printf("\n %s		%.2lf", seller.name, seller.mark);
}