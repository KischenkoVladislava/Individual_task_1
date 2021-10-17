#include <iostream>
#include <windows.h>
#include<iomanip>
#include <string>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string name1, name2, name3;
    char type1, type2, type3;
    double prise1, prise2, prise3;
    int quantity1, quantity2, quantity3;
    cout << "Введите наименование 1-го товара" << endl;
    cin >> name1;
    cout << "Введите тип 1 - го товара" << endl;
    cin >> type1;
    cout << "Введите цену 1 - го товара за 1 шт(грн)" << endl;
    cin >> prise1;
    cout << "Введите количество 1 товара" << endl;
    cin >> quantity1;
    cout << "Введите наименование 2-го товара" << endl;
    cin >> name2;
    cout << "Введите тип 2 - го товара" << endl;
    cin >> type2;
    cout << "Введите цену 2 - го товара за 1 шт(грн)" << endl;
    cin >> prise2;
    cout << "Введите количество 2 товара" << endl;
    cin >> quantity2;
    cout << "Введите наименование 3-го товара" << endl;
    cin >> name3;
    cout << "Введите тип 3 - го товара" << endl;
    cin >> type3;
    cout << "Введите цену 3 - го товара за 1 шт(грн)" << endl;
    cin >> prise3;
    cout << "Введите количество 3 товара" << endl;
    cin >> quantity3;
    cout << "------------------------------------------------------------ " << endl;
    cout << "| Прайс-лист                                               | " << endl;
    cout << "|----------------------------------------------------------| " << endl;
    cout << "| Наименование товара | Тип товара |  Цена за   |Количество| " << endl;
    cout << "|                     |            |  1 шт (грн)|          | " << endl;
    cout << "|---------------------|------------|------------|----------| " << endl;
    cout << "|" << name1 << setw(17) << "|" << type1 << setw(12) << "|" << prise1 << setw(9) << "|" << quantity1 << setw(8) << "|" << endl;
    cout << "|" << name2 << setw(5) << "|" << type2 << setw(12) << "|" << prise2 << setw(9) << "|" << quantity2 << setw(8) << "|" << endl;
    cout << "|" << name3 << setw(11) << "|" << type3 << setw(12) << "|" << prise3 << setw(10) << "|" << quantity3 << setw(9) << "|" << endl;
    cout << "|----------------------------------------------------------|" << endl;
    cout << "| Перечисляемый тип: К – канцтовары, О - оргтехника        |" << endl;
    cout << "------------------------------------------------------------" << endl;
    return 0;
}