#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "RUS");
	cout << "Определить, чему будет равно выражение ++i*i++ при начальном i=1. Проверить результат программой.\n\n";
	int i, a, b, res;
	i = 1;
	a = ++i;
	b = i++;
	res = a * b;
	cout << "++i * i++ = ";
	cout << res << "\n";
	return 0;
}