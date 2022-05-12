#include <iostream>
using namespace std;
void g(int n, int f, int s, int t) {
    if (n > 0) {
        g(n - 1, f, t, s); //f - first s - second t - third
        cout << f << " => " << s << endl;
        g(n - 1, t, s, f);
    }
}
int main()
{
    int n;
    cin >> n;
    g(n, 1, 3, 2);
    return 0;
}