#include <bits/stdc++.h>
using namespace std;
string t;
string s;
int main() {
    cin >> t;
    cin >> s;

    for (int i = 0; i < s.size(); i++) 
    {
        string cyclic = "";
        for (int j = 0; j < s.size(); j++)
        {
            if(i+j < s.size())
            {
                cyclic += s[i+j];
            }
            else
            {
                cyclic += s[j-i];
            }
            
        }
        if ()
    }
    cout << 
}

