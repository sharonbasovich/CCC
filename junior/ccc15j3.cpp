#include <bits/stdc++.h>
using namespace std;

char nearestConsonant(char x);
int vowels[] = {97, 101, 105, 111, 117};
int main () {
    string input;
    string output = "";
    string temp;
    cin >> input;
    for(int i = 0; i < input.size(); i++)
    {
        temp = input[i];
            if(find(&vowels[0], &vowels[5], int(input)) == &vowels[5])
            {
                temp += nearestConsonant(input[i]);
            }
        output += temp;
        //cout << nearestConsonant(input[i]);
    }
    cout << output;
}

char nearestConsonant(char x) {
    int y = int(x);
    int nearest = abs(vowels[0] - y);
    for (int i = 0; i < 4; i++) {
        nearest = min(nearest, abs(vowels[i+1] - y));
    }
    return char(nearest);
}