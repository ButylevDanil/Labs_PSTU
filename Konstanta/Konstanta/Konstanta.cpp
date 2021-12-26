#include <iostream>	

using namespace std;

int main() {
	int const k = 10;
	int x;
	cout << k << endl << (x = 20) << endl;
	cout << --x << endl;
	return 0;
}