#include <iostream>
#include <ctime>
using namespace std;
void svap(int &x, int &y) {
    int z = y;
    y = x;
    x = z;
}
void exch(int(*d)[100], int m, int k, int p, bool flag) {
    for (int i = 0; i != m; i++) {
        if (flag) {
            svap(d[i][p], d[i][k]);
        }
        else {
            svap(d[p][i], d[k][i]);
        }
    }
}
int main(){
    srand(time(0));
    int a[100][100], n;
    cin >> n;
    for (int i = 0; i != n; i++) {
        for (int j = 0; j != n; j++) {
            a[i][j] = rand() % 30;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i != n - 1; i++) {
        for (int j = i + 1; j != n; j++) {
            if (a[0][i] == a[0][j]) {
                exch(a, n, i, j,true);
            }
            if (a[i][0] == a[j][0]) {
                exch(a, n, i, j, false);
            }
        }
    }
    for (int i = 0; i != n; i++) {
        cout << endl;
        for (int j = 0; j != n; j++) {
            cout << a[i][j] << " ";
        }        
    }
    return 0;
}

