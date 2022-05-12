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
    x0 = b - func(b) / (0.25 * 3 * b * b + 1);
    do {
        y = func(x0);
        if (func(b) * y > 0) {
            b = x0;
        }
        if (func(a) * y > 0) {
            a = x0;
        }
        x1 = x0 - y / (0.25 * 3 * x0 * x0 + 1);
    } while (abs(x0 - x1) > e);
    cout << setprecision(5) << x1;
    return 0;
}