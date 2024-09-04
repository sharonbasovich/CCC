#include <bits//stdc++.h>
/*

5
1 0 1 0 1
0 0 0 0 0

C - number of clumns
Rows is always 2
black is 1 white is 0
[0,0] [0,1]
[1,0] [1,1]
*/
using namespace std;

int main () {
    //input tiles as a 2d array
    int c; cin >> c;
    int tape = 0;
    int arr[2][c];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
            //cout << arr[i][j];
        }
        //cout << endl;
    }

    //calulate tape needed per triangle

    //top except start and end

        for (int l = 0; l < c; l++)
        {
            if (arr[0][l] == 1)
            {
            int adjacent = 0;
            if (arr[1][l] == 1)
            {
                if(l % 2 == 0)
                {
                adjacent++;
                }
            }
            
            if (l != 0)
            {
            if (arr[0][l-1] == 1)
            {
                adjacent++;
            }
            }
            //check if facing top
            if (l != (c-1))
            {
            if (arr[0][l+1] == 1)
            {
                adjacent++;
            }
            }
            tape += 3 - adjacent;
            }
        }
    
    //bottom except start and end
        for (int l = 0; l < c; l++)
        {
            if (arr[1][l] == 1)
            {
            int adjacent = 0;
            if (arr[0][l] == 1)
            {
                if(l % 2 == 0)
                {
                adjacent++;
                }
            }
            if (l != 0)
            {
            if (arr[1][l-1] == 1)
            {
                adjacent++;
            }
            }
            if (l != (c-1))
            {
            if (arr[1][l+1] == 1)
            {
                adjacent++;
            }
            }
            tape += 3 - adjacent;
            }
        }
    
    //start and end
    
    /*
    if (arr[0][0] == 1)
            {
            int adjacent = 0;
            if (arr[1][0] == 1)
            {
                
                adjacent++;
            }

            if (arr[0][1] == 1)
            {
                adjacent++;
            }
            tape += 3 - adjacent;
            }

    if (arr[0][c - 1] == 1)
            {
            int adjacent = 0;
            if (arr[1][c-1] == 1)
            {
                
            }

            if (arr[0][c-2] == 1)
            {
                adjacent++;
            }
            tape += 3 - adjacent;
            }
    if (arr[1][0] == 1)
            {
            int adjacent = 0;
            if (arr[0][0] == 1)
            {
                adjacent++;
            }

            if (arr[1][1] == 1)
            {
                adjacent++;
            }
            tape += 3 - adjacent;
            }

    if (arr[1][c - 1] == 1)
            {
            int adjacent = 0;
            if (arr[0][c-1] == 1)
            {
                adjacent++;
            }

            if (arr[1][c-2] == 1)
            {
                adjacent++;
            }
            tape += 3 - adjacent;
            }
        
    
    
    */
   cout << tape;
    return 0;
}