#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    // runs for each length of crop
    for (int i = 0; i < N; i++)
    {
        int combinations = N - i;
        int calc[combinations][i];
        // runs for amount each crop occurs
        for (int j = 0; j < combinations; j++)
        {
            // gets all number in crop
            for (int k = 0; k < (i + 1); k++)
            {
                calc[j][k] = arr[j + k];
            }
        }
        for (int j = 0; j < combinations; j++)
        {
            for (int k = 0; k < (i + 1) / 2; k++)
            {
                cout << abs(calc[j][k] + calc[j][i-k]) << endl;
            }
        }
    }
}