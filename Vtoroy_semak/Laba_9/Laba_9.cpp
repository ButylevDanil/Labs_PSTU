#include <fstream>
#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
    char lin[100];
    bool flag = true;
    int i = 0;
    ifstream fin("F1.txt");
    ofstream fout("F2.txt");
    while (!fin.eof()) {
        fin.getline(lin, 100);
        if (lin[0] != 'a') {
            while ((lin[i] != ' ')&& flag) {
                i++;
            }
            flag = false;
            fout << lin << endl;
        }
    }
    cout << i << endl;
    fin.close(); // ��������� ����
    fout.close(); // ��������� ����
    system("pause");
    return 0;
}
/*7.
����������� �� ����� F1 � ���� F2 ��� ������, ����� ���, ��� ���������� �� ����� �.
���������� ���������� �������� � ������ ����� F2.
*/