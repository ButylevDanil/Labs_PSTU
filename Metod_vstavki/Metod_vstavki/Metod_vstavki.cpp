#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int n, m, j;
	cout << "Количество элементов = "; cin >> n;
	int a[1000];
	for (int i = 0; i < n; i++) //ввод массива
	{
		cout << i + 1 << " элемент = "; cin >> a[i];
	}

	for (int i = 1; i < n; i++)
	{
		m = a[i];
		j = i - 1; 
		while (j >= 0 && a[j] > m)
		{
			a[j + 1] = a[j];
			a[j] = m;
			j--;
		}
	}
	cout << "Результирующий массив: ";
	for (int i = 0; i < n; i++) cout << a[i] << " "; //вывод массива
	return 0;
}