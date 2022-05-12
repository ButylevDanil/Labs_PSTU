#include<iostream>
#include<Windows.h>
using namespace std;
/*
	Найти и удалить все элементы N из массива
*/
void Print(int* m, int s)
{
	for (int i = 0; i < s; i++)
	{
		cout << m[i] << " ";
	}
	cout << endl;
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int s = 0, n;
	do
	{
		cout << "Введите размер массива: ";
		cin >> s;
	} while (s < 5);
	int* m = new int[s];
	cout << "Элементы массива: " << endl;
	for (int i = 0; i < s; i++)
	{
		cin >> m[i];
	}
	cout << endl << "Массив: " << endl;
	Print(m, s);
	cout << endl << "Введите элемент, который необходимо заменить: ";
	cin >> n;
	for (int i = 0; i != s; i++) {
		if (m[i] == n) {
			m[i] = n + n;
		}
	}
	cout << endl << "Массив после замены: " << endl;
	Print(m, s);
	delete[] m;
	return 0;
}