#include <bits//stdc++.h>

using namespace std;
/*
    .
.       .
    .
*/
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < (n / 2); j++)
    {
        if (arr[j] == arr[(n / 2) + j])
        {
            total += 2;
        }
    }
    cout << total;
}