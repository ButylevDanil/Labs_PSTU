#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, B, N, n;
	cout << "Введите число" << endl;
	cin >> N;
	a = 0;
	n = N;
	B = 0;
	while (n > 0) {
		a = a + n % 10;
		B = n % 10 + B * 10;
		n = n / 10;
	}
	cout << "Сумма цифр числа = " << a << endl;
	cout << "Число задом наперед " << B;

	return 0;