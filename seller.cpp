#include "seller.h"


seller::seller(string name, char mark) {
	seller_name = name;
	seller_mark = mark;
}
seller::seller() {
	seller_name = "��������0";
	seller_mark = 0;
}
seller::~seller(){
}


void seller::input_seller() {
	printf("\n������� �������� ������, ��� �������� ��� ��������: ");
	getline(cin, seller_name);
	printf("������� ������ ������ ��������: ");
	cin >> seller_mark;
	while (getchar() != '\n');
}

void seller::output_seller() {
	printf("\n<��������><������>");
	cout << "\n" << seller_name << "\t" << seller_mark << endl;
}



