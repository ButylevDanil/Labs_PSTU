#include <iostream>

using namespace std;
int main(){
	setlocale(LC_ALL, "Rus");
	int n, m, s, j;
	cout << "Количество элементов = "; cin >> n;
	int a[1000];
	for (int i = 0; i != n; i++) //ввод массива
	{
		cout << i + 1 << " элемент = "; cin >> a[i];
	}
    s = n / 2;
    while (s > 0)
    {
        for (int i = 0; i < (n - s); i++)
        {
            j = i;
            while ((j >= 0) && (a[j] > a[j + s]))
            {
                m = a[j];
                a[j] = a[j + s];
                a[j + s] = m;
                j -= s;
            }
        }
        s = s / 2;
    }

	cout << "Результирующий массив: ";
	for (int i = 0; i != n; i++) cout << a[i] << " "; //вывод массива
	return 0;}

