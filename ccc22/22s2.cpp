#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin >> x;
    unordered_map<string, string> sameMap;
    // string same[x][2];
    for (int i = 0; i < x; i++)
    {
        // cin >> same[i][0];
        // cin >> same[i][1];
        string name1;
        cin >> name1;
        string name2;
        cin >> name2;
        sameMap[]
    }

    int y;
    cin >> y;
    string seperate[y][2];
    for (int i = 0; i < y; i++)
    {
        cin >> seperate[i][0];
        cin >> seperate[i][1];
    }

    int g;
    cin >> g;
    string groups[g][3];
    for (int i = 0; i < g; i++)
    {
        cin >> groups[i][0];
        cin >> groups[i][1];
        cin >> groups[i][2];
    }

    int broken = 0;
    bool finish = false;

    for (int k = 0; k < x; k++)
    {

        for (int i = 0; i < g; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (groups[i][j] == same[k][0])
                {
                    if (j == 2)
                    {
                        if (!(groups[i][1] == same[k][1] || groups[i][0] == same[k][1]))
                        {
                            broken++;
                        }
                    }
                    if (j == 1)
                    {
                        if (!(groups[i][2] == same[k][1] || groups[i][0] == same[k][1]))
                        {
                            broken++;
                        }
                    }
                    if (j == 0)
                    {
                        if (!(groups[i][1] == same[k][1] || groups[i][2] == same[k][1]))
                        {
                            broken++;
                        }
                    }
                    finish = true;
                }
            }
            if (finish)
            {
                finish = false;
                break;
            }
        }
    }

    finish = false;
    for (int k = 0; k < y; k++)
    {

        for (int i = 0; i < g; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (groups[i][j] == seperate[k][0])
                {
                    if (j == 2)
                    {
                        if ((groups[i][1] == seperate[k][1] || groups[i][0] == seperate[k][1]))
                        {
                            broken++;
                        }
                    }
                    if (j == 1)
                    {
                        if ((groups[i][2] == seperate[k][1] || groups[i][0] == seperate[k][1]))
                        {
                            broken++;
                        }
                    }
                    if (j == 0)
                    {
                        if ((groups[i][1] == seperate[k][1] || groups[i][2] == seperate[k][1]))
                        {
                            broken++;
                        }
                    }
                    finish = true;
                }
            }
            if (finish)
            {
                finish = false;
                break;
            }
        }
    }

    cout << broken;
}
