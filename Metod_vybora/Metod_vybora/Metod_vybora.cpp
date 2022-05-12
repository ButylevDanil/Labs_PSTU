#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL, "Rus");
	int n, m, num, k;
	cout << "Количество элементов = "; cin >> n;
	int a[100];
	for (int i = 0; i < n; i++) //ввод массива
	{
		cout << i + 1 << " элемент = "; cin >> a[i];
	}

	for (int i = 0; i < n; i++)
	{
		m = a[n - 1];
		for (int j = i; j < n; j++) {
			if (a[j] <= m) {
				m = a[j];
				num = j;
			}
		}
		k = a[i];
		a[i] = m;
		a[num] = k;
	}

	cout << "Результирующий массив: ";
	for (int i = 0; i < n; i++) cout << a[i] << " "; //вывод массива
	return 0;
}