#include "lib.h"
#include <iostream>
#include "table.h"



int main()
{
	setlocale(LC_ALL, "Russian"); 
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int i = 0, customer_i = 0, product_i = 0, seller_i = 0, helper_i = 0, table_i=0, number_seller, number_product, number_customer, number_helper, f;
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
			//table->set_table("nike", "air monarch", 2, "Matvey", "-", &table_i);
			//seller->set_seller("b", 4.5, &seller_i);
			//customer->set_customer("abs", &customer_i);
			//product->set_product("bbbbbb", 535532, 2, 1313131, &product_i);
			//helper->set_helper("xxxxxx", 5, &helper_i);
			switch (_getch()) {
			case '1': {
				system("cls"); 
				printf("\t\tВвод данных\n\n");
				printf("\t1  Ввести продавца\n");
				printf("\t2  Ввести покупателя\n");
				printf("\t3  Ввести товар\n");
				printf("\t4  Ввести консультанта\n");
				printf("\t5  Ввести таблицу учета\n");
				printf("\n\tESC  выход\n");
				switch (_getch()) {
				case '1': { 
					system("cls");
					do {
						seller->input_seller(seller_i);
						seller_i++;
						printf("\nПродолжить - любая кнопка, выйти - ESC\n");
					} while (_getch()!=27);
					
					break;
				}
				case '2': { 
					system("cls");
					do {
						customer->input_customer(customer_i);
						customer_i++;
						printf("\nПродолжить - любая кнопка, выйти - ESC\n");
					} while (_getch() != 27);
					
					break;
				}
				case '3': { 
					system("cls");
					do { 
						product->input_product(product_i); 
						product_i++;
						printf("\nПродолжить - любая кнопка, выйти - ESC\n");
					} while (_getch() != 27);
					
					break;
				}
				case '4': { 
					system("cls");
					do {
						helper->input_helper(helper_i);
						helper_i++;
						printf("\nПродолжить - любая кнопка, выйти - ESC\n");
					} while (_getch() != 27);
					
					break;
				}
				case '5': {
					system("cls");

					do {
						table->table_input(customer_i, seller_i, product_i, helper_i, table_i, seller, product, customer, helper);
						
						/*seller->output_seller(seller_i);
						printf("\n\nВведите номер продавца: ");
						do {
							f = 0;
							scanf("%d", &number_seller);
							if (number_seller > seller_i || number_seller < 1)
							{
								f = 1;
							}
						} while (f == 1);
						table->table_input_seller(&table[table_i], &table[table_i].seller_tb, &seller[number_seller - 1]);

						customer->output_customer(customer_i);
						printf("\n\nВведите номер покупателя: ");
						do {
							f = 0;
							scanf("%d", &number_customer);
							if (number_customer > customer_i || number_customer < 1)
							{
								f = 1;
							}
						} while (f == 1);
						table->table_input_customer(&table[table_i], &table[table_i].customer_tb, &customer[number_customer - 1]);

						product->output_product(product_i);
						printf("\n\nВведите номер товара: ");
						do {
							f = 0;
							scanf("%d", &number_product);
							if (number_product > product_i || number_product < 1)
							{
								f = 1;
							}
						} while (f == 1);
						table->table_input_product(&table[table_i], &table[table_i].product_tb, &product[number_product - 1]);

						helper->output_helper(helper_i);
						printf("\n\nВведите номер консультанта: ");
						do {
							f = 0;
							scanf("%d", &number_helper);
							if (number_helper > helper_i || number_helper < 1)
							{
								f = 1;
							}
						} while (f == 1);
						table->table_input_helper(&table[table_i], &table[table_i].helper_tb, &helper[number_helper - 1]);*/

						table_i++;
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
			case '2': {			//ВЫВОД ДАННЫХ
				system("cls"); 
				printf("\t\tВывод данных\n\n");
				printf("\t1  Вывести продавца\n");
				printf("\t2  Вывести покупателя\n");
				printf("\t3  Вывести товар\n");
				printf("\t4  Вывести консультанта\n");
				printf("\t5  Вывести таблицу\n");
				printf("\n\tESC  выход\n");
				
				switch (_getch()) {
				case '1': { 
					system("cls");
					seller->output_seller(seller_i);
					break;
				}
				case '2': { 
					system("cls");
					customer->output_customer(customer_i);
					break;
				}
				case '3': { 
					system("cls");
					product->output_product(product_i);
					break;
				}
				case '4': {
					system("cls");
					helper->output_helper(helper_i);
					break;
				}
				case '5': {
					system("cls");			//ВЫВОД ТАБЛИЦЫ
					table->table_output(table_i);
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



