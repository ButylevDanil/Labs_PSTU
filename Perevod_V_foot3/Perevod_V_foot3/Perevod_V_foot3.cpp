#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	float g;

	cout << "Введите объём в галлонах" << endl;
	cin >> g;
	cout << "Объём в кубических футах равен " << g / 7.481;

	return 0;
}