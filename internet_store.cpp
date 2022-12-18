#include "lib.h"
#include <iostream>
#include "table.h"

int main()
{
    /*
    int count;
    record record1, records[5][5];
    customer Customer(23, "ПетровАБ");
    helper Helper("Помощник1", 1);
    seller Seller("Продавец1", 1);
    product Product("Продукт1", 12500, 2, 1111);
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

    product product1;     /////////////// TRY CATCH БЛОКИ
    product1.input_product();
    product1.output_product();
    
    records[0][0] = record1;
    records[0][1] = record3;
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 2; j++) {
            records[i][j].record_output();
        }
        puts("");
    } 

    //cout << "\nСтоймость всех товаров: " << (*Record).get_summ_product_price() << endl;

    */
    
    
    //////////виртуал функция
    product pr1("Продукт1", 12500, 2, 1111);
    product* prx = &pr1;  // Указатель на базовый класс
    product_more_info pr2;
    product_more_info* pry = &pr2;
    prx->print();
    pry->print();
    return 0;
}