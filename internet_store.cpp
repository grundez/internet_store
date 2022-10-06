#include "lib.h"
#include <iostream>
#include "table.h"

int main()
{
	setlocale(LC_ALL, "Russian"); 
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int i = 0, customer_i = 0, product_i = 0, seller_i = 0, helper_i = 0;
	do {
		table table_output;
		customer customer[MAX];
		product product[MAX];
		seller seller[MAX];
		helper helper[MAX];
		do {
			system("cls"); 
			printf("\t1  Ввести новые данные\n");
			printf("\t2  Вывод списка\n");
			printf("\n\tДля выхода нажмите ESC\n");
			switch (_getch()) {
			case '1': {
				system("cls"); 
				printf("\tВвод данных\n\n");
				printf("\t1  Ввести продавца\n");
				printf("\t2  Ввести покупателя\n");
				printf("\t3  Ввести товар\n");
				printf("\t4  Ввести консультанта\n");
				printf("\t5 Ввести таблицу учета");
				printf("\tESC  выход\n");
				switch (_getch()) {
				case '1': { 
					system("cls");
					//set_seller(&seller[seller_i], "b", 4.5, &seller_i); конструктор
					do {
						input_seller(&seller[seller_i], seller_i);
						seller_i++;
						printf("\nПродолжить - любая кнопка, выйти - ESC\n");
					} while (_getch()!=27);
					break;
				}
				case '2': { 
					system("cls");
					//set_customer(&customer[customer_i], "abs", &customer_i); конструктор
					do {
						input_customer(&customer[customer_i], customer_i);
						customer_i++;
						printf("\nПродолжить - любая кнопка, выйти - ESC\n");
					} while (_getch() != 27);
					break;
				}
				case '3': { 
					system("cls");
					//set_product(&product[product_i], "bbbbbb", 535532, 2, 1313131, &product_i);
					do { 
						input_product(&product[product_i], product_i); 
						product_i++;
						printf("\nПродолжить - любая кнопка, выйти - ESC\n");
					} while (_getch() != 27);
					break;
				}
				case '4': { 
					system("cls");
					//set_helper(&helper[helper_i], "xxxxxx", 5, &helper_i);
					do {
						input_helper(&helper[helper_i], helper_i);
						helper_i++;
						printf("\nПродолжить - любая кнопка, выйти - ESC\n");
					} while (_getch() != 27);
					break;
				}
				case 27:
					break;
				default:
					printf("\nОшибка ввода\n");
					_getch();
					break;
				}
				break;
			}
			case '2': {
				system("cls"); 
				printf("\tВывод данных\n\n");
				printf("\t1  Вывести продавца\n");
				printf("\t2  Вывести покупателя\n");
				printf("\t3  Вывести товар\n");
				printf("\t4  Вывести консультанта\n");
				printf("\tESC  выход\n");
				
				switch (_getch()) {
				case '1': { 
					system("cls");
					printf("<Продавец>  <Оценка>");
					for (int j = 0; j < seller_i; j++) {
						output_seller(seller[j]);
					}
					break;
				}
				case '2': { 
					system("cls");
					printf("<id>    <ФИО>");
					for (int j = 0; j < customer_i; j++) {
						output_customer(customer[j]);
					}
					break;
				}
				case '3': { 
					system("cls");
					printf("<Название товара>  <Цена товара>  <Количество товара>  <Артикул товара>");
					for (int j = 0; j < product_i; j++) {
						output_product(product[j]);
					}
					break;
				}
				case '4': {
					system("cls");
					printf("<Консультант>  <Количество ответов>");
					for (int j = 0; j < helper_i; j++) {
						output_helper(helper[j]);
					}
					break;
				}
				case 27: 
					break;
				default:
					printf("\nОшибка ввода\n");
					_getch();
					break;
				}
				
			}
			case 27: //Выход
				break;
			}
			break;
		} while (_getch()!=27);
		system("cls");
		printf("Для выхода - ESC\nПродолжить - любая кнопка \n");
	} while (_getch() != 27);
	system("pause");
	return 0;
}



