#include <iostream>	

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	char a, b, c, d, e;

	cout << "Введите пять символов" << endl;
	cin >> a >> b >> c >> d >> e;
	cout << "Обратная последовательность символов: " << e << " " << d << " " << c << " " << b << " " << a;
}
