#include <ctime>
#include <iostream>
using namespace std;
int main(){
    setlocale(0, "RUS");
    srand(time(0));
    int n, p, z, j;
    bool flag = true;
    cout << "Введите длинну массива" << endl; cin >> n;
    int* d = new int[n+1];
    cout << "Введите число для проверки наличия в массиве" << endl; cin >> z;
    cout << "Введите номер элемента массива после которого нужно вставить искомое число" << endl;
    cin >> p;
    for (int i = 0; i != n; i++) {
        d[i] = rand() % 31;
        cout << d[i] << " ";
        if (d[i] == z) {
            flag = false;
            j = i;
        }
    }
    cout << endl;
    if (!flag) {
        cout << "Элемент равный 0 был найден под номером " << j + 1 << endl;
        for (int i = j; i != n-1; i++) {
            d[i] = d[i + 1];
        }
    }
    n = n + flag*1;
    for (int i = n; i != p; i--) {
        d[i] = d[i - 1];
    }
    d[p+flag-1] = 100;
    for (int i = 0; i != n; i++) {
        cout << d[i] << " ";
    }
    //delete[] d; d = nullptr;
    return 0;}
