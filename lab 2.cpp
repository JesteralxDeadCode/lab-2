#include <iostream>
using namespace std;

void Zad1()
{
    //void a;  (--- error
    int a = 1;
    char b = 'b';
    float c = 1;
    double d = 0.1;
    bool e = true;

    cout << "Обявление и вес базовых переменных" << endl
        << "переменная int: " << a << " ее размер: " << sizeof(a) << endl
        << "переменная char: " << b << " ее размер: " << sizeof(b) << endl
        << "переменная float: " << c << " ее размер: " << sizeof(c) << endl
        << "переменная double: " << d << " ее размер: " << sizeof(d) << endl
        << "переменная bool: " << e << " ее размер: " << sizeof(e) << endl;
}
void Zad2_3()
{
    int a = 25;
    float b = 123.54F;
    char c = 'c';

    a = (int)b; printf("a = %i\n", a);
    a = c; printf("a = %i\n", a);
    a = 25; printf("a = %i\n", a);
    b = (float)a; printf("a = %f\n", b);
    b = c; printf("a = %f\n", b);
    b = 123.54F; printf("a = %f\n", b);
    c = static_cast<char>(a); printf("a = %c\n", c);
    c = static_cast<char>(b); printf("a = %c\n", c);
    
}
void Zad4()
{
    char a = static_cast<char>(65); printf("a = %i\n, %c\n", a, a);
    char b = static_cast<char>(274); printf("b = %i\n, %c\n", b, b);

    signed char c = static_cast<char>(0); printf("c = %i\n, %c\n", c, c);
    unsigned char d = static_cast<char>(0); printf("d = %i\n, %c\n", d, d);

    c = static_cast<char>(255); printf("c = %i\n, %c\n", c, c);
    d = static_cast<char>(255); printf("d = %i\n, %c\n", d, d);

    c = static_cast<char>(255+2); printf("c = %i\n, %c\n", c, c);
    d = static_cast<char>(255+2); printf("d = %i\n, %c\n", d, d);

    signed int e = 2147483647; 
    unsigned int f = 4294967295;

    e += 3; printf("e = %i\n, %c\n", e, e);
    f += 3; printf("f = %i\n, %c\n", f, f);
}
void Zad5()
{
    int d, i = 1, f=2;
    d = i++ + f++;
    i = 1;
    d = (++i)++;
    d = 1;
    d += d++;
    int a, b, c, k;
    b = 2; d = 3;
    k = (a = b) + (c = d);
    int l, j;
    i = 0; l = 0; j = 0; k = 0;
    a = i++ & ++j | k | l++;
    a = 2; b = 1;
    k = (a != b) ? (a - b++) : (++a - b);
    a = 2; b = 3;
    float y1, y2;
    c = (int)3.5;
    y1 = (float)c * a / b; y2 = (float)c * (a / b);

    cout << d << "\n" << i << "\n"
        << f << "\n" << a << "\n" 
        << b << "\n" << c << "\n" 
        << k << "\n" << l << "\n" 
        << j << "\n" << y1 << "\n" 
        << y2 << "\n" << c << "\n";
}
int main()
{
    setlocale(LC_ALL, "ru");
    cout << "\n" << "Задание 1" << "\n";
    Zad1();
    cout << "\n" << "Задание 2 и 3" << "\n";
    Zad2_3();
    cout << "\n" << "Задание 4" << "\n";
    Zad4();
    cout << "\n" << "Задание 5" << "\n";
    Zad5();
}