#include "lib.h"
#include <iostream>
#include "table.h"

int table_active = 0;

int main()
{
	setlocale(LC_ALL, "Russian"); 
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int i = 0, customer_i = 0, product_i = 0, seller_i = 0, helper_i = 0, table_i=0, number_seller, number_product, number_customer, number_helper;
	do {
		table table[MAX];
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
				printf("\t5  Ввести таблицу учета\n");
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
					table_active += 1;
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
					table_active += 1;
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
					table_active += 1;
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
					table_active += 1;
					break;
				}
				case '5': {
					system("cls");
					if (table_active == 4) {
						do {
							output_seller(seller, seller_i);
							printf("\n\nВведите номер продавца: ");
							scanf("%d", &number_seller);
							table_input_seller(&table[table_i].seller, &seller[number_seller-1]);

							output_product(product, product_i);
							printf("\n\nВведите номер товара: ");
							scanf("%d", &number_product);
							table_input_product(&table[table_i].product, &product[number_product-1]);

							output_customer(customer, customer_i);
							printf("\n\nВведите номер покупателя: ");
							scanf("%d", &number_customer);
							table_input_customer(&table[table_i].customer, &customer[number_customer-1]);

							output_helper(helper, helper_i);
							printf("\n\nВведите номер консультанта: ");
							scanf("%d", &number_helper);
							table_input_helper(&table[table_i].helper, &helper[number_helper-1]);

							table_i++;
							printf("\nПродолжить - любая кнопка, выйти - ESC\n");
						} while (_getch() != 27);
					}
					else {
						printf("\nВведите все таблицы!");
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
				break;
			}
			case '2': {			//ВЫВОД ДАННЫХ
				system("cls"); 
				printf("\tВывод данных\n\n");
				printf("\t1  Вывести продавца\n");
				printf("\t2  Вывести покупателя\n");
				printf("\t3  Вывести товар\n");
				printf("\t4  Вывести консультанта\n");
				printf("\t5  Вывести таблицу\n");
				printf("\tESC  выход\n");
				
				switch (_getch()) {
				case '1': { 
					system("cls");
					output_seller(seller, seller_i);
					break;
				}
				case '2': { 
					system("cls");
					output_customer(customer, customer_i);
					break;
				}
				case '3': { 
					system("cls");
					output_product(product, product_i);
					break;
				}
				case '4': {
					system("cls");
					output_helper(helper, helper_i);
					break;
				}
				case '5': {
					system("cls");			//ВЫВОД ТАБЛИЦЫ
					if (table_active == 0)
					{
						printf("\nВведите все таблицы!");
					}
					else {
						table_output(table, table_i);
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
			
		} while (_getch()!=27);
		system("cls");
		printf("Для выхода - ESC\nПродолжить - любая кнопка \n");
	} while (_getch() != 27);
	system("pause");
	return 0;
}



