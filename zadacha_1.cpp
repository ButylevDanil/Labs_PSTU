/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{    
    setlocale(LC_ALL, "Rus");
    int x,a,b,c;
    bool f;
    cout << "Введите трехзначное число" << "\n";
    f = true;
    while (f == true) {
        f = false;
        cin >> x;
        a = x / 100;
        b = (x / 10) % 10;
        c = x % 10;
        if (a == 0) {
            f = true;
        }
        if (a == b) {
            f = true;
        }
        if (a == c) {
            f = true;
        }
        if (c == b) {
            f = true;
        }
        if (a >= 10) {
            f = true;
        }
        if (f == true) {
            cout << "Цифры в числе не должны повторятся, число должно быть трехзначное" << "\n";
        }
    }
    cout <<"Все комбинации чисел:"<< "\n"<<a<<b<<c<< "\n";
    cout <<a<<c<<b<< "\n";
    cout <<b<<c<<a<< "\n";
    cout <<b<<a<<c<< "\n";
    cout <<c<<b<<a<< "\n";
    cout <<c<<a<<b<< "\n"<<"Наибольшее число равно"<< "\n";
    
    for ( int i = 0; i < 3; i++) {
        if (a > b) {
            if (a > c) {
                cout <<a;
                a = 0;
            }
        }
        if (b > a) {
            if (b > c) {
                cout <<b;
                b = 0;
            }
        }
        if (c > a) {
            if (c > b) {
                cout <<c;
                c = 0;
            }
        }
    }
    return 0;
}
