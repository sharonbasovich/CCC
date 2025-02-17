#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin >> x;
    unordered_map<string, vector<string>> sameMap;
    // string same[x][2];
    for (int i = 0; i < x; i++)
    {
        // cin >> same[i][0];
        // cin >> same[i][1];
        string name1;
        cin >> name1;
        string name2;
        cin >> name2;
        sameMap[name1].push_back(name2);
    }

    int y;
    cin >> y;
    unordered_map<string, vector<string>> seperateMap;
    // string same[x][2];
    for (int i = 0; i < y; i++)
    {
        // cin >> same[i][0];
        // cin >> same[i][1];
        string name1;
        cin >> name1;
        string name2;
        cin >> name2;
        seperateMap[name1].push_back(name2);
    }

    int g;
    cin >> g;
    int broken = 0;

    for (int i = 0; i < g; i++)
    {
        string name1;
        string name2;
        string name3;

        cin >> name1 >> name2 >> name3;

        try
        {
            for (string i : sameMap.at(name1))
            {
                if (!(i == name2 || i == name3))
                {
                    broken++;
                }
            }
        }
        catch (const std::exception &e)
        {
        }

        try
        {
            for (string i : sameMap.at(name2))
            {
                if (!(i == name1 || i == name3))
                {
                    broken++;
                }
            }
        }
        catch (const std::exception &e)
        {
        }
        try
        {
            for (string i : sameMap.at(name3))
            {
                if (!(i == name2 || i == name1))
                {
                    broken++;
                }
            }
        }
        catch (const std::exception &e)
        {
        }
        try
        {
            for (string i : seperateMap.at(name1))
            {
                if ((i == name2 || i == name3))
                {
                    broken++;
                }
            }
        }
        catch (const std::exception &e)
        {
        }
        try
        {
            for (string i : seperateMap.at(name2))
            {
                if ((i == name1 || i == name3))
                {
                    broken++;
                }
            }
        }
        catch (const std::exception &e)
        {
        }
        try
        {
            for (string i : seperateMap.at(name3))
            {
                if ((i == name2 || i == name1))
                {
                    broken++;
                }
            }
        }
        catch (const std::exception &e)
        {
        }
    }
    cout << broken;
}

// bool finish = false;

// for (int k = 0; k < x; k++)
// {

//     for (int i = 0; i < g; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if (groups[i][j] == same[k][0])
//             {
//                 if (j == 2)
//                 {
//                     if (!(groups[i][1] == same[k][1] || groups[i][0] == same[k][1]))
//                     {
//                         broken++;
//                     }
//                 }
//                 if (j == 1)
//                 {
//                     if (!(groups[i][2] == same[k][1] || groups[i][0] == same[k][1]))
//                     {
//                         broken++;
//                     }
//                 }
//                 if (j == 0)
//                 {
//                     if (!(groups[i][1] == same[k][1] || groups[i][2] == same[k][1]))
//                     {
//                         broken++;
//                     }
//                 }
//                 finish = true;
//             }
//         }
//         if (finish)
//         {
//             finish = false;
//             break;
//         }
//     }
// }

// finish = false;
// for (int k = 0; k < y; k++)
// {

//     for (int i = 0; i < g; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if (groups[i][j] == seperate[k][0])
//             {
//                 if (j == 2)
//                 {
//                     if ((groups[i][1] == seperate[k][1] || groups[i][0] == seperate[k][1]))
//                     {
//                         broken++;
//                     }
//                 }
//                 if (j == 1)
//                 {
//                     if ((groups[i][2] == seperate[k][1] || groups[i][0] == seperate[k][1]))
//                     {
//                         broken++;
//                     }
//                 }
//                 if (j == 0)
//                 {
//                     if ((groups[i][1] == seperate[k][1] || groups[i][2] == seperate[k][1]))
//                     {
//                         broken++;
//                     }
//                 }
//                 finish = true;
//             }
//         }
//         if (finish)
//         {
//             finish = false;
//             break;
//         }
//     }
// }
