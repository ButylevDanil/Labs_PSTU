#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double c, f;
    cout << "Введите градусы по Фаренгейту" << endl;
    cin >> f;
    c = floor(50. / 9 * (f - 32)) / 10;
    cout << f << " градусов по Фаренгейту = " << c << " градусам по Цельсию" << endl;
    return 0;
}





