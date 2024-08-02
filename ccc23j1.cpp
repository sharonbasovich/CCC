#include <bits/stdc++.h>
using namespace std;

int p;
int c;
int f;

int main() {
    cin >> p;
    cin >> c;
    f = (50 * p) - (10 * c);
    if (p > c)
    {
        f += 500;
    }
    cout << f;
}