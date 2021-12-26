#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n,k,c;
	k = 1 + rand() % 100;
	{
		int i = 0;
		while (i < 7) {
			cout << "Введите число" << endl;
			cin >> c;
			i++;
			if (c > k && i < 7) {
				cout << "Загаданное число меньше" << endl;
			}
			else {
				if (c == k) {
					cout << "Число угадано" << endl;
					i += 7;
				}
				else {
					if (i == 7) {
						cout << "Число не угадано" << endl;
					}
					else {
						cout << "Загаданное число больше" << endl;
					}
				}
			}
		}
	}
	return 0;
}










