#include <bits//stdc++.h>

using namespace std;
/*
small pumpkin is worth $1
a medium pumpkin is worth $5
a large pumpkin is worth $10 dollars
*/
int main () {
    int money = 0;
    int rows; cin >> rows;
    int columns; cin >> columns;
    char arr[rows][columns];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            char temp;
            cin >> temp;
            arr[i][j] = temp;
        }
    }
    int rpos;
    int cpos;
    cin >> rpos >> cpos;
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (arr[i][j] != '*')
            {
                bool collision = false;
                for (int k = 0; k < abs(rpos-k); k++)
                {
                    if (arr[rpos-k][j] == '*')
                    {
                        bool collision = true;
                        
                    }
                }
                for (int l = 0; l < abs(cpos-l); l++)
                {
                    if (arr[i][cpos-l] == '*')
                    {
                        bool collision = true;
                        
                    }
                }
                if (collision == false)
                {
                    if (arr[i][j] == 'S')
            {
                money += 1;
            }
            if (arr[i][j] == 'M')
            {
                money += 5;
            }
            if (arr[i][j] == 'L')
            {
                money += 10;
            }
                }
                
            }
        }
    }
    cout << money;
    return 0;
}


/*
for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (arr[i][j] == 'S')
            {
                money += 1;
            }
            if (arr[i][j] == 'M')
            {
                money += 5;
            }
            if (arr[i][j] == 'L')
            {
                money += 10;
            }
        }
    }
*/