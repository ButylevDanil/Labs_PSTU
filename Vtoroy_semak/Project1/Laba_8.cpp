#include<iostream>
#include <windows.h>
using namespace std;
struct St 
{
    char name[100];
    char url[60];
    char team[15];
    int rank;
};
int main()
{
    int n, k = 0, ii = 0;
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "���-�� ���������: ";
    cin >> n; n++;
    cout << endl;
    St* Stud = new St[n];
    for (int i = 0; i != n; i++)
    {
        if (i == n-1) {
            cout << "����������� �������: ";
            cin >> k;
            cout << endl << "������ �������� ����� ��������: " << endl;
        }
        cin.get();
        cout << "���: ";
        cin.getline(Stud[i].name, 100);
        cout << "�����: ";
        cin.getline(Stud[i].url, 60);
        cout << "������: ";
        cin.getline(Stud[i].team, 10);
        cout << "�������: ";
        cin >> Stud[i].rank;
        cout << endl;
    }
    cout << "===============================================" << endl;
    for (int i = 0; i != n; i++)
    {
        if ((Stud[i].rank >= k) || (i == n - 1)) {
            ii++;
            cout << endl << "� " << ii << endl << "��� " << Stud[i].name << endl << "����� " << Stud[i].url << endl << "������ " << Stud[i].team << endl << "������� " << Stud[i].rank << endl;
        }
    }
    return 0;
}



/*��������� "�������":
�������, ���, ��������;
�������� �����;
������;
�������.
������� ��� ��������, � ������� ������� ������ ���������, �������� 1 ������� � ����� �����.
*/