#include <iostream>
#include <ctime>
using namespace std;
void svap(int &x, int &y) {
    int z = y;
    y = x;
    x = z;
}
int main()
{
    srand(time(0));
    int a[100][100], p, k, n;
    cin >> n;
    cin >> k >> p;
    k--; p--;
    for (int i = 0; i != n; i++) {
        for (int j = 0; j != n; j++) {
            a[i][j] = rand() % 30;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    a[k][k] = a[k][p];
    for (int i = 0; i != n; i++) {
        if (i != k) {
            svap(a[i][p], a[k][i]);
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

