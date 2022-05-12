#include <iostream>
#include <math.h>
#include <complex>
using namespace std;
int com (int b, int c)
{
	return b / c;
}
complex <double> com (complex <double> b, complex <double> c)
{
	return b / c;
}
int main(){
	setlocale(LC_ALL, "RUS");

	int x, y; //Описание целых чисел.
	cout << "Введите целый числитель ";
	cin >> x; //Ввод целого числа x.
	cout << "Введите целый знаменатель ";
	cin >> y; //Ввод целого числа y.
	cout << "Частное равно " << com(x, y) << endl; //Вывод частного целых чисел

	complex <double> xi, yi; //Описание комплексных чисел.
	cout << "Введите комплексный числитель "; 
	cin >> xi; //Ввод комплексного числа xi.
	cout << "Введите комплексный знаменатель "; 
	cin >> yi; //Ввод комплексного числа yi.
	cout << "Частное равно " << com(xi, yi); //Вывод частного комплексных чисел
	return 0;
}