#include <iostream>
#include <math.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "RU");
    int n, z, c;
    bool f = true;
    cin >> n >> z;
    c = n;
    while (c > 0 && f) {
        if (c % 10 == z) {
            f = false;
        }
        c = c / 10;
    }
    if (f) {
        cout << "В числе " << n << " нет цифры " << z << endl;
    }
    else {
        cout << "В числе " << n << " есть цифра " << z << endl;
    }
    return 0; }

