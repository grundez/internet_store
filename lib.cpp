#include "lib.h"

int table_activity = 0;
#define chars_str_ban "!@#$%^&*()_+{}[];:,./\|123456789"
#define chars_int_ban "QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm"

int str_check(char str[]) {
	int f;
	f = 0;
	if (strpbrk(str, chars_str_ban) != 0) {
		f = 1;
		printf("\nЭто не строка!");
	}
	return f;
}

int int_check(char a[]) {
	int f, point=0;
	do {
		f = 0;
		if (strpbrk(a, chars_int_ban) != 0) {
			f = 1;
			
		}
		for (int i = 0; i < strlen(a); i++) {
			if (a[i] == '.' || a[i] == ',') {
				point++;
			}
		}
		if (point > 0) {
			f = 1;
			
		}
		if (f) {
			printf("\nЭто не целое!");
		}
	} while (f);
	return f;
}

int double_check(char a[]) {
	int f = 0, point = 0;
	do {
		if (strpbrk(a, chars_int_ban) != 0) {
			f = 1;

		}
		for (int i = 0; i < strlen(a); i++) {
			if (a[i] == '.' || a[i] == ',') {
				point++;
			}
		}
		if (point > 1) {
			f = 1;

		}
		if (f) {
			printf("\nЭто не дробное!");
		}
	} while (f);
	return f;
}



