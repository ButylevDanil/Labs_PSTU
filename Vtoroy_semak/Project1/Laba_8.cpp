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
    cout << "Кол-во студентов: ";
    cin >> n; n++;
    cout << endl;
    St* Stud = new St[n];
    for (int i = 0; i != n; i++)
    {
        if (i == n-1) {
            cout << "Минимальный рейтинг: ";
            cin >> k;
            cout << endl << "Какого студента нужно добавить: " << endl;
        }
        cin.get();
        cout << "ФИО: ";
        cin.getline(Stud[i].name, 100);
        cout << "Адрес: ";
        cin.getline(Stud[i].url, 60);
        cout << "Группа: ";
        cin.getline(Stud[i].team, 10);
        cout << "Рейтинг: ";
        cin >> Stud[i].rank;
        cout << endl;
    }
    cout << "===============================================" << endl;
    for (int i = 0; i != n; i++)
    {
        if ((Stud[i].rank >= k) || (i == n - 1)) {
            ii++;
            cout << endl << "№ " << ii << endl << "ФИО " << Stud[i].name << endl << "Адрес " << Stud[i].url << endl << "Группа " << Stud[i].team << endl << "Рейтинг " << Stud[i].rank << endl;
        }
    }
    return 0;
}



/*Структура "Студент":
фамилия, имя, отчество;
домашний адрес;
группа;
рейтинг.
Удалить все элементы, у которых рейтинг меньше заданного, добавить 1 элемент в конец файла.
*/