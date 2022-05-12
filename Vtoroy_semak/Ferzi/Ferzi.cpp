#include <iostream>
using namespace std;
void pq(int* d, int x) {
    int j = x - x % 8;
    for (int i = x % 8; i < 64; i += 8) {
        d[i]++;
    }
    d[j]++;
    do {
        j++;
        d[j]++;
    } while (j % 8 < 7);
    j = x;
    while ((j % 8 < 7)&&(j/8<7)) j += 9;
    while (j >= 0) {
        d[j]++;
        if (j % 8 == 0) {
            j -= 64;
        }
        j -= 9;
    }
    j = x;
    while ((j % 8 > 0)&&(j/8<7)) j += 7;
    while (j >= 0) {
        d[j]++;
        if (j % 8 == 7) {
            j -= 64;
        }
        j -= 7;
    }
    d[x] += 10;
}
void mq(int* d, int x) {
    int j = x - x % 8;
    d[x] -= 10;
    for (int i = x % 8; i < 64; i += 8) {
        d[i]--;
    }
    d[j]--;
    do {
        j++;
        d[j]--;
    } while (j % 8 < 7);
    j = x;
    while ((j % 8 < 7) && (j / 8 < 7)) j += 9;
    while (j >= 0) {
        d[j]--;
        if (j % 8 == 0) {
            j -= 64;
        }
        j -= 9;
    }
    j = x;
    while ((j % 8 > 0) && (j / 8 < 7)) j += 7;
    while (j >= 0) {
        d[j]--;
        if (j % 8 == 7) {
            j -= 64;
        }
        j -= 7;
    }
}
bool ref(int* d, int j) {
    bool b=false;
    for (int i = j; i != 8 + j; i++) {
        if (d[i] == 0) {
            pq(d, i);
            if (j == 56) {
                return true;
            }
            else {
                b = ref(d, j + 8);
                if (!b) {
                    mq(d, i);
                }
            }
        }
    }
    return b;
}
int main()
{
    int* d = new int[64];
    for (int i = 0; i != 64; i++) {
        d[i] = 0;
    }
    ref(d,0);
    for (int i = 0; i != 64; i++) {
        if (i % 8 == 0) {
            cout << endl;
        }
        if (d[i] == 14) {
            cout <<"q ";
        }
        else {
            cout <<"* ";
        }
        
    }
    return 0;
}
