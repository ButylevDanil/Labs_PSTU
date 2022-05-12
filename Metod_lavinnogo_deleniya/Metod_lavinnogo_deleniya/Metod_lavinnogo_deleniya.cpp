#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

double func(double x) {
    x = 0.25 * pow(x, 3) + x - 1.2502;
    return x;
}

int main() {
    setlocale(LC_ALL, "RU");
    double a, b, x1, x0, e = 0.00001, y;
    cin >> a >> b;

    do {
        x0 = (a + b) / 2;
        y = func(x0);
        if (func(b) * y > 0) {
            b = x0;
        }
        if (func(a) * y > 0) {
            a = x0;
        }
        x1 = (a + b) / 2;
    } while (abs(x0 - x1) > e);
    cout << setprecision(5) << x1;
    return 0;
}