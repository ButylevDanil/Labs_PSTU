#include<iostream>
#include<Windows.h>
using namespace std;
void Print(char* m, int s)
{
	for (int i = 0; i < s; i++)
	{
		cout << m[i] << " ";
	}
	cout << endl;
}
int InterpolSearch(char* m, int s)
{
	int mid, l = 0, r = s - 1;
	while ((m[l] < 'ш') && ('ш' < m[r]))
	{
		mid = l + (('ш' - m[l]) * (r - l) / (m[r] - m[l]));
		if (m[mid] < 'ш')
		{
			l = mid + 1;
		}
		else
		{
			if (m[mid] > 'ш')
			{
				r = mid - 1;
			}
			else
			{
				return mid;
			}
		}
	}
	if (m[l] == 'ш')
	{
		return l;
	}
	else if (m[r] == 'ш')
	{
		return r;
	}
	return -1;
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int s = 0, n;
	do
	{
		cout << "Введите размерность массива: ";
		cin >> s;
	} while (s < 5);
	char* m = new char[s];
	cout << "Элементы массива: " << endl;
	for (int i = 0; i < s; i++)
	{
		cin >> m[i];
	}
	cout << endl << "Массив: " << endl;
	Print(m, s);
	for (int i = 0; i < s; i++)
	{
		for (int j = 0; j < s - 1; j++)
		{
			if (m[j] > m[j + 1])
			{
				char ff = m[j + 1];
				m[j + 1] = m[j];
				m[j] = ff;
			}
		}
	}
	cout << endl << "Отсортированный массив: " << endl;
	Print(m, s);
	do {
		n = InterpolSearch(m, s);
		if (n != -1){
			for (int i = n; i < s - 1; i++) {
				m[i] = m[i + 1];
			}
			s--;
		}
	} while (n != -1);
	cout << endl << "Массив после удаления: " << endl;
	Print(m, s);
	delete[] m;
	return 0;
}