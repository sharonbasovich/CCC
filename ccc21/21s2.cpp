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

    bool canvas[rows][columns];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            canvas[i][j] = false;
        }
    }

    for (int i = 0; i < strokes; i++)
    {
        char type;
        int index;
        cin >> type >> index;
        if (type == 'R')
        {
            //row operation
            for (int j = 0; j < columns; j++)
            {
                /* code */
            }
            
        } else {
            //column operation
        }
        
    }
}