#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int n, k, c, f;
    cin >> n;
    c = 0;
    f = 2;
    for (int i = 2; i <= (n + 1); i++) {
        c = c + f;
        k = (i * 2) * (i * 2 - 1) / (i - 1);
        f = f * k;
    }
    cout << c;
    return 0;
}