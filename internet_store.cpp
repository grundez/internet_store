#include "lib.h"
#include <iostream>
#include "table.h"

int main()
{
    int count;
    record record1, * records[5];
    customer Customer(23, "ПетровАБ");
    helper Helper("Помощник1", 1);
    seller Seller("Продавец1", 1);
    product Product("Продукт1", 111, 1, 1111);
    record record3(Customer, Helper, Seller, Product);

    cout << "Вывод сделок, созданных конструкторами:\n" << endl;
    record1.record_output();
    cout << endl;
    record3.record_output();
    cout << endl;
    cout << "\nВведите размер массива объектов: ";
    cin >> count;
    record* arrRecord = new record[count]; //динамический массив объектов класса record.
    for (int i = 0; i < count; i++) {
        (arrRecord + i)->record_input();
        puts("");
        (arrRecord + i)->record_output();
        cout << "\n" << endl;
    }
    delete[] arrRecord;
    record* Record = new record;
    *Record = record1;
    cout << "\nСделка 1:" << endl;
    record1.record_output();
    cout << endl;
    cout << "\nКопия сделки 1 с помощью new:" << endl;
    (*Record).record_output();
    cout << endl;
    cout << endl;
    delete Record;

    records[0] = &record1;
    records[1] = &record3;
    for (int i = 0; i < 2; i++) {
        records[i]->record_output();
        cout << endl;
    }
	return 0;
}