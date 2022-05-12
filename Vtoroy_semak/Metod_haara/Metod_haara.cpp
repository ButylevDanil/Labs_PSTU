#include <iostream>
using namespace std;
void ref(int* d, int a, int b) {
    int l = a, r = b, k, g = 0;
    for (int i = a; i != b+1; i++) {
        g += d[i];
    }
    g = g / (b + 1 - a);
    while (l < r) {
        if ((d[l] < g) || (l < b) && (d[l] == g)) {
            l++;
        }
        else {
            if ((d[r] > g) || (r > a) && (d[r] == g)) {
                r--;
            }
            else {
                k = d[r];
                d[r] = d[l];
                d[l] = k;
            }
        }
    }
    if (l == b) {
        r--;
    }
    else {
        l++;
    }
    if (a < r) {
        ref(d, a, r);
    }
    if (l < b) {
        ref(d, l, b);
    }
}
int main()
{
    setlocale(0, "RUS");
    srand(time(0));
    int n, p, z, j;
    cout << "Введите длинну массива" << endl; cin >> n;
    int* d = new int[n];
    for (int i = 0; i != n; i++) {
        d[i] = rand() % 31;
        cout << d[i] << " ";
    }
    ref(d, 0, n-1);
    for (int i = 1; i != n; i++) {
        if (d[i] < d[i - 1]) {
            p = d[i];
            d[i] = d[i - 1];
            d[i - 1] = p;
        }
    }
    cout << endl << "Отсортированный массив:" << endl;
    for (int i = 0; i != n; i++) {
        cout << d[i] << " ";
    }
}
