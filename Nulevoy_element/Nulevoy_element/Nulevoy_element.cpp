#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "RU");
    int n, a, i = 1;
    bool f = false;
    cin >> n;
    while ((i <= n) && !(f)) {
        cin >> a;
        if (a == 0) {
            ++i;
        }
        else {
            f = true;
        }
    }
    if (f) {
        if (a > 0) {
            cout << "Первый ненулевой элемент больше 0";
        }
        else {
            cout << "Первый ненулевой элемент меньше 0";
        }
    }
    else {
        cout << "Все элементы равны 0";
    }
    return 0;
}