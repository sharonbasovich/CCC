#include <bits/stdc++.h>
using namespace std;
bool magicSquare(void);
int cases;
int main () {
    cin >> cases;
    bool isMagicSquare[cases];
    for (int i = 0; i < cases; i++)
    {
        isMagicSquare[i] = magicSquare();
    }
    for (int j = 0; j < cases; j++)
    {
        if(isMagicSquare[j] == true)
        {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }
    }
}
bool magicSquare(void) {

    bool isMagicSquare = true;
    int square[50][50];
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t; j++)
        {   
            cin >> square[i][j];
        }
    }
    int rowSum[50];
    int columnSum[50];
    for (int i = 0; i < t; i++)
    {
        rowSum[i] = 0;
        columnSum[i] = 0;
        for (int j = 0; j < t; j++)
        {   
            rowSum[i] += square[i][j];
            columnSum[i] += square[j][i];
        }
    }
    for (int i = 0; i < t-1; i++)
    {
        if(rowSum[i] != rowSum[i+1])
        {
            isMagicSquare = false;

        }
        if(columnSum[i] != columnSum[i+1])
        {
            isMagicSquare = false;

        }
    }
    if (columnSum[0] != rowSum[0])
    {
        isMagicSquar    

    }
    if (isMagicSquar    
    {
        return false    
    }
    else{
        return true;    
    }
}