#include <bits//stdc++.h>

using namespace std;
/*

*/
int main () {
    int d; cin >> d;

    for (int i = 0; i < 100; i++)
    {
        int temp;
        cin >> temp;
        if (d > temp)
        {
            d += temp;
        }
        else {
            cout << d;
            i = 101;
        }
    }

}