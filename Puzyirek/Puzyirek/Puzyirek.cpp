#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int n, m; 
	cout << "Количество элементов = "; cin >> n;
	int a[1000];
	for (int i = 0; i < n; i++) //ввод массива
	{
		cout << i + 1 << " элемент = "; cin >> a[i];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				m = a[j + 1];
				a[j + 1] = a[j];
				a[j] = m;
			}
		}
	}

	cout << "Результирующий массив: ";
	for (int i = 0; i < n; i++) cout << a[i] << " "; //вывод массива
	return 0;
}