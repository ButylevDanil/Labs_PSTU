#include <iostream>
#include <math.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "RU");
    int a, b, c;
    bool f = false, fl = false;
    cin >> b;
    if (!(b == 0)) {
        cin >> a;
        if (a == 0) {
            cout << "Последовательность состоит из одного элемента";
        }
        else {
            f = true;
            fl = true;
        }
    }
    else {
        cout << "последовательности чисел нет";
    }
    c = b;
    while (!(b == 0) && fl && f) {
        a = b;
        cin >> b;
        if (((c - a) * (a - b) < 0) && !(b==0)) {
            fl= false;
        }
    }
    if (fl) {
        if ((a-c) > 0) {
            cout << "Последовательность упорядочена по возрастанию";
        }
        else {
            cout << "Последовательность упорядочена по убыванию";
        }
    }
    else {
        if (f) {
            cout << "Последовательность не упорядочена";
        }
    }
    return 0;
}




