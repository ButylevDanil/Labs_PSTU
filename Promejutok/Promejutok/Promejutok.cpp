#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int h1, m1, s1, h2, m2, s2, h, m, s;
    cout << "Введите начало и конец временного промежутка" << endl;
    cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
    s = h1 * 3600 + m1 * 60 + s1 - h2 * 3600 - m2 * 60 - s2;
    if (m1 > 59 || s1 > 59 || m2 > 59 || s2 > 59 || h1 < 0 || m1 < 0 || s1 < 0 || h2 < 0 || m2 < 0 || s2 < 0) {
        cout << "Введено не правильное время (отрицательное и/или минуты больше 59 и/или секунды больше 59)" << endl; 
    }
    else {
        if (s < 0) {
            cout << "Конец промежутка больше начала" << endl;
        }
        else {
            h = s / 3600;
            m = s % 3600 / 60;
            s = s % 60;
            cout << " Временной промежуток = " << h << "ч " << m << "м " << s << "с" << endl;
        }
    }
    return 0;
}







