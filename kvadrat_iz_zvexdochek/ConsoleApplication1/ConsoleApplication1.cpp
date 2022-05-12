#include <math.h>
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << "*        ";
		}
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
	}
	return 0;
}