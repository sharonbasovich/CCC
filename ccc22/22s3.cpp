#include <bits/stdc++.h>

using namespace std;

// N is length of notes
// M is highest pitch they can play (pos int)
// K is number of good pieces

// case 1: 2 or 1
//  1 2 1 2 2 2
// flipping outside decreases by one
// flipping inside decreases by two
// four in a row decreases by three

// 1 1
// 1 2
int main()
{
    int N, M, K;
    cin >> N;
    cin >> M;
    cin >> K;
    int maxGoodPieces = N + N - 1;
    int arr[N];
    int minGoodPieces = N;
    for (int i = 0; i < N; i++)
    {
        arr[i] = (i % 2) + 1;
    }
    if (maxGoodPieces < K)
    {
        cout << -1;
    }
    else if (minGoodPieces > K)
    {
        cout << -1;
    }

    else if (maxGoodPieces == K)
    {
        for (int i = 0; i < N; i++)
        {
            cout << arr[i] << " ";
        }
    }
    else
    {
        for (int i = 0; i < N; i++)
        {
            arr[i] = 1;
        }
        int piecesToAdd = K - N;
        if (!(piecesToAdd % 2))
        {
            int i = 0;
            while (piecesToAdd > 0)
            {
                if ((i % 2))
                {
                    arr[i] = 2;
                    piecesToAdd-= 2;
                }
                i++;
            }
        }
        else
        {
            int i = 0;
            while (piecesToAdd > 0)
            {
                if (!(i % 2))
                {
                    arr[i] = 2;
                    piecesToAdd-= 2;
                }
                i++;
            }
        }

        // for (int i = 0; i < (maxGoodPieces - K + 1); i++)
        // {
        //     // nums in a row same decreases by nums-1
        //     arr[i] = 1;
        // }
        // for (int i = 0; i < N - (maxGoodPieces - K + 1); i++)
        // {

        //     arr[i] = 2 - (i % 2);
        // }
        for (int i = 0; i < N; i++)
        {
            cout << arr[i] << " ";
        }
    }
}