#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s, b;
	char m;
    int n, k=0;
    getline(cin, b);
    n = b.size();
	s = b;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (s[j] > s[j + 1])
			{
				m = s[j + 1];
				s[j + 1] = s[j];
				s[j] = m;
			}
		}
	}
	while (s[k] < 97) k++;
	for (int i = 0; i < n; i++)
	{
		if ((b[i] <123)&&(b[i]>96))
		{
			cout << s[k];
			k++;
		}
		else {
			cout << b[i];
		}
	}
	return 0;
}

// Преобразовать строку так, чтобы все буквы в ней были отсортированы по возрастанию.