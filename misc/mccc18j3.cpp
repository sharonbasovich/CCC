#include <bits/stdc++.h>
using namespace std;
string s;

int arr[26];
int main() {
    cin >> s;
    for(int i = 0; i < 26; i++)
    {
        arr[i] = count(s.begin(), s.end(), char(97 + i));
    }
    sort(&arr[0], &arr[26]);
    int sum = 0;
    for(int j = 0; j < 24; j++)
    {
        sum += arr[j];
    }
    cout << sum << endl;
    return 0;
}
