#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int count = 0;
    for (int i = 0; i < (N/4) + 1; i++)
    {
        int subtracted = N - (4 * i);
        if (subtracted % 5 == 0)
        {
            count++;
        }
        
    }
    cout << count;
    
}