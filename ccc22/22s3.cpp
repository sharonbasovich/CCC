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

/*
    M = N
    m and n are 5
    1 2 3 4 4
    4 3 2 1 1 good notes


*/

int main()
{
    int N, M, K;
    cin >> N;
    cin >> M;
    cin >> K;

    // int maxGoodPieces = N + N - 1;
    // int arr[N];
    // int minGoodPieces = N;
    // for (int i = 0; i < N; i++)
    // {
    //     arr[i] = (i % 2) + 1;
    // }
    // if (maxGoodPieces < K)
    // {
    //     cout << -1;
    // }
    // else if (minGoodPieces > K)
    // {
    //     cout << -1;
    // }

    // else if (maxGoodPieces == K)
    // {
    //     for (int i = 0; i < N; i++)
    //     {
    //         cout << arr[i] << " ";
    //     }
    // }
    // else
    // {
    //     for (int i = 0; i < N; i++)
    //     {
    //         arr[i] = 1;
    //     }
    //     int piecesToAdd = K - N;
    //     if (!(piecesToAdd % 2))
    //     {
    //         int i = 0;
    //         while (piecesToAdd > 0)
    //         {
    //             if ((i % 2))
    //             {
    //                 arr[i] = 2;
    //                 piecesToAdd -= 2;
    //             }
    //             i++;
    //         }
    //     }
    //     else
    //     {
    //         int i = 0;
    //         while (piecesToAdd > 0)
    //         {
    //             if (!(i % 2))
    //             {
    //                 arr[i] = 2;
    //                 piecesToAdd -= 2;
    //             }
    //             i++;
    //         }
    //     }

    // for (int i = 0; i < (maxGoodPieces - K + 1); i++)
    // {
    //     // nums in a row same decreases by nums-1
    //     arr[i] = 1;
    // }
    // for (int i = 0; i < N - (maxGoodPieces - K + 1); i++)
    // {

    //     arr[i] = 2 - (i % 2);
    // }

    int arr[N];
    for (int i = 0; i < N; i++)
    {
        arr[i] = i + 1;
    }

    int maxGood = (N + 1) * N / 2;
    int minGood = N;

    if (K > maxGood || K < minGood)
    {
        cout << -1;
    }
    else if (K == maxGood)
    {
        for (int i = 0; i < N; i++)
        {
            cout << arr[i] << " ";
        }
    }
    else if (K = minGood)
    {
        for (int i = 0; i < N; i++)
        {
            cout << 1 << " ";
        }
    }
    else
    {
        //1 2 3 4 4
        //4 3 2 1 1
        //decreased by 4


        //1 2 2 3 4
        //3 2 1 2 1 = 9
        //decreased by 3 increased by 1 net -2

        //1 2 2 3 4
        //2 1 3 2 1
        //

        //1 2 4 4 4
        //3 2 1 1 1 =
        //decreased by 3 no incfreased net -3

        //2 2 3 4 5
        //1 4 3 2 1 = 11
        //decreased by 4 no increase
        //decreased

        //1 2 2 4 5
        //2 1 3 2 1 = 9
        // decrease

        //
        


        while (maxGood > K)
        {
            // try to get maxGood to k
            for (int i = (N - 1); i > -1; i--)
            {
                if ((maxGood - K) >= (N - 1))
                {
                    arr[i] = arr[i - 1];
                    maxGood -=
                } else {
                    arr[i] = arr[]
                }
            }
        }
        if (maxGood == K)
        {
            for (int i = 0; i < N; i++)
            {
                cout << arr[i] << " ";
            }
        }
        else
        {
            cout << -1;
        }
    }
}
