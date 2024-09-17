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
    for (int i = 1; i < N + 1; i++)
    {
        int combinations = N - i + 1;
        int calc[combinations][i];
        // runs for amount each crop occurs
        for (int j = 0; j < combinations; j++)
        {
            // gets all number in crop
            for (int k = 0; k < i; k++)
            {
                calc[j][k] = arr[j + k];
                //cout << arr[j+k];
            }
        }

        int symmetry[combinations];
        for (int j = 0; j < combinations; j++)
        {
            symmetry[j] = 0;
            for (int k = 0; k < (i + 1) / 2; k++)
            {
                symmetry[j] += abs(calc[j][k] - calc[j][i-1-k]);
            }
        }
        sort(symmetry, symmetry + combinations);
        cout << symmetry[0] << " ";
    }
}