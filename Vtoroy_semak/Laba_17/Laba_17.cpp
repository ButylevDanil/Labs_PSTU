#include<iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	string s, s1, k;
	bool flag = 0;
	int j, h, r, i;
	cout << "Строка в которой ищем: " << endl;
	getline(cin, s);
	s1 = s;
	cout << "Строка которую ищем: " << endl;
	getline(cin, k);
	cout << endl << "Строка: " << s << endl;
	int* p = new int[k.length()];
	j = 0;
	i = 1;
	p[0] = 0;
	while (i != k.length()) {
		if (k[j] == k[i]) {
			j++;
			p[i] = j;
			i++;
		}
		else if (j == 0) {
			p[i] = 0;
			i++;
		}
		else {
			j = p[j - 1];
		}
	}
	j = 0;
	i = 0;
	while (!flag&&(j != s.length())) {
		if (k[i] == s[j]) {
			j++;
			i++;
		}
		else if (i == 0) {
			j++;
		}
		else {
			i = p[i-1];
		}
		if (i== k.length()) {
			flag = 1;
		}
	}
	cout << "Строка: " << s << endl << j - k.length();
	return 0;
}