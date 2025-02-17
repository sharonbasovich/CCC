#include <bits/stdc++.h>

using namespace std;

// cin >>
// cout <<

// rows 1 to m
// columns 1 to n

// false is black
// true is gold

int main()
{
    int rows, columns, strokes;
    cin >> rows >> columns >> strokes;
    int columnArr[columns];
    int rowArr[rows];
    // bool canvas[rows][columns];
    for (int i = 0; i < rows; i++)
    {
        rowArr[i] = 0;
        // for (int j = 0; j < columns; j++)
        // {
        //     canvas[i][j] = false;
        // }
    }

    for (int i = 0; i < columns; i++)
    {
        columnArr[i] = 0;
    }
    

    
    for (int i = 0; i < strokes; i++)
    {
        char type;
        // int index;
        cin >> type;
        if (type == 'R')
        {
            int n;
            cin >> n;
            rowArr[n-1]++;
        }
        else
        {
            int n;
            cin >> n;
            columnArr[n-1]++;
        }

        // if (type == 'R')
        // {
        //     // row operation
        //     for (int j = 0; j < columns; j++)
        //     {
        //         canvas[index][j] = !canvas[index][j];
        //     }
        // }
        // else
        // {
        //     for (int j = 0; j < rows; j++)
        //     {
        //         canvas[j][index] = !canvas[j][index];
        //     }
        // }
    }

    // sort(rowArr.begin(), rowArr.end());
    // sort(columnArr.begin(), columnArr.end());

    // for (int i = 0; i < rowArr.size(); i++)
    // {
    //     if (i != 0)
    //     {
    //         if (rowArr.at(i) == rowArr.at(i - 1))
    //         {
    //             rowArr.erase(rowArr.begin() + i - 1);
    //             rowArr.erase(rowArr.begin() + i - 1);
    //             i -=2;
    //         }
    //     }
    // }

    // for (int i = 0; i < columnArr.size(); i++)
    // {
    //     if (i != 0)
    //     {
    //         if (columnArr.at(i) == columnArr.at(i - 1))
    //         {
    //             columnArr.erase(columnArr.begin() + i - 1);
    //             columnArr.erase(columnArr.begin() + i - 1);
    //         }
    //     }
    // }

    // for (int i = 0; i < rowArr.size(); i++)
    // {
    //     for (int j = 0; j < columns; j++)
    //     {
    //         canvas[rowArr.at(i)][j] = !canvas[rowArr.at(i)][j];
    //     }
    // }
    // for (int i = 0; i < columnArr.size(); i++)
    // {
    //     for (int j = 0; j < rows; j++)
    //     {
    //         canvas[j][columnArr.at(i)] = !canvas[j][columnArr.at(i)];
    //     }
    // }

    int total = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if ((rowArr[i] + columnArr[j]) % 2)
            {
                total++;
            }
        }
    }
    cout << total;
}