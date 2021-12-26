#include <iostream>	

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	float x, y;

	cout << "Введите два числа" << endl;
	cin >> x >> y;
	cout << "Их произведение равно " << x * y;

	return 0;
}