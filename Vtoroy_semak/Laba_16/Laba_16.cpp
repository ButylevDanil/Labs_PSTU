#include<iostream>
#include<Windows.h>
#include <string>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string s,s1, k = "strl";
	bool flag=0;
	int j,h,r;
	cout << "Строка в которой ищем: " << endl;
	getline(cin,s);
	s1 = s;
	cout << "Строка которую ищем: " << endl;
	getline(cin, k);
	cout << endl << "Строка: " << s << endl;
	int* p = new int[j=k.length()];
	j--; j--;
	for (int i = j;i!=-1; i--) {
		h = j;
		while ((k[i]!=k[h])&&(i!=h)) {
			h--;
		}
		if (i!=h) {
			p[i] = p[h];
		}
		else {
			p[i] = j - i+1;
		}
	}
	h = j;
	j++;
	while ((-1 != h) && (k[j] != k[h])) {
		h--;
	}
	if (-1 == h) {
		p[j] = j+1;
	}
	else {
		p[j] = p[h];
	}
	while ((!flag)&&(s.length()>j)) {
		h = j;
		while ((-1 != h) && (k[h] == s[h]) ) {
			h--;
		}
		if (h == -1) {
			flag = 1;
		}
		else {
			r = j;
			while ((-1 != r) && (s[h] != k[r])) {
				r--;
			}
			if (r == -1) {
				s.erase(0, j+1);
			}
			else {
				s.erase(0, p[r]);
			}
		}
	}
	if (flag) {
		s1.erase(s1.length() - s.length());
		s.erase(0, j+1);
		s = s1 + s;
	}
	cout << "Строка: " << s << endl;
	return 0;
}