#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
    cin >> n;
    string text = "";
    string temp;
    getline(cin, temp);
    for (int i = 0; i < n; i++)
    {  
        getline(cin, temp);
        text += temp;
    }
    if (count(text.begin(), text.end(), 't') + count(text.begin(), text.end(), 'T') > count(text.begin(), text.end(), 's') + count(text.begin(), text.end(), 'S'))
    {
        cout << "English";
    }
    else
    {
        cout << "French";
    }
    return 0;
}