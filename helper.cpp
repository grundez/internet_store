#include "helper.h"

helper::helper(string name, int count) {
	helper_fio = name;
	help_count = count;
}
helper::helper() {
	helper_fio = "Помощник0";
	help_count = 0;
}

helper::~helper() {
}


void helper::input_helper() {
	
	printf("\nВведите имя консультанта: ");
	getline(cin, helper_fio);
	printf("Его количество ответов: ");
	cin >> help_count;
	while (getchar() != '\n');
}

void helper::output_helper() {
	printf("\n<Консультант><Количество ответов>");
	cout <<"\n"<< helper_fio << "\t" << help_count << endl;
}
