#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    
    //void a;  (--- error
    int a = 1;
    char b = 'b';
    float c = 1;
    double d = 0.1;
    bool e = true;

    cout << "Обявление и вес базовых переменных" << endl
         << "переменная int: " << a << " ее размер: " << sizeof(int) << endl
         << "переменная char: " << b << " ее размер: " << sizeof(char) << endl
         << "переменная float: " << c << " ее размер: " << sizeof(float) << endl
         << "переменная double: " << d << " ее размер: " << sizeof(double) << endl
         <<"переменная bool: " << e << " ее размер: " << sizeof(bool) << endl;
}