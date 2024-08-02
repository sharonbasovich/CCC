#include <bits//stdc++.h>

using namespace std;

int main () {
    int total = 0;
    string word;
    int r;
    int c;
    cin >> word >> r >> c;
    char table[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> table[i][j];

        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int counter = 0;
            if (table[i][j] == word[0])
            {
                for (int k = 0; k < word.length(); k++)
                {
                    if (table[i][j+k] == word[k]);
                    {
                        counter++;
                    }
                }
                if (counter == word.length())
                {
                    total++;
                }
            }
        }
    }
    cout << total << endl;
    return 0;
}