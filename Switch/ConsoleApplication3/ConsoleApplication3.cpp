#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите цифру" << endl;
	cin >> n;
	switch (n) {
	case 0:
		cout << 0 << " ";
	case 1:
		cout << 1 << " ";
	case 2:
		cout << 2 << " ";
	case 3:
		cout << 3 << " ";
	case 4:
		cout << 4 << " ";
	case 5:
		cout << 5 << " ";
	case 6:
		cout << 6 << " ";
	case 7:
		cout << 7 << " ";
	case 8:
		cout << 8 << " ";
	case 9:
		cout << 9 << " ";
		break;
	default: cout << "Введена не цифра";
	}
	return 0;
}
