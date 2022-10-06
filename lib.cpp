#include "lib.h"

#define chars_str_ban "!@#$%^&*()_+{}[];:,./\|123456789"
#define chars_int_ban "QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm"

int str_check(char* str) {
	int f = 0;
	
	do {
		if (strpbrk(str, chars_str_ban) != 0) {
			f = 1;
			
		}
		if (f) {
			printf("Неверный ввод");
		}
	} while (f);
	return f;
}

int int_check(char* a) {
	int f = 0, point=0;
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
			printf("Неверный ввод");
		}
	} while (f);
	return f;
}



