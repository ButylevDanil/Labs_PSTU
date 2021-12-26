#include <math.h>
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n, a, b, c;
    cout << "Введите трехзначное число" << endl;
    cin >> n;
    c = n % 10;
    a = n / 100;
    b = (n % 100) / 10;
    if (a < 10 && a>0) {
        cout << "Всевозможные комбинации:" << endl;
        cout << a << b << c << endl;
        cout << a << c << b << endl;
        cout << b << a << c << endl;
        cout << b << c << a << endl;
        cout << c << b << a << endl;
        cout << c << a << b << endl;
        cout << "Самая большая комбинация = ";
        if (a > b) {
            if (a > c) {
                if (b > c) {
                    cout << a << b << c;
                }
                else {
                    cout << a << c << b;
                }
            }
            else {
                cout << c << a << b;
            }
        }
        else {
            if (b > c) {
                if (a > c) {
                    cout << b << a << c;
                }
                else {
                    cout << b << c << a;
                }
            }
            else {
                cout << c << b << a;
            }
        }
    }
    else {
        cout << "Введено не трехзначное число";
    }
}

