#include "helper.h"

helper::helper(string name, int count) {
	helper_fio = name;
	help_count = count;
}
helper::helper() {
	helper_fio = "��������0";
	help_count = 0;
}

helper::~helper() {
}


void helper::input_helper() {
	
	printf("\n������� ��� ������������: ");
	getline(cin, helper_fio);
	printf("��� ���������� �������: ");
	cin >> help_count;
	while (getchar() != '\n');
}

void helper::output_helper() {
	printf("\n<�����������><���������� �������>");
	cout <<"\n"<< helper_fio << "\t" << help_count << endl;
}
